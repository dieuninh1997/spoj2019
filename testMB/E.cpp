#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
struct Point{
  int x;
  int y;
};

struct Rec{
  Point bottomLeft;
  Point topRight;
};

bool intersect(Rec r1, Rec r2){
  if(r1.topRight.y < r2.bottomLeft.y || 
  r1.bottomLeft.y > r2.topRight.y ||
  r1.topRight.x < r2.bottomLeft.x ||
  r1.bottomLeft.x > r2.topRight.x){
    return false;
  }
  if((r1.bottomLeft.x > r2.bottomLeft.x 
    && r1.bottomLeft.y > r2.bottomLeft.y
    && r1.topRight.x <r2.topRight.x 
    && r1.topRight.y < r2.topRight.y) 
  ||
  (r2.bottomLeft.x > r1.bottomLeft.x 
    && r2.bottomLeft.y > r1.bottomLeft.y
    && r2.topRight.x <r1.topRight.x 
    && r2.topRight.y < r1.topRight.y))
  {
    return false;
  }
  return true;
}

void solve(){
  int  n;
  cin>>n;
  vector<Rec> a;
  for(int i=0; i<n; i++){
    Rec r;
    cin>>r.bottomLeft.x>>r.bottomLeft.y;
    cin>>r.topRight.x>>r.topRight.y;
    a.push_back(r);
  }

  sort(a.begin(), a.end(), [&](Rec& r1, Rec& r2) {
    return r1.bottomLeft.x < r2.bottomLeft.x;
  });

  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      if(intersect(a[i], a[j])){
        cout<<1<<endl;
        return;
      }
    }
  }
  cout<<0<<endl;
}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



