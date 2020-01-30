#include<bits/stdc++.h>
using namespace std;

void solve(){
//fij tong gia tri lon nhat cua cai tui khi xet tu 1->i
//va trong luong cua cai tui chua vuot qua j
//2TH
//neu khong chon vat i  : Fij = F[i-1][j]
//neu chon vat i        : Fij = V[i] + F[i-1][j-W[i]]
//=> CT
//F0j=0
//Fij=max(F[i-1][j], V[i]+F[i-1][j-W[i]])
  int n, m, v[10005], w[10005], f[1005][1005];
  cin>>n>>m;
  for(int i=1; i<=n; i++){
    cin>>w[i]>>v[i];
  }

  for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      if(w[i] <= j){
        f[i][j] = max (f[i-1][j], v[i] + f[i-1][j-w[i]]);
      }else{
        f[i][j] = f[i-1][j];
      }
    }
  }

  cout<<f[n][m]<<endl;

}


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
