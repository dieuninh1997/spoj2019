#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
struct Point{
  int x;
  int y;
};

struct Hcm{
  Point p1, p2;
};

void solve(){
  int  n, m;
  vector<ll> a, b;
  ll k, x;
  cin>>n>>m>>k;
  for(int i=0; i<n; i++){
    cin>>x;
    a.push_back(x);
  }
  for(int i=0; i<m; i++){
    cin>>x;
    b.push_back(x);
  }


}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



