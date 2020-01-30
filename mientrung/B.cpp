#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

bool prime(int x)
{
	if(x<2)
		return false;
	else if( x==2)
		return true;
	if(x%2==0)
		return false;
	
	int can=sqrt(x);
	for(int i=3; i<=can;i+=2)
	{
		if(x%i==0)
			return false;
	}
	return true;
}

vector<int> convert2bin(vector<int> a){
  vector<int> b;

  for(int i=0; i<n; i++){
    if(prime(a[i]))
      b.push_back(1);
    else if(a[i]==1)
      b.push_back(-1);
    else
      b.push_back(0);
  }
}

void solve(){
  
}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



