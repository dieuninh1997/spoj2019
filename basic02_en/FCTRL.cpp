#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  ll t,n,ans;
  cin>>t;
  while(t--){
    cin>>n;
    ans=0;
    for(ll i=5; i<=n; i*=5)
      ans+=n/i;
    cout<<ans<<endl;
  }
}
int main(){
    solve();
    return 0;
}

