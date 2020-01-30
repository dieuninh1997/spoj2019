#include<bits/stdc++.h>
using namespace std;
string a,b,s;
const int N=2e6+5;
int kmp[N];

void solve(){
  cin>>a>>b;
  s= b+"#"+a;
  kmp[0]=0;
  for(int i=1; i<=s.size()-1; i++){
    int j=kmp[i-1];
    while(j>0 && s[j]!=s[i]){
      j=kmp[j-1];
    }
    if(s[i]==s[j]){
      j++;
    }
    kmp[i]=j;
  }

  for(int i=b.size()+1; i<=s.size()-1; i++){
    if(kmp[i]==b.size()){
      cout<<i-2*b.size()+1<<" ";
    }
  }
}

int main(){
  solve();
  return 0;
}
