#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

ll k, a[1000001];

void init(){
  for(int i=0; i<=1000000; i++){
    a[i]=i*i;
  }
}

pair<bool, ll> isSquare(ll n){
  pair<bool, ll> ans;
  long double sr = sqrt(n); 
  ans.first=((sr - floor(sr)) == 0);
  ans.second=sr;
  return ans; 
}

void solve(){
  cin>>k;
  init();
  if(k==0)cout<<0<<endl;
  else if(k==1) cout<<1<<endl;
  else if(k==2)
    cout<<"none"<<endl;
  else {
    for(int i=0; i<1000000; i++){
      auto t =isSquare(k+a[i]);
      if(t.first){
        cout<<t.second<<endl;
        return;
      }
    }
    cout<<"none"<<endl;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
