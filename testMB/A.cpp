#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve(){
  int n, x, j=0;
  
  vector<int> a,b,dif;
  cin>>n;
  for(int i=0; i<n; i++){
   cin>>x;
   a.push_back(x);
  }
  for(int i=1; i<=a[n-1]; i++){
    b.push_back(i);
  }

  set_difference(b.begin(), b.end(), a.begin(), a.end(),inserter(dif, dif.begin()));

  if(dif.size()==0){
    cout<<"good job"<<endl;

  }else{
    for (auto i : dif) cout << i << endl;
  }

}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



