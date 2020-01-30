#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  string s;
  cin>>s;

  int len=s.length(),r,c;
  for(int i=sqrt(len); i>=1; i--){
    if(len%i==0){
      r=i;
      c=len/r;
      break;
    }
  }
  if(c==1)cout<<s<<endl;
  else{
    char st[100][100];
    int k=0;
    for(int i=0; i<c; i++){
      for(int j=0; j<r; j++){
        st[j][i]=s[k++];
      }
    }

    for(int i=0; i<r; i++){
      for(int j=0; j<c; j++){
        cout<<st[i][j];
      }
    }
  }
}
int main(){
    solve();
    return 0;
}

