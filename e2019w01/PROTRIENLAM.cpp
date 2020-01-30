#include<bits/stdc++.h>
using namespace std;
int sum(int a[], int n)  
{ 
    int initial_sum  = 0;  
    return accumulate(a, a+n, initial_sum); 
} 

bool comp(int a, int b){
  return a<b;
}
  
void solve(){
  int n;
  cin>>n;
  int b[1001]={0}, t=0;
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    b[x]++;
  }
  int *m;
  m = max_element(b, b+1001, comp);
  int sum = accumulate(b, b+1001, 0, plus<int>()); 
  while(sum > *m){
    for(int i=0; i<1001; i++){
      if(b[i]>0){
        t++;
        b[i]--;
      }
    }
    m--;
    t--;
    sum = accumulate(b, b+1001, 0, plus<int>());
  }
  cout<<t<<endl;
}
int main(){
    solve();
    return 0;
}


