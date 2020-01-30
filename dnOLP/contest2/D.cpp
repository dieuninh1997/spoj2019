#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

//duỵet trau
// void solve(){
//   ll a, b, c, prev, d=0;
//   cin>>a>>b>>c;
//   prev = a;
//   while(1){
//     if(prev>=b)break;
//     // cout<<prev<<" ";
//     if((prev+2) % c == 0) {
//       prev ++;
//     }else{
//       prev +=2;
//     }
    
//     d++;
//   }
//   cout<<d<<endl;
// }

//tim boi cua c, sau do tinh các khoảng
void solve(){
  ll a,b,c, d=0;
  cin>>a>>b>>c;
  ll s=a, e, m;
  for(int i=a; i<b; i++){
    
    if(i%c==0){
      cout<<s<<" "<<i<<endl;
      d += (i-2 - s)/2 +1;
      s=i+1;
      m=i;
    }
  }

  cout<<m+1<<" "<<b<<endl;
  d+= ((b-1) - (m+1))/2 +1;
  cout<<d<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
