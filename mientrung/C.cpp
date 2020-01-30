#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

ll __gcd(ll a, ll b){
  if (b == 0) return abs(a);
    return __gcd(b, a % b);
}

void solve(){
  int t;
  cin>>t;
  while(t--){
    ll x1, y1, x2,y2;
    cin>>x1>>y1>>x2>>y2;
      ll uc1=__gcd(x1,y1);
      ll uc2=__gcd(x2,y2);
      // cout<<uc1<<" vs "<<uc2<<endl;
      if(uc1==uc2)
        cout<<"YES";
      else cout<<"NO";
    cout<<endl;
  }
}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



