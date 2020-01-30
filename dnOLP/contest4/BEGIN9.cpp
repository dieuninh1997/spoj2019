#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll s2i(string s){
   stringstream ss(s); 
    ll x = 0; 
    ss >> x; 
    return x;
}
void solve(){
  string sa, sb;
  cin>>sa>>sb;
  ll b = s2i(sb);
  ll end = sa[sa.length()-1] - '0';
  if(b==0)cout<<1<<endl;
  else {  
    if(end == 0 || end == 1 || end == 5 ||end==6)
      cout<<end<<endl;
    else if(end==2){
      int a[]={2, 4, 8, 6};
      int mu = b%4;
      int index = mu-1<0 ? 3: mu-1;
      cout<<a[index]<<endl;
    } else if (end==3){
      int a[]={3, 9, 7, 1};
      int mu = b%4;
      int index = mu-1<0 ? 3: mu-1;
      cout<<a[index]<<endl;
    } else if(end==4){
      int a[]={4, 6};
      int mu = b%2;
      int index = mu-1<0 ? 1: mu-1;
      cout<<a[index]<<endl;
    } else if(end==7){
      int a[]={7, 9, 3, 1};
      int mu = b%4;
      int index = mu-1<0 ? 3: mu-1;
      cout<<a[index]<<endl;
    } else if(end==8){
      int a[]={8, 4, 2, 6};
      int mu = b%4;
      int index = mu-1<0 ? 3: mu-1;
      cout<<a[index]<<endl;
    } else if(end==9){
      int a[]={9, 1};
      int mu = b%2;
      int index = mu-1<0 ? 1: mu-1;
      cout<<a[index]<<endl;
    }
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
