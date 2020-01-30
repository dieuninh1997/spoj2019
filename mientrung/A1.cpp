
#include <bits/stdc++.h> 
using namespace std; 
const int N=1005;
bool isPrime[1005];
void sieve() {
    for(int i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             // Mark all the multiples of i as composite numbers
             for(int j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
}

//1 2 4 
//-1 1 -1

int countSubarrays(int arr[], int n) 
{ 
    int start = 0, end = 0, count = 0, sum = arr[0]; 
    while (start < n && end < n) { 
      if (sum >= 0) { 
        cout<<start<<" "<<end<<endl;
          if (end >= start){
            count++;
          } 
          end++; 
          if (end < n){ 
            sum += arr[end]; 
          }else{
            cout<<start<<" "<<end<<endl;
            start++;
            end=start;
            sum = arr[start]; 
          }
      } else { 
         
        if(end<n){
          cout<<end<<endl;
          end++;
          sum += arr[end]; 
        }else{
          cout<<" ->"<<end<<endl;
          start++;
          end=start;
          sum = arr[start]; 
        } 
      } 
    } 
    return count; 
} 
  
// Driver Code 
int main() 
{ 
  sieve();
  int n, x;
  cin>>n;
  int a[10005];
  for(int i=0; i<n; i++){
    cin>>x;
    if(isPrime[x])
      a[i]=1;
    else 
      a[i]=-1;
  } 
  cout << countSubarrays(a, n); 
} 
