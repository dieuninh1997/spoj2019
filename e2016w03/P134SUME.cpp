#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve(){
  int a[5], s;
  for (int i = 0; i < 4; i++){
    cin >> a[i];
  }
  sort(a, a + 4);
  s = a[0] * a[2];
  cout << s << endl;
}
int main(){
    solve();
    return 0;
}

