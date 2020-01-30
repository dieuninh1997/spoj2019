#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000006];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    for(ll i = 1;i<=n;i++) cin>>a[i];
    ll res = 1;
    ll run= 1;
    for(ll i = 2;i<=n;i++){
        if(a[i]>a[i-1]) run++;
        else  if(a[i]<a[i-1]) run = 1;
        res = max(res,run);
    }
    cout<<res;
}
