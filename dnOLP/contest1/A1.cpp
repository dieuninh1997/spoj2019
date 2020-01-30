#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

const int MAX = 100005;
const ll mod = 1000000007;
pair<int, int> L[MAX];
int a[MAX], n;
vector<int> v;

/*
L[i].first: do dai day con tang dai nhat den i
L[i].second: so luong day con tang dai nhat
*/

void update(int u, pair<int, int> add){
  for(int i = u; i < MAX; i += i & -i){
    if (add.first > L[i].first) {
      L[i] = add;
    } else if (L[i].first == add.first) {
      L[i].second = (L[i].second + add.second) % mod;
    }
  }
}

pair<int, int> get(int x){
  pair<int, int> res(0,0);
  for (int i = x; i > 0; i -= i & -i) {
    if (res.first < L[i].first) {
      res = L[i];
    }
    else if (res.first == L[i].first) {
      res.second = (res.second + L[i].second) % mod;
    }
  }

  if (res.first == 0) {
    return make_pair(1,1);
  } else {
    res.first ++;
  }
  return res;
}

void cal(){
  v.clear();
  memset(a, 0, sizeof a);
  cin>>n;
  for (int i = 1; i <= n; i++) {
    cin>>a[i];
    a[i]++;
    v.push_back(a[i]);
  }
  sort(v.begin(), v.end());

  for (int i = 1; i <= n; i++){
    a[i]=lower_bound(v.begin(), v.end(), a[i]) - v.begin() + 1;
  }
  
  pair<int, int> p;
  for (int i = 1; i <= n; i++) {
    p = get(a[i]-1);
    update(a[i], p);
  }

  p = get(MAX - 1);
  cout<<p.first<<" "<<p.second<<endl;
}

void solve(){
  int t;
  cin>>t;
  while (t--) {
    cal();
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
