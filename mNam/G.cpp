#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

void solve(){
  int n, x;
  ll s;
  cin>>n>>s;
  pair<int, vector<int>> p[10005], ans[100];
  for(int i=1; i<=n; i++){
    cin>>p[i].first;
    auto it=find(p, p+n, p[i].first);
    if(it!=p+n)
     it->second.push_back(i);
  }
  sort(p, p+n);
  
  vector<int> a, b;
  int l=1, r=n, d, maxA=0, idx=n;
  int sqr = sqrt(s);

  for(int i=1; i<=n; i++){
    if(p[i].first > sqr){
      l=i;
      break;
    }
  }


  int len=l;
  for(int i=1; i<=len; i++){
    int area = p[i].first * p[l].first;
    if(area > s){
      continue;
    }
    if(area <= s){
      maxA=max(maxA, area);
      
    }
  }
  cout<<idx<<endl;
}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



