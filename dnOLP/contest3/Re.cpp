#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dd[200005];
int main(){
	string s;
	cin>>s;
	ll len = s.size();
	ll n;
	cin>>n;
	for(ll i = 1;i<=n;i++){
		ll x;
		cin>>x;
		dd[x]++;
	}
	s = '0'+s;
	ll run = 0;
	for(ll i = 1;i<=len/2;){
		if(run==1){
			if(dd[i]==0){
				swap(s[i],s[len-i+1]);
				i++;
			}
			else{
				run+=(dd[i]%2);
				dd[i]%=2;
				run%=2;
				if(run==0){
					i++;
				}
				else{
					swap(s[i],s[len-i+1]);
					i++;
				}
			}
		}
		else{
			if(dd[i]==0){
				i++;
			}
			else{
				run+=(dd[i]%2);
				dd[i]%=2;
				run%=2;
				if(run==1){
					swap(s[i],s[len-i+1]);
					i++;
				}
				else i++;
			}
		}
	}
	for(ll i = 1;i<s.size();i++) cout<<s[i];
}
