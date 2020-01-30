#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

void solve(){
  int m, n, a, d=0;
  cin>>m>>n>>a;
  if(abs(m-n) < a) cout<<0<<endl;
  else {
    for(int i=m; i<=n-a; i++){
      for(int j=i+a; j<=n; j+=a){
        if((j-i) % a == 0){
          // cout<<i<<" "<<j<<endl;
          d++;
        }
      }
    }
    cout<<d<<endl;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
