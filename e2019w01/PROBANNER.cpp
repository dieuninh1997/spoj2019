#include<bits/stdc++.h>
using namespace std;



void solve(){
  string s, a="LAPTRINHPTIT";
  cin>>s;
  int j=0, len=s.length() - a.length();
  for(int i=0; i<s.length(); i++){
    string t=s;
    t.erase(i, len);
    if(t==a){
      cout<<"YES";
      return;
    }
  }
  cout<<"NO";
 
}

int main(){
    solve();
    return 0;
}


//12
//26
