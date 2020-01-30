#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

void solve(){
  ll a,b, ans;
  cin>>a>>b;
  // if(a>0 && b>0){
  //   ans = abs(a-b)/2;
  //   if(a%2==0 && b%2!=0 && b%a!=0 && a < b){
  //     ans++;
  //   }
  //   cout<<ans<<endl;
  // } else cout<<"0"<<endl;

    if(a>b){
      swap(a,b);
    }
    if((b-a) % 2 == 0){
      ans = (b-a)/2;
    }else{
      if(b%2==0) b--;
      else b++;
      ans = (b-a)/2;
    }
    cout<<ans<<endl;

  // //1 3 5 7 9  11 13 15 17 19 
  // //2 4 6 8 10 12 14 16 18 20
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
