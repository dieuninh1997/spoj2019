#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,m;
  cin>>n>>m;
  map<int,int> mm;
  mm[1]=1;
  for(int i=0; i<m; i++){
    int a, b;
    cin>>a>>b;
    if(mm[a]==1){
      mm[b]=1;
    }else if(mm[b]==1){
      mm[a]=1;
    }
  }
  vector<int>v;
  for(int i=2; i<=n; i++){
    if(mm[i]==0){
      v.push_back(i);
    }
  }
  if(v.size()>0){
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
      cout<<v[i]<<endl;
  }else cout<<0<<endl;
}
int main(){
    solve();
    return 0;
}
