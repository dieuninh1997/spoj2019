#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  string s;
  while(cin>>s && s!="0"){
    ll a[5005], len=s.length(), x;
    memset(a, 0, sizeof a);
    a[0]=1;
    for(int i=1; i<= len -1; i++){
      x=(s[i-1]-'0')*10 + (s[i]-'0');
      if(s[i]-'0'){
        a[i]=a[i-1];
      }
      if(x>=10 && x<=26){
        a[i] += a[(i-2) < 0 ? 0: i-2];
      }
    }
    cout<<a[len-1]<<endl;
  }
}

/*
1 2 2 4 6
25114
-> 25, 51, 11, 14
*/
int main(){
    solve();
    return 0;
}

