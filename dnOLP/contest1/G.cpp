#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

void solve(){
  int t;
  cin>>t;
  while(t--){
    int n, a[200];
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=n-1; i>=0; i--)cout<<a[i]<<" ";
    cout<<endl;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
