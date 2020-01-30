#include<bits/stdc++.h>
using namespace std;
class Graph{
  int numberOfVertices;
  list<char> *adj;
  set<char> vertices;
  public:
    Graph(set<char> v ){
      adj=new list<char>[numberOfVertices];
      this->vertices=v;
      this->numberOfVertices=v.size();
    }
    void add(char v, char w){
      adj[v].push_back(w);
    }

    //BFS
    bool isReachable(char s, char d){
      if(s==d)return true;//base
      pair<char,bool> *visited=new pair<char,bool>[numberOfVertices];
      for(set<char>::iterator it=vertices.begin(); it!=vertices.end(); it++){
        visited[i]=(make_pair(*it, false));
      }

      //queue for BFS
      list<char> queue;
      visited[s]=true;
    }
}

void solve(){
  int m,n;
  cin>>m>>n;
  set<char> ss;
  for(int i=0; i<m; i++){
    char ori, tran;
    cin>>ori>>tran;
    ss.insert(ori);
    ss.insert(tran);
    
  }
  for(int i=0; i<n; i++){

  }
}
int main(){
    solve();
    return 0;
}

//     3
//   1   4000
//     2

//     3
//   2   4
// 1

