#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

void print(vector<int> a){
  for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

vector<vector<int> > subset(vector<int> a){
  vector<vector<int> > res;
  vector<int> empty;
  res.push_back(empty);
  for(int i=0; i<a.size(); i++){
    vector<vector<int> > tmp = res;
    for(int j=0; j<tmp.size(); j++){
      tmp[j].push_back(a[i]);
    }
    for(int j=0; j<tmp.size(); j++){
      print(tmp[i]);
      res.push_back(tmp[i]);
    }
  }
  return res;
}

void solve(){
  int n, x;
  cin>>n;
  vector<int> a;
  for(int i=0; i<n; i++){
    cin>>x;
    a.push_back(x);
  }
  
  subset(a);
}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



