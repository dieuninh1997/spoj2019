#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, m, p;
  cin>>n>>m>>p;
  bool hl = true;
  vector<pair<int, int> > a, b, c;
  for(int i = 0; i < n; i++){
    int like, hate;
    cin>>like>>hate;
    if(p == hate) {
      hl=false;
      b.push_back(make_pair(like, hate));
    }
    a.push_back(make_pair(like, hate));
  }

  if(hl) {
    cout<<"-1"<<endl;
    return;
  }
  int d=1, found = false;
  while(1){
    p=b[0].first;
    c.clear();
    for(int j=0; j<n; j++){
      if(p==a[j].second){
        //
        c.push_back(a[j]);
      }
    }
    if(c.size()>0){
      d++;
      b=c;
    }
    else {
      cout<<d<<endl;
      found = true;
      break;
    }
  }

  if(!found) cout<<"-1"<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
