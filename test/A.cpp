#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve(){
  int n, k;
  cin>>n>>k;
  vector<int> a, b;
  FOR(i,0,n){
    int x;
    cin>>x;
    a.push_back(x);
  }
  a.push_back(0);
  sort(a.begin(), a.end());
  
  FOR(i,0,n+1){
    if(a[i]==0){
      
    }
  }
  
  int i=0, s=0;
  while(k>0){
    s+=a[i];
    i++;
    k--;
  }
  cout<<s<<endl;
}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



