#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[200005];
int main(){
	ll n;
	cin>>n;
	bool check = true;
	for(ll i = 1;i<=n;i++) cin>>a[i];
	for(ll i = 1;i<=n;i++){
		bool kt = true;
		for(ll j = 1;j<=sqrt(i);j++){
			if(i%j==0){
				ll x = i/j;
				if(a[j]*a[x]!=a[i]){
					check = false;
					kt = false;
					break;
				}
			}
		}
		if(kt==false) break;
	}
	if(check==false) cout<<"NO";
	else cout<<"YES";
}

// bool f(ll a[], ll n){
//   bool check = true;
//    for(ll i=1; i<=n; i++){
//     if(!check) return false;
//     for(ll j=1; j<=n; j++){
//       if(i*j <= n){
//         if(a[i*j]!= a[i]*a[j]){
//           check = false;
//           break;
//         }
//       }
//     }
//   }
//   return true;
// }

// void solve(){
//   ll n;
//   cin>>n;
//   ll a[100005];
//   for(ll i=1; i<=n; i++){
//     cin>>a[i];
//   }
//   if(f(a, n)) cout<<"YES"<<endl;
//   else cout<<"NO"<<endl;
// }

// int main(){
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   solve();
//   return 0;
// }
