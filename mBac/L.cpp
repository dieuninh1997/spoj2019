#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

const int N = 2505;
ll a[N], ans[3];

void solve(){
  int n;
  cin>>n;
  memset(a, 0, sizeof a);
  memset(ans, 0, sizeof ans);
  //4
  // 1 1 1 1

  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }
  sort(a, a + n);
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      ll l[3] = {0, 0, 0};
      ll d = hypot(a[i], a[j]); //  h = sqrt(x2+y2)
      ll v = d + 1;
      if(d * d != a[i] * a[i] + a[j] * a[j]) {//tam giac vuong
        d++;
      }
      l[0] = lower_bound(a + j + 1, a + n, d) - (a + j + 1);
      if (d != v) {
        l[1] = lower_bound(a + j + 1, a + n, v) - (a + j + 1) - l[0];
      }
      l[2] = lower_bound(a +j + 1, a + n, a[i] + a[j]) - (a + j + 1) - l[0] - l[1];
      ans[0] += l[0];  
      ans[1] += l[1]; 
      ans[2] += l[2];
    }
  }
  cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
  
}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



