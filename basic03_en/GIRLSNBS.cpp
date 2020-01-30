#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

void solve(){
  int g,b, ans=0;
  
  while(cin>>g>>b && g!=-1 && b!=-1){
    if(b<g){
      ans=g/(b+1) + (g%(b+1)==0 ? 0: 1);
    }else if(b>g){
      ans=b/(g+1) + (b%(g+1)==0 ? 0: 1);
    }else{
      ans=(g==0)?0:1;
    }
    cout<<ans<<endl;
  }
}
int main(){
    solve();
    return 0;
}

