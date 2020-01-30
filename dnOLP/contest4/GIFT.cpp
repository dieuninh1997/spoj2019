#include<bits/stdc++.h>
using namespace std;

void compress(vector<int> &a){
  set<int> s(a.begin(), a.end());
  vector<int> b(s.begin(), s.end());
  for(int &x: a){
    x=lower_bound(b.begin(), b.end(), x) - b.begin() + 1;
  }
}

struct Fenwick{
  int n;
  vector<int> f;
  Fenwick(int n): n(n), f(n+1, 0){}
  void set(int x, int i){
    for(; i<=n; i+= i & (-i)){
      f[i] = max(f[i], x);
    }
  }

  int get(int i) const{
    int r=0;
    for(; i>=1; i-= i&(-i)){
      r=max(r, f[i]);
    }
    return r;
  }
};

void solve(){
  int n;
  cin>>n;
  vector<int> a(n);
 
  a.clear();
  for(int &x:a){
    cin>>x;
  }

  compress(a);
  Fenwick bit(n);
  for(int x: a){
    bit.set(bit.get(x-1)+1, x);
  }

  cout<<bit.get(n)<<endl;
}

int main(){
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
