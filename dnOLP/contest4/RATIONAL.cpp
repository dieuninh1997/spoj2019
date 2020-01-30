#include<bits/stdc++.h>
using namespace std;

int getPrecision(double x){
  stringstream ss;
  ss<<fixed<<x;
  string s = ss.str();
  int i, j, d=0;
  i=j=s.length()-1;
  while(s[i--]=='0'){
    d++;
  }
  s.erase(j-d,d);
  int precision = s.substr(s.find(".")+1).length();
  return precision;
}

int getReal(double x){
  stringstream ss;
  ss<<fixed<<x;
  string s = ss.str();
  string _real = s.substr(s.find("."));
  ss<<_real;
  int res;
  ss>>res;
  return res;
}

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

void lowest(int &ts, int &ms){
  int c= gcd(ts, ms);
  ts/=c;
  ms/=c;
}

void solve(){
  double x;
  int b;
  cin>>x>>b;
  int precision = getPrecision(x);
  int hs1 = pow(10, b), hs2 = 1;
  if(b==precision){
    //nothing
  }else{
    hs1 = pow(10, precision);
    hs2 = pow(10, precision - b);
  }
  double mul = hs1 * x;
  x *= hs2;
  int realMul = getReal(mul);
  int realX = getReal(x);
  int ts = realMul - realX;
  int ms = hs1 - hs2;
  lowest(ts, ms);//ru 
  cout<<ts<<"/"<<ms<<endl;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
