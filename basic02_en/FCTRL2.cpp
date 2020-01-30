#include<bits/stdc++.h>
using namespace std;

void solve(){
  int t;
  cin>>t;
  while(t--){
    int n, k=0, tmp=0, a[1000]={1};
    cin>>n;
    for(int i=1; i<=n; i++){
      for(int j=0; j<=k; j++){
        a[j]=a[j]*i+tmp;
        tmp=a[j]/10;
        a[j]%=10;
      }
      while(tmp){
        k++;
        a[k]=tmp%10;
        tmp/=10;
      }
    }
    for(int i=k; i>=0; i--)
      cout<<a[i];
    cout<<endl;
  }
}
int main(){
    solve();
    return 0;
}
