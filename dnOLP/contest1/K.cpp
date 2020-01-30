#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

bool bp(ll n){
  return sqrt(n) == (ll)sqrt(n);
}

void solve(){
  ll n;
  cin>>n;
  if(bp(n)){
    cout<<n;
    return;
  }
  if(bp(n/2)){
    cout<<n/2;
    return;
  }

  for(ll i=sqrt(n); i>0; i--){
    if(n%(i*i)==0){
      cout<<i*i;
      return;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
