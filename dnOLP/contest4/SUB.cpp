#include<bits/stdc++.h>
using namespace std;
int n, mark[100005], f[100005], a[100005];

int cal(){
  int s=0;
  for(int i=1;i<=n; i++){
    if(mark[i]){
      s+=a[i];
    }
  }
  return s;
}

void bt(int u, int &s){
  if(u==n+1){
    s=max(s, cal());
    return;
  }
  mark[u]=0;
  bt(u+1, s);
  mark[u]=1;
  bt(u+1, s);
}

int dctmax(){
  f[0]=0;
  for(int i=1; i<=n; i++)
    f[i] = f[i-1] + a[i];
  int max_s=0, f_min=0;
  for(int i=1; i<=n; i++){
    f_min = min(f_min, f[i]);
    max_s = max(max_s, f[i] - f_min);
  }
  return max_s;
}

void fi(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin>>a[i];
  }

  int s = INT_MIN;
  bt(1, s);
  cout<<s<<" "<<dctmax()<<endl;
}

void solve(){
  int t;
  cin>>t;
  while(t--){
    fi();
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
