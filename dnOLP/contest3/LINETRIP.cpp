#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, a[110];
  cin>>n;
  memset(a, 0, sizeof a);
  
  for(int i=0; i<n; i++){
    cin>>a[i];
  }

  sort(a, a+n);
  int s = 0;
  for(int i=0; i<n; i++){
    // cout<<"i="<<i<<" a["<<i<<"]="<<a[i]<<" a["<<i+1<<"]="<<a[i+1];
    if (a[i]*a[i+1] < 0) {
      s+=abs(a[i+1]) + abs(a[i]);
    }
    else {
      s+=abs(a[i+1] - a[i]);
    }
    // cout<<" s="<<s<<endl;
  }
  s += abs(a[0]);
  cout<<s<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
