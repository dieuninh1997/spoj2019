#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

long n, s[100], b[100], chua=1, cay=0, ans=LONG_MAX, a[100];
bool check = true;

void f(long i){
  for(int j=0; j<=1; j++){
    a[i] = j;
    if(j==1){
      chua*=s[i];
      cay+=b[i];
    }
    if(i==n){
      if(check){
        check=false;
        continue;
      }
      ans = min(ans, abs(chua-cay));
    } else {
      f(i+1);
    }
    if(j==1){
      chua/=s[i];
      cay-=b[i];
    }
  }
  
}

void solve(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>s[i]>>b[i];
  }
  f(1);
  cout<<ans<<endl;
}
int main(){
    solve();
    
    return 0;
}

