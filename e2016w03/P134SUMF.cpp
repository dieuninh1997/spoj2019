#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  int n, k;
  cin>>n>>k;
  bool check[1001];

  for(int i=2; i<=n;i++){
    check[i]=true;
  }

  int d=0, ans, j;

  for(int i=2; i<=n; i++){
    if(d<k && check[i]){
      check[i]=false;
      d++;
      if(d==k){
        ans=i;
      }

      j=i*i;
      while(d<k && j<=n){
        if(check[j]){
          check[j]=false;
          d++;
          if(d==k) ans=j;
        }
        j+=i;
      }
    }
  }
  cout<<ans<<endl;
}
int main(){
    solve();
    return 0;
}

