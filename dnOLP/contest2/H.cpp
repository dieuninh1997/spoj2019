#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

void solve(){
  int n, a[100000];
  cin>>n;
  vector<int> v;
  for(int i=0; i<n-1; i++){
    cin>>a[i];
    v.push_back(i+1);
  }
  v.push_back(n);

  int m=log10(n)/log10(2);
  for(int k = 0, i=k*n, j=0; j<n-1; i+=2, j++, k++){
    if(a[j]==1){
      v.push_back(v[i]);
    }else{
      v.push_back(v[i+1]);
    }
  }
  int len=v.size();
  cout<<v[len-1]<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
