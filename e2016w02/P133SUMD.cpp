#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  /*
  A (x+P, y+P)
  B (x+P, y-P)
  C (x-P, y+P)
  D (x-P, y-P)

  */
  int n, k;
  cin>>n>>k;
  string s;
  cin>>s;
  vector<pair<int, int> > a, b, c, d;
  pair<int, int> start;
  for (int i=0; i<n; i++) {
    if (i == 0) {
      cin>>start.first>>start.second;
    } else {
      int x, y;
      cin>>x>>y;
      if (x > start.first && y > start.second) {
        a.push_back(make_pair(x, y));
      }
      else if (x > start.first && y < start.second) {
        b.push_back(make_pair(x,y));
      } else if (x < start.first && y > start.second) {
        c.push_back(make_pair(x,y));
      } else if (x < start.first && y <start.second) {
        d.push_back(make_pair(x,y));
      }
    }
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  sort(d.begin(), d.end());

  int ai=0, bi=0, ci=0, di=0;
  for (int i=0; i<k; i++) {
    if (s[i] == 'A') {
      if (ai < a.size()){
        start.first = a[ai].first;
        start.second = a[ai].second;
        ai++;
      }
    } else if (s[i] == 'B') {
      if (bi < b.size()){
        start.first = b[bi].first;
        start.second = b[bi].second;
        bi++;
      }
    } else if (s[i] == 'C') {
      if (ci < c.size()){
        start.first = c[ci].first;
        start.second = c[ci].second;
        ci++;
      }
    } else if (s[i] == 'D') {
      if (di < d.size()){
        start.first = d[di].first;
        start.second = d[di].second;
        di++;
      }
    }
  }
  cout<<start.first<<" "<<start.second<<endl;
}
int main(){
    solve();
    return 0;
}

