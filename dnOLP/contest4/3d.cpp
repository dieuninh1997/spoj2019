#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;
struct Point{
  ll x, y, z;
};

void cal(){
  Point a, b, c;
  cin>>a.x>>a.y>>a.z;
  cin>>b.x>>b.y>>b.z;
  cin>>c.x>>c.y>>c.z;

  Point AB;
  AB.x = (b.x - a.x);
  AB.y = (b.y - a.y);
  AB.z = (b.z - a.z);

  Point AC;
  AC.x = (c.x - a.x);
  AC.y = (c.y - a.y);
  AC.z = (c.z - a.z);

  Point BC;
  BC.x = (c.x - b.x);
  BC.y = (c.y - b.y);
  BC.z = (c.z - b.z);

  Point tichVoHuongABAC;
  tichVoHuongABAC.x = (AB.y * AC.z - AB.z * AC.y);
  tichVoHuongABAC.y = (AB.z * AC.x - AB.x * AC.z);
  tichVoHuongABAC.z = (AB.x * AC.y - AB.y * AC.x);

  double doLontTichVoHuongABAC = sqrt(
    (tichVoHuongABAC.x * tichVoHuongABAC.x) + 
    (tichVoHuongABAC.y * tichVoHuongABAC.y) + 
    (tichVoHuongABAC.z * tichVoHuongABAC.z)
  );
  double doLonBC = sqrt(
    (BC.x * BC.x) + 
    (BC.y * BC.y) + 
    (BC.z * BC.z)
  );

  double chieuCao = doLontTichVoHuongABAC/doLonBC;

  cout<<setprecision(2)<<fixed<<chieuCao<<endl;
}

void solve(){
  int t;
  cin>>t;
  while(t--){
    cal();
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
