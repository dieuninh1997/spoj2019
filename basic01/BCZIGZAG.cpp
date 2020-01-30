#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  int x=0,y=0;
  long long s=1, t=0;
  for(int i=0; i<k; i++){
    char c;
    cin>>c;
    if(c=='L')y--;
    else if(c=='R')y++;
    else if(c=='U')x--;
    else if(c=='D')x++;
    
    if(x+y < n){  
      if((x+y)&1){
        t=x + 1 + (x+y)*(x+y+1)/2;
      }else{
        t=y + 1 + (x+y)*(x+y+1)/2;
      }
    }else{
      if((x+y)&1){
        t=n-1-y + (x+y)*(x+y+1)/2 - ((x+y-n)*(x+y-n+1)) +1;
      }else{
        t=n-1-x + (x+y)*(x+y+1)/2 - ((x+y-n)*(x+y-n+1)) +1;
      }
    }
    s+=t;
  }
  cout<<s<<endl;
}
int main(){
    solve();
    return 0;
}
