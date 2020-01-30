#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

map<int, ll> m;
ll ex(ll n){
  if(n<12)return n;
  if(m[n]!=0)return m[n];
  return (m[n]=max(n, ex(n/2)+ ex(n/3) + ex(n/4)));
}

void solve(){
  ll n,t=0;
  while(t++ <10){
    cin>>n;
    cout<<ex(n)<<endl;
  }
}
int main(){
    solve();
    return 0;
}

