#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

//a di len
//b di xuong
//c thang may
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve(){
  ll n, a, b, c;
  cin>>n>>a>>b>>c;
  vector<ll>ans;
  ll l, r, ucln = gcd(a, c+b);
  if(a>(c+b))
  {
    l=ucln;
    r=n;
  } else {
    l=1;
    r=ucln;
  }
  for(int i=l; i<=r; i++){
    //dung tai tang i
    vector<ll> time;//time moving
    for(int j=1; j<=n; j++){
      ll tmp = c*i;
      if(j==i){
        //nothing
      }else if(j>i){
        tmp+=(j-i)*a;//up
      }else if(j<i){
        tmp -= (j-i)*b;//up->down
        ll upB = j*a;
        tmp = min(upB, tmp);
      }
      time.push_back(tmp);
    }
    auto maxTime = max_element(time.begin(), time.end());
    ans.push_back(*maxTime);
  }
  auto res = min_element(ans.begin(), ans.end());
  cout<<*res<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
