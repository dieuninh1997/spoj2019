#include<bits/stdc++.h>
using namespace std;

void solve(){
  string s, t;
  cin>>s;
  int len = s.length(), d=1, ansL=1, check = 1;
  string ans = s;
  for(int i=1; i<=len; i++){
    t=s.substr(0, i);
    d=1;
    check = 1;
    for(int j=i; j<=len-i; j+=i){
      if(t==s.substr(j, i)) {
        d++;
      }else{
        check =0;
        break;
      }
    }
    if(d>=ansL && check){
      ans= t;
      ansL = d;
    }
  }
  cout<<ansL<<ans;
}
//abcabc
//t=a
//t=ab
//t=abc
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
