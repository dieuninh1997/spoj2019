#include<bits/stdc++.h>
using namespace std;

void pairsort(int a[], int b[], int n) { 
    pair<int, int> pairt[n]; 
  
    for (int i = 0; i < n; i++)  { 
      pairt[i].first = a[i]; 
      pairt[i].second = b[i]; 
    } 
  
    sort(pairt, pairt + n, greater<pair<int, int> >()); 
      
    for (int i = 0; i < n; i++)  { 
      a[i] = pairt[i].first; 
      b[i] = pairt[i].second; 
    } 
} 
void solve(){
  //sumAi <= w
  //Cmax
  int n, w;
  cin>>n>>w;
  int a[100005], c[100005], t[100005];
  for(int i=0; i<n; i++){
    cin>>a[i]>>c[i];
    t[i]=c[i]/a[i];
  }

  pairsort(t, a, n);
  pairsort(t, c, n);

  int k = 0, smax = 0, s = 0;
  vector<int> ans;
  for(int i=0; i<n; i++){
    s = c[i];
    if ((k*a[i] <= w) && (s + k*c[i] + (w-k*a[i])*t[i+1]> smax)) {
        smax += s;
        ans.push_back(i);
      }
  }

  cout<<s<<" "<<ans.size()<<endl;
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<endl;
  }

}

int main(){
  // freopen("a.txt", "r", stdin);
  // freopen("b.txt", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
