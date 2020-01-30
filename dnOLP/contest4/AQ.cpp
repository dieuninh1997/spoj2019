#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, m;
  cin>>n>>m;
  vector<int> a(n);
  for(int &x: a){
    cin>>x;
  }

  for(int i=0; i<m+2; i++){
    sort(a.begin(), a.end());
    char ch;
    cin>>ch;
    if(ch=='F'){
      int c, h;
      cin>>c>>h;
      //c phan tu lon hon = h
      int j=lower_bound(a.begin(), a.end(), h) - a.begin();
      // cout<<"h="<<h<<" j="<<j<<endl;
      for(int i=j; i<n; i++){
        if(c==0)break;
        if(a[i]>= h){
          a[i]++;
          c--;
        }
      }

      // for(int i=0; i<n; i++){
      //   cout<<a[i]<<" ";
      // }
      // cout<<endl;
    }else if (ch == 'C'){
      int l, r, d=0;
      cin>>l>>r;
      for(int i=0; i<n; i++){
        if(a[i]>=l && a[i]<=r){
          d++;
        }
      }
      cout<<d<<endl;
    }
  }
}

int main(){
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
