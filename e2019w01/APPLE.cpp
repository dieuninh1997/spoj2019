#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, p;
  cin>>n>>p;
  vector<string>a;
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    a.push_back(s);
  }
  long long ans=0, d=0;
  for(int i=n-1; i>=0;i--){
    if(a[i]=="half"){
      d*=2;
    }else{
      d=d*2+1;
    }
    ans+=p*d/2.0;
  }
  cout<<ans<<endl;
}

int main(){
    solve();
    return 0;
}

