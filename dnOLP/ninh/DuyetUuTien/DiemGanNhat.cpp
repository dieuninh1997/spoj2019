#include<bits/stdc++.h>
using namespace std;
#define MAXN 100000

struct Point{
  int x, y;
};

Point a[MAXN];
double minDist;

bool cmp_x(const Point &a, const Point &b){
  return a.x < b.x;
}

bool cmp_y(const Point &a, const Point &b){
  return a.y < b.y;
}

//kc giua a, b
void update(const Point &a, const Point &b){
  double distance = sqrt((a.x-b.x) * (a.x-b.x) + (a.y-b.y)*(a.y-b.y));
  minDist =  min(minDist, distance);
}

void find(int l, int r){
  if(r<=l) return;

  //doan [l,r] co 2 phan tu
  if(r==l+1){
    update(a[l], a[r]);
    //sx lai theo y
    if(!cmp_y(a[l], a[r])){
      swap(a[l], a[r]);
    }
    return;
  }

  int m = (l+r)/2;
  int midx = a[m].x;
  find(l, m);
  find(m+1, r);

  static Point t[MAXN];
  merge(a+l, a+m+1, a+m+1, a+r+1, t, cmp_y);
  copy(t, t+r-l+1, a+l);

  int tm=0;
  for(int i=l; i<=r; i++){
    if(abs(a[i].x - midx) < minDist){
      for(int j=tm-1; j>=0 && t[j].y > a[i].y - minDist; j--){
        update(a[i], t[j]);
      }

      t[tm++]=a[i];
    }
  }
}

void solve(){
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>a[i].x>>a[i].y;
  }

  minDist = 1e20;
  sort(a, a+n, cmp_x);
  find(0, n-1);
  cout<<minDist<<endl;
}

int main(){
  solve();
  return 0;
}
