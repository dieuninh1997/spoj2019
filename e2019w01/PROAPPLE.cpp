#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, p;
  cin>>n>>p;
  vector<string> a;
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    a.push_back(s);
  }
  double m=0.5, t=1;
  for(int i=a.size()-1; i>=0; i--){
    if(i==a.size()-1){
      if(a[i]=="halfplus"){
        m=0.5;
        t=1;
      }else{
        m=1;
        t=1;
      }
    }else{
      if(a[i]=="halfplus"){
        m+=(t+0.5);
        t=t*2+1;
      }else{
        m+=t;
        t=t*2;
      }
    }
  }
  cout<<int(m*p)<<endl;
}
/*
h h hp hp hp h
b=0.5
cl=1

b=0.5 + 1+0.5=2
cl=3

b=2+3+0.5=5.5
cl=7

b=5.5 + 7.5=13
cl=15

b=13+15=28
cl=30

b=28+30=58
cl=60

*/
int main(){
    solve();
    return 0;
}

