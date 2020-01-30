#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

void solve(){
  ll a,b,c;
  cin>>a>>b>>c;
  ll s=a+b+c;
  ll _min = min(a,min(b,c));
  ll _max = max(a,max(b,c));
  cout<<s-_min-_max<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
