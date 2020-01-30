#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,m, k;
  cin>>n>>m>>k;
  int a=n/2;
  if(n>=2 && m>=1){
    for(int i=a; i>0; i--){
      int sk=n+m-3*i;
      if(2*i<=n && i<=m && sk>=k){
        cout<<i;
        return;
      }
    }
    cout<<0;
  }else{
    cout<<0;
  }
}
int main(){
    solve();
    return 0;
}


//12
//26
