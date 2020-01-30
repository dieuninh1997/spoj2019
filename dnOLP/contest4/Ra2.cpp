#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll GCD(ll a,ll b){
    if(b==0) return a;
    else return GCD(b,a%b);
}
int main(){
    string s;
    ll n;
    cin>>s>>n;
    string pn,ptp;
    bool kt = true;
    for(ll i = 0;i<s.size();i++){
        if(s[i]=='.'){
            kt = false;
            continue;
        }
        if(kt == true) pn+=s[i];
        else ptp+=s[i];
    }
    if(n ==(ll)ptp.size()){
        ll tmp = 1;
        for(ll i = 1;i<=n;i++) tmp*=10;
        ll phannguyen = 0;
        for(ll i = 0;i<pn.size();i++){
            phannguyen = phannguyen*10 + (pn[i]-'0');
        }
        ll phanthapphan = 0;
        for(ll i = 0;i<ptp.size();i++){
            phanthapphan = phanthapphan*10 + (ptp[i]-'0');
        }
        ll gt1 = phannguyen*tmp;
        ll gt2 = phanthapphan-phannguyen;
        ll gt = gt1+gt2;
        tmp--;
        ll x = GCD(gt,tmp);
        cout<<gt/x<<"/"<<tmp/x;
    }
    else{
        ll phannguyen = 0;
        for(ll i = 0;i<pn.size();i++){
            phannguyen = phannguyen*10 + (pn[i]-'0');
        }
        ll phanthapphan = 0;
        for(ll i = 0;i<ptp.size();i++){
            phanthapphan = phanthapphan*10 + (ptp[i]-'0');
        }
        ll vt = ptp.size()-n ;
        ll ptp2 = 0;
        ll tmp1 = 1;
        ll tmp2 = 1;
        for(ll i = 0;i<vt;i++){
            ptp2 = ptp2*10 + (ptp[i]-'0');
            tmp2*=10;
        }
        for(ll i = 1;i<=ptp.size();i++) tmp1*=10;
    //    cout<<tmp1<<" "<<tmp2<<endl;
        ll gt1 = tmp1 - tmp2;
//        cout<<phannguyen*tmp1<<" "<<phannguyen*tmp2<<" "<<phanthapphan<<" "<<ptp2<<endl;
        ll gt2 = (phannguyen*tmp1 + phanthapphan ) - (phannguyen*tmp2+ ptp2);
        ll x = GCD(gt1,gt2);
  //      cout<<x<<endl;
        cout<<gt2/x<<"/"<<gt1/x;

    }
}
