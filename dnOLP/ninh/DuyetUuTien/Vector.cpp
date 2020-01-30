#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Point{
  int x, y;
};


int n, addx=0, addy=0, dem=0;
Point a[30], b[30];
int f1[30][30]={0}, f2[30][30]={0};
ll ans=0;

//dp[x][y] so cach chon de tong vt = vt(x,y)
//ans: dp1[x][y]*dp2[u-x][v-y] voi x(1->u) va y(1->v) 
void QHD(){
  for(int i=n/2+1; i<=n ;i++){
    b[dem++] = a[i];
  }

  int m1= (1<<(n/2))-1;
  int m2= (1<<dem)-1;

  for(int i=0; i<=m1; i++){
    int sumx=addx, sumy=addy;
    for(int j=1; j<=n/2; j++){
      if((i & (1<<(j-1)))){
        sumx += a[j].x;
        sumy += a[j].y;
      }
    }
    f1[sumx][sumy]++;
  }
  for(int i=0; i<=m2; i++){
    int sumx=addx, sumy=addy;
    for(int j=1; j<=dem; j++){
      if((i & (1<<(j-1)))){
        sumx += a[j].x;
        sumy += a[j].y;
      }
    }
    f2[sumx][sumy]++;
  }
}


void solve(){
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>a[i].x>>a[i].y;
    if(a[i].x < 0) addx -= a[i].x;
    if(a[i].y < 0) addy -= a[i].y;
  }
  int u, v;
  cin>>u>>v;
  if(abs(u)>3000 || abs(v)>3000){
    cout<<0<<endl;
    return;
  }

  QHD();
  u += addx*2;
  v += addy*2;
  for(int i=0; i<=u; i++){
    for(int j=0; j<=v; j++){
      ans += f1[i][j]*f2[u-i][v-j]*1ll;
    }
  }
  cout<<ans<<endl;
}

int main(){
  solve();
  return 0;
}
