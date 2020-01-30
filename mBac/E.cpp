#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
const ll MAXX = 1e18;

ll cast(double x) {
  ll _ = round(x);
  double a = _ - 1e-8;
  double b = _ + 1e-8;
  return (x >= a && x <= b)? _: MAXX;
}

double line(double a, double b, vector<double> &x) {
  x.push_back(-b / a);
}

void square(double a, double b, double c, vector<double> &x) {
  double d = b*b - 4*a*c;
  if (d > 0) {
    double s = sqrt(d);
    double x1 = (-b + s) / (2 * a);
    double x2 = (-b - s) / (2 * a);

    x.push_back(x1);
    x.push_back(x2);
  } else {
    x.push_back(-b / (2 * a));
  }
}

void cubicsolve(double a, double b, double c, double d, vector<double> &x)
{
    b /= a;
    c /= a;
    d /= a;
    double disc, q, r, dum1, s, t, term1, r13;
    q = (3.0*c - (b*b))/9.0;
    r = -(27.0*d) + b*(9.0*c - 2.0*(b*b));
    r /= 54.0;
    disc = q*q*q + r*r;

    cout<<"disc="<<disc<<endl;
    term1 = (b/3.0);
     
    // The remaining options are all real
    if (disc == 0){ // All roots real, at least two are equal.
        r13 = ((r < 0) ? -pow(-r,(1.0/3.0)) : pow(r,(1.0/3.0)));
        x.push_back(-term1 + 2.0*r13);
        x.push_back(-(r13 + term1));
        x.push_back(-(r13 + term1));
        return;
    } // End if (disc == 0)
    // Only option left is that all roots are real and unequal (to get here, q < 0)
    q = -q;
    dum1 = q*q*q;
    dum1 = acos(r/sqrt(dum1));
    r13 = 2.0*sqrt(q);
    
    x.push_back(-term1 + r13*cos(dum1/3.0));
    x.push_back(-term1 + r13*cos((dum1 + 2.0*M_PI)/3.0));
    x.push_back(-term1 + r13*cos((dum1 + 4.0*M_PI)/3.0));
    return;
}  //End of cubicSolve

void solve(){
  int t;
  cin>>t;
  while(t--){
    int n;
    double nghiem=30000;
    cin>>n;
    int ar[5];
    for(int i=n; i>=0; i--){
      cin>>ar[i];
    }

    int a=ar[3], b=ar[2], c=ar[1], d=ar[0];

    vector<double> x;
    
    if(n==1){
      line(c, d, x);
    } else if(n==2){
      square(b, c, d, x);
    } else if(n==3){
      cubicsolve(a, b, c, d, x);
      // cubic(a, b, c, d, x);
    }

    ll _min = MAXX;
    // cout << _min << endl;
    for (double d: x) {
      cout << d << ' ' << cast(d) << endl;
      _min = min(_min, cast(d));
    }
    cout << _min << endl;
  }
}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



