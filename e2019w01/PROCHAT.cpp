#include<bits/stdc++.h>
using namespace std;

bool inRange(int low, int hight, int x){
  return ((x-low)<= (hight-low));
}

void solve(){
  int n;
  cin>>n;
  vector<pair<int, int> > a;
  for(int i=0; i<n; i++){
    int x, h;
    cin>>x>>h;
    a.push_back(make_pair(x,h));
  }

  for(int i=1; i<n-1; i++){
    int canT=a[i].first-a[i].second;
    int canD=a[i].first+a[i].second;
    for(int j=0; j<n;  j++){
      if(!inRange(canT, a[i].first, a[j].first) ||
      !inRange(a[i].first, canD, a[j].first)){
        cout<<"in Range ("<<canT<<";"<<canD<<") a[i].first) a="<<a[j].first<<endl;
        // break;
      }
    }
  }
}
int main(){
    solve();
    return 0;
}


//12
//26
