#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int val(char c){
  switch (c)
  {
    case 'I': return 1;
    case 'V': return 5;    
    case 'X': return 10;    
    case 'L': return 50;    
    case 'C': return 100;    
    case 'D': return 500;    
    case 'M': return 1000;    
  }
}

void solve(){
  string s;
  cin>>s;
  int len =s.length();
  int res=0;
  for(int i=len-1; i>=0; i--){
    res += val(s[i]);
    if( (s[i] == 'V' && s[i-1] == 'I') || 
        (s[i] == 'X' && s[i-1] == 'I') ||
        (s[i] == 'C' && s[i-1] == 'X') ||
        (s[i] == 'L' && s[i-1] == 'X') ||
        (s[i] == 'M' && s[i-1] == 'C') || 
        (s[i] == 'D' && s[i-1] == 'C')){
      res -= val(s[i-1]);
      i--;
    }
  }    
  cout<<res<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
