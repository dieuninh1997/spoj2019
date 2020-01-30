#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){ //ACTOR
  int r;
  cin>>r;
  int t;
  cin>>t;
  while (t--) {
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    if (r == 1) {
      if(a==0 || b==0 || c==0) 
        cout<<0<<endl;
      else
      {
        int ans = n - (n-a + n-b + n-c);
        cout<< (ans < 0 ? 0 : ans)<<endl;
      }
        
    } else if (r==2) {
      cout<<min(a, min(b, c))<<endl;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
