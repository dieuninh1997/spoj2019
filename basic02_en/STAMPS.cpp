#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  int t, testCase=1;
  cin>>t;
  while(t--){
    int st, n, a[1000001], sum=0;
    cin>>st>>n;
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    sort(a,a+n);
    int i=n;
    while(i-- >=0){
      if(sum>=st)break;
      sum+=a[i];
    }
    if(sum>=st){
      cout<<"Scenario #"<<testCase<<":"<<endl<<n-1-i<<endl;
    }else cout<<"Scenario #"<<testCase<<":"<<endl<<"impossible"<<endl;
    testCase++;
  }
}
int main(){
    solve();
    return 0;
}

