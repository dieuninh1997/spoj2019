#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  int n,k;
	cin>>n>>k;
	int a[100005],t = 1;
	int b[100005] = {0};
	cin>>a[0];
	while(n-1 > 0){
		n--;
		int c;
		cin>>c;
		if(c == a[t-1]) continue;
		a[t] = c;
		t++;
	}
	int stress,result = -1,kq = 1;
	for(int i = 1;i< t- 1;i++){
		if(a[i - 1] == a[i + 1]) b[a[i]] += 2;
		else b[a[i]] += 1;
	}
	b[a[0]]++;
	b[a[t-1]]++;
	for(int i = 1;i <= k;i++){
		if(b[i] > result) result = b[i],kq = i;
	}
	cout<<kq<<endl;
}
int main(){
    solve();
    return 0;
}

