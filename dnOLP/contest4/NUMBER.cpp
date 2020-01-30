#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, s=0, a[100005];
  cin>>n;
 
  for(int i=0; i<n; i++)
    cin>>a[i];

  for(int i=0; i<n; i++){
    s+= a[i]/2;
    a[i]%=2;
  }
  int c=0;
  for(int i=0; i<n; i++){
    c+=a[i];
    if(a[i]==0 || i==n-1){
      if(c%2==0) s+=c/2;
      else {
        if(i>0 && a[i-1]==1 && a[i+1]==1 && a[i]==0){
          s= s-1 +2;
        }
        // cout<<c<<endl;
        if(i==n-1){
          s+=(c-1)/2;
        }
      }
      
      c=0;
    }
  }
  cout<<s;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
