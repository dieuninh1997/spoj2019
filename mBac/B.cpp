#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)


void solve(){
  string a, b;
  cin>>a>>b;
  int n=min(a.length(), b.length());
  
  for(int i=0; i<n; i++){
    set<string> c=sub(a,b,i);
  }
}


int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



