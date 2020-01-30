#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

struct Point{
  int x, y;
};
void findLargestSquare(Point p[1005], int n) 
{ 
  
} 
void solve(){
  int n;
  cin>>n;
  Point p[1005];
  for(int i=0; i<n; i++){
    cin>>p[i].x>>p[i].y;
  }
  findLargestSquare(p, n);
}
int main(){
    solve();
    
    return 0;
}

