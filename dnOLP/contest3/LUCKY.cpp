#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
  int n;
  vector<int> a;
  cin>>n;
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  ll s=0;
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      s+= (ll)a[i]*a[j];
    }
  }
  cout<<s<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
