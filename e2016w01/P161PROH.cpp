#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  int n, a[3005]={0};
  cin>>n;
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    a[x]=1;
  }
  for(int i=1; i<=3000; i++){
    if(a[i]==0)
    {
      cout<<i<<endl;
      return;
    }
  }
  cout<<n+1<<endl;
}
int main(){
    solve();
    return 0;
}

