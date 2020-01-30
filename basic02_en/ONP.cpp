#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int len=s.length();
    stack<char> sta;
    for(int i=0; i<len; i++){
      if(s[i]=='('){
        sta.push(s[i]);
      }else if(s[i]==')'){
        while (sta.top()!='('){
          cout<<sta.top();
          sta.pop();
        }
         sta.pop();
      }else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
        sta.push(s[i]);
      }else{
        cout<<s[i];
      }
    }
    while(!sta.empty()){
      cout<<sta.top();
      sta.pop();
    }
    cout<<endl;
  }
}
int main(){
    solve();
    return 0;
}

