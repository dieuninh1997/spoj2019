#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int neg=0, pos=0, zero = 0;
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    if(x<0)neg++;
    else if(x>0)pos++;
    else zero++;
  }
  if(zero == 0 && (neg > 0 || pos > 0)){
    cout<<min(neg, pos)<<endl;
  }
  else {
    cout<<"-1"<<endl;
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
