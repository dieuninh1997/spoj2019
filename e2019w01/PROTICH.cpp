#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

void solve(){
  int n;
  cin>>n;
  string ans;
  if(n==0)cout<<10<<endl;
  else if(n==1){
    cout<<1<<endl;
  }else{
    for(int i=9; i>1 && n!=1; i--){
      while(n%i==0){
        ans.push_back('0'+i);
        n/=i;
      }
    }
    if(n!=1)cout<<-1<<endl;
    else{
      reverse(ans.begin(), ans.end());
      cout<<ans<<endl;
    }
  }
}
int main(){
    solve();
    return 0;
}


//12
//26
