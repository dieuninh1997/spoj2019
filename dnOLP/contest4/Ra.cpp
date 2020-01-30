#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string trim(string str)
{
  for(string::size_type s=str.length()-1; s>0; --s) {
    if(str[s] == '0') str.erase(s,1);
      else break;
    }
  return str;
}
pair<int, string> getPrecision(double x){
  
  stringstream ss;
  ss<<setprecision(12)<<fixed<<x;
  string s = ss.str();
  s= trim(s);
  string _real = s.substr(s.find("."));
  ss<<_real;
  int res;
  ss>>res;
  return make_pair(res, s.substr(s.find(".")+1));
}

int s2i(string s){
  stringstream ss(s);
  int x;
  ss>>x;
  return x;
}

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

void lowest(ll &ts, ll &ms){
  ll c= gcd(ts, ms);
  ts/=c;
  ms/=c;
}

void solve(){
  double x;
  int b;
  cin>>x>>b;
  pair<int, string> p = getPrecision(x);
  int m = p.second.length();
  int n =  m-b;
  int lap = s2i(p.second.substr(m-b, b));
  int thuaso = s2i(p.second.substr(0, n));
  ll ts = p.first * (pow(10, b) -1) * pow(10, n) + lap;
  ll ms = (pow(10, b) -1) * pow(10, n) * 1ll;
 
  if(n>0){
    ts = p.first * (pow(10, b) -1) * pow(10, n) + 1ll * thuaso * (pow(10, b) -1) + lap;
  }
  lowest(ts, ms);
  cout<<ts<<"/"<<ms<<endl;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
