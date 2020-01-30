#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
string s, ans;
int cap[102];

char f(int idx){
  string ss="";
  int k = s[idx], t=1;
  if(65<=k && k<=67) ss="ABC";
  if(68<=k && k<=70) ss="DEF";
  if(71<=k && k<=73) ss="GHI";
  if(74<=k && k<=76) ss="JKL";
  if(77<=k && k<=79) ss="MNO";
  if(80<=k && k<=83){
    ss="PQRS";
    t=0;
  }
  if(84<=k && k<=86) ss="TUV";
  if(87<=k && k<=90){
    ss="WXYZ";
    t=0;
  }
  ss+=ss;
  int c=0, len=ss.length();
  for(int i=0; i<=len; i++){
    if(ss[i] == s[idx]){
      c++;
      if(c==2){
        c=i;
        break;
      }
    }
  }
  int b=idx%((t==1)?3:4);
  if(cap[idx]){
    return ss[c-b];
  }else{
    return (char(ss[c-b]+32));
  }
}

void solve(){
  while(cin>>s && s!="#"){
    int len = s.length();
    s = "@" + s;
    for(int i=1; i<=len; i++){
      int x = s[i];
      if(x<97){
        cap[i]=1;
      }else{
        cap[i]=0;
        s[i] = char(s[i]-32);
      }
    }
    ans= "";
    for(int i=1; i<= len; i++){
      ans+= f(i);
    }
    cout<<ans<<endl;
  }  
}

int main(){
  solve();
  return 0;
}

