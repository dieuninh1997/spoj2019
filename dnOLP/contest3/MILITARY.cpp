#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main(){
	ll n,a,b;
	cin>>n>>a>>b;
  if(a>b)cout<<0<<endl;
  else{
    ll tmp1 = a*(n-1)+b;
    ll tmp2 = b*(n-1)+a;
    ll x = max(tmp1,tmp2);
    ll y = min(tmp1,tmp2);
    cout<<x-y+1;
  }
	
}
