#include<bits/stdc++.h>
using namespace std;
int n, minC, t[1000];
char x[1000];

bool same(int i, int j){
  int k = i-j;
  for(int ii=0; ii<=j-1; ii++){
    if(x[i-ii]!= x[k-ii]){
      return false;
    }
  }
  return true;
}

bool check(int i){
  for(int j=1; j<= i/2; j++){
    if(same(i, j)){
      return false;
    }
  }
  return true;
}

void f(int i){
  for(int j='A'; j<='C'; j++){
    x[i] = j;
    if(check(i)){
      if(j=='C'){
        t[i]=t[i-1]+1;
      }else{
        t[i]=t[i-1];
      }
      if(t[i]+(n-i)/4 < minC){
        if(i==n){
          minC=t[n];
          
        }
      }
    }
  }
}

void solve(){
  cin>>n;
  f(1);
}

int main(){
  solve();
  return 0;
}
