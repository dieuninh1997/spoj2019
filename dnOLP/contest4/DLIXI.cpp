#include<bits/stdc++.h>
using namespace std;

void solve(){
  int a, b,c, d=0;
  cin>>a>>b>>c;
  //boi C >= a, <= b
  // int s=a/c, e=b/c;
  // int ans = e - s + (s > 0 ? 1 : 0);
  // cout<<ans<<endl;
  int i=0;
  while(i*c<=b){
    if(i*c>=a)
      d++;
    i++;
  }
  cout<<d<<endl;
}

int main(){
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
