#include<bits/stdc++.h>
using namespace std;

pair<int, int> a[100005];
vector<vector<int> > g;
int n, m;

int in(vector<int> &path){
 for(int i=0; i<path.size(); i++){
   cout<<path[i]<<" ";
 }
 cout<<endl;

  vector<int>::iterator it;
  it = find(path.begin(), path.end(), 1);

  if( it != path.end()){ 
    int xh = distance(path.begin(), it);
    cout<<"xh="<<xh<<endl;
    int size = path.size(), src = path[0], fee = 0;
      //cal fee -> 1
      int t=1;
      if(xh != 0){
        fee += a[t].second;
      }
      cout<<"F1="<<fee<<endl;
      //cal fee tpx -> N
      t= path[0];
      for(int i=0; i<size; i++){
        if(a[t].second>0){
          a[t].second--;
        }else{
          fee += a[t].first;
          t=i;
        }
      }
      cout<<"F2="<<fee<<endl;
      return fee;
  }
  return INT_MAX;
}

bool isNotVisited(int x, vector<int> &path){
  for(int i=0; i<path.size(); i++){
    if(path[i]==x)return false;
  }
  return true;
}

int bfs(vector<vector<int> > &, int src, int dst){
  queue<vector<int> > q;
  vector<int> path;
  path.push_back(src);
  q.push(path);

  while(!q.empty()){
    path = q.front();
    q.pop();
    int last = path[path.size()-1];
    if(last == dst){
      return in(path);
    }

    for(int i=0; i<g[last].size(); i++){
      if(isNotVisited(g[last][i], path)){
        vector<int> newPath(path);
        newPath.push_back(g[last][i]);
        q.push(newPath);
      }
    }
  }
}

void solve(){
  cin>>n>>m;
  for(int i=1; i<=n; i++){
    cin>>a[i].first>>a[i].second;
  }
  for(int i=1; i<=n; i++){
    cout<<a[i].first<<" "<<a[i].second<<endl;
  }
  cout<<endl;
  g.resize(100005);
  for(int u, v, i=0; i<m; i++){
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  
  int fee = INT_MAX;
  for(int i=1; i<n; i++){
    fee = min(fee, bfs(g, i, n));
  }
  cout<<fee<<endl;
 
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
