#include <iostream>
#include <math.h>
using namespace std;
 
void solve(){
	int n;
	cin>>n;
	int SDuong=0;
  int amMax= -100005;
  int S=0, S_tmp=0, ktd=0, kta=0;
	for (int i=1; i<=n; i++)
	{
    int Ai;
		cin>>Ai;
		S_tmp += Ai;
		if (S_tmp < 0) {
      S_tmp = 0;
    }else{
      S = max(S, S_tmp);
    } 
		
    if (Ai >= 0){
			SDuong += Ai;
			ktd = 1;
		}else{
			if (Ai > amMax) amMax = Ai;
			kta = 1;
		}
	}
	
  if(ktd==1 && kta==0) cout<<SDuong<<" "<<SDuong<<endl;
  else if(ktd==0 && kta==1)cout<<amMax<<" "<<amMax<<endl;
  else cout<<SDuong<<" "<<S<<endl;
}


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
