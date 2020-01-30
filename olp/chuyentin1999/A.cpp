#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

char reVal(int n){
  if(n>=0 && n<=9){
    return (char)(n+'0');
  }else {
    return (char)(n-10+'A');
  }
}

string convert(string res, int base, int input){
  while(input>0){
    res+=reVal(input%base);
    input/=base;
  }
  reverse(res.begin(), res.end());
  return res;
}

int sumOfDigits(ll n){
  ll s=0;
  for(s=0; n>0; s+=n%10, n/=10);
   return s;
}

void solve(){
  int n;
  cin>>n;
  vector<ll> ans;
  
}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



