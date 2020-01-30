#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

void solve(){
  ll m;
  cin>>m;
  ll x, y;
  cin>>x>>y;
  ll w, h;
  cin>>w>>h;
  ll t_h = ceil(float(h+y)/m) - floor((float)y/m);
  ll t_w = ceil(float(x+w)/m)-floor((float)x/m);
  cout<<t_h*t_w<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
