#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

bool isPrime[2000010];
void snt(int n){
  for(int i=0; i<=n; i++){
    isPrime[i]=true;
  }
  isPrime[0]=false;
  isPrime[1]=false;
  for(int i=2; i*i <=n; i++){
    if(isPrime[i]==true){
      // Mark all the multiples of i as composite numbers
      for(int j=i*i; j<=n; j+=i){
        isPrime[j]=false;
      }
    }
  }
}


void solve(){
  snt(200000);
  int p;
  cin>>p;
  int prev = (p-1)/2;
  if(isPrime[p] && isPrime[prev]){
    cout<<"YES"<<endl;
  }else cout<<"NO"<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
