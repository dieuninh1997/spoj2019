#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  char ch;
  cin>>n;
  cin>>ch;
  for(int i=0;i<n; i++){
    string s;
    cin>>s;
    size_t f =s.find(ch);
    if(f != string::npos){
      
    }else{
      cout<<s<<endl;
    }
  }
}

int main(){
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
