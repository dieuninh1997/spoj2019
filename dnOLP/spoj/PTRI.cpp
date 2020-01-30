#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

void snt(int n){
  bool isPrime[n+1];
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

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
