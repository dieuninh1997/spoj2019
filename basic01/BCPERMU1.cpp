#include<bits/stdc++.h>
using namespace std;

int s2i(string s){
  int i;
  istringstream ( s ) >> i;
  return i;
}

void solve(){
  int n, k;
  cin>>n>>k;
  string s[10], t_s;
  for (int i=0; i<n; i++) {
    cin>>s[i];
  }
 
  int a[k];
  for (int i=0; i<k; i++) {
    a[i] = i;
  }

  int _max = 0, _min = 1e9, ans = 1e9, i1, i2, u, sum=0;
  while(1){
    _max = 0;
    _min = 1e9;
    for(int i=0;i<n; i++){
      sum = 0;
			u = 0;
			for(int j=0; j<k; j++){
				t_s[u++] = s[i][a[j]];
			}
			for(int i=0; i<k; i++){
				sum += pow(10,k-i-1)*(t_s[i]-'0');
			}
      _max=max(sum, _max);
      _min=min(sum, _min);
		}

    ans = min(ans, (_max - _min));
    i1 = k-2;
    while(i1 >= 0 && a[i1] > a[i1+1]) i1--;
    if(i1 == -1) break;
    i2 = k-1;
    while(a[i2] < a[i1]) i2--;
    swap(a[i1], a[i2]);
    sort(a+i1+1, a+i1+1+(k-i1-1));
  }
  cout<<ans<<endl;
}
int main(){
    solve();
    return 0;
}

/*
3 3
010
909
012

a[3] = {0, 1, 2}
swap {0, 2, 1}
*/
