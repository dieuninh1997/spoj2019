#include<bits/stdc++.h>
using namespace std;

int countZero(int n){
  int k=1, t=0;
  while(pow(5,k)<=n){
    t+=n/pow(5,k);
    k++;
  }
  return t;
}

void solve(){
  int m;
  cin>>m;
  set<int> s;
  int n=5;
  while(n<=10e6){
    long long d=countZero(n);
    if(d==m)
    {
      s.insert(n);
    }else if(d>m){
      break;
    }
    n++;
  }
  cout<<s.size()<<endl;
  for(set<int>::iterator it=s.begin(); it!=s.end(); it++){
    cout<<*it<<" ";
  }  
}
int main(){
    solve();
    return 0;
}


