#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000006], dd[100005], mark[100005];
int main(){
    ll n,k;
    cin>>n>>k;
    for(ll i = 1;i<=n;i++){
      cin>>a[i];
      a[i]%=k;
      dd[a[i]]++;
    }
    ll res = 0;
    for(ll i = 1;i<=k-1;i++){
      if(mark[i]!=1){
        if(i!=k-i){
            res+=max(dd[i],dd[k-i]);
        }
        else{
            if(dd[i]>0) res++;
        }
        //cout<<i<<" "<<res<<endl;
        mark[i] = 1;
        mark[k-i] = 1;
      }
    }
    if(dd[0]>0) res++;
    cout<<res;
}
