#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  string s;
  cin>>s;
  int m, len=s.length(), a[100005];
  cin>>m;
  vector<pair<int, int> > prev;
  for(int i = 0; i < m; i++){
    cin>>a[i];
  }
  if(m==1){
    reverse(s.begin()+a[0]-1, s.begin()+len-(a[0]-1));
  }else
  {
    sort(a, a + m);
    int d = 1, val = a[0], d_prev = 0;
    // prev.push_back(make_pair(val, d+d_prev));
    for (int i = 1; i <= m; i++){
      if (a[i] == val) {
        d++;
      } else {
        prev.push_back(make_pair(val, d+d_prev));
        d_prev = d+d_prev;
        val = a[i];
        d = 1;
      }
      // cout<<val <<" "<<a[i]<<endl;
      if(i==m-1 && val != a[i]){
        val = a[i];
        prev.push_back(make_pair(val, d+d_prev));
      }
    }
    
    for (int i = 0; i < prev.size(); i++) {
      // cout<<prev[i].first<<" "<<prev[i].second<<endl;
      if (prev[i].second %2 != 0) {
        // cout<<"->"<<prev[i].first<<" "<<prev[i+1].first<<endl;

        int start = prev[i].first;
        int end = (prev[i+1].first-1) < 0 ? len - start : prev[i+1].first-1;
        // cout<<start<<" -> "<<end<<endl;
        for(int j=start; j<=end; j++){
          swap(s[j-1], s[len-j]);
        }
        // cout<<s<<endl;
      }
    }
  }

  cout<<s<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
