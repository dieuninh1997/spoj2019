#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  ll n, i=2, t=1, p=1;
  cin>>n;
  while(n>1){
    if(n%i==0){
      n/=i;
      if(p!=i){
        t*=i;
        p=i;
      }
      i=2;
    }else{
      i++;
    }
  }
  cout<<t<<endl;
}
int main(){
    solve();
    return 0;
}

