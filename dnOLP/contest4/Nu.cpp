#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000006];
int main(){
    ll n;
    cin>>n;
    for(ll i = 1;i<=n;i++) cin>>a[i];
    ll res = 0;
    for(ll i = 1;i<=n;i++){
        res+=a[i]/2;
        ll tmp = a[i]%2;
        if(a[i+1]!=0) a[i+1]+=tmp;
    }
    cout<<res;
}
