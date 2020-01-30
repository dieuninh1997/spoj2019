#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int x, ans = 0;
  for(int i=0; i<n; i++){
    cin>>x;
    ans = ans xor x;
  }
  cout<<ans<<endl;

}

int main(){
  solve();
  return 0;
}
