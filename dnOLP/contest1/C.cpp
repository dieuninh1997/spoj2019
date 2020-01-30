#include<bits/stdc++.h>
using namespace std;

void solve(){
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int a[1001];
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    cout<<*min_element(a,a+n)<<endl;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
