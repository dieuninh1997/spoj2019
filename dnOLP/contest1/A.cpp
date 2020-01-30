#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

const ll mod = 1e9+7;
const int MAX = 100005;

int lis( int arr[], int n )  // O(n^2)
{  
    int lis[MAX]; 
    lis[0] = 1;    
    for (int i = 1; i < n; i++ ) { 
      lis[i] = 1; 
      for (int j = 0; j < i; j++ )   
        if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
          lis[i] = lis[j] + 1;  
    } 
    return *max_element(lis, lis+n); 
}  

int count(int arr[], int n, int len){
  int dp[len][MAX];
  memset(dp, 0, sizeof dp);

  for(int i=0; i<n; i++){
    dp[0][i]=1;
  }
  for(int i=1; i<len; i++){
    for(int j=i; j<n; j++){
      dp[i][j]=0;
      for(int k=i-1; k<j; k++){
        if(arr[k] < arr[j]){
          dp[i][j] += dp[i-1][k] % mod;
        }
      }
    }
  }

  int sum = 0;
  for(int i=len-1; i<n; i++){
    sum+=dp[len-1][i];
  }
  return sum;
}

void solve(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[MAX];
    for(int i=0; i<n; i++)
      cin>>a[i];

    cout<<lis(a, n)<<endl;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
