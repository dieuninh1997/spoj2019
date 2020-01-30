#include<bits/stdc++.h>
using namespace std;
#define i64 long long
#define rsz resize
#define mp make_pair
#define pb push_back
#define fi first
#define se second
typedef vector<i64> vi;


/*
Sparse Table (SpT)
cho 1 mang A, thuc hien mot so luong truy van nhu sau:
Moi truy van gom 2 so l, r (1<=l, r<=A.length). Hay tim:
+ Gia tri (hoac chi so) cua phan tu nho nhat trong doan [l,r]
+ Gia tri (hoac chi so) cua phan tu lon nhat trong doan [l,r]

=> Sd cau truc Sparse Table (SpT) voi 
do phuc tap thoi gian: O(N*log(N)) de khoi tao, O(1) de truy van,
do phuc tap khong gian: O(N*log(N))

=> Voi array A[N], moi phan tu spt[i][j] (chi so danh tu 0)
se la gia tri can thu duoc tren khoang [i, i+2^j-1] cua A[] voi i+2^j-1 <N

Xet truong hop de bai yeu cau tim Min tren khoang, ta co he thuc:
spt[i][0]=A[i] voi k=0
spt[i][k]=min(spt[i][k-1], spt[i+2^(k-1)][k-1]) voi k>0

*/
void solve(){
  i64 n, m, u, v, k, q, l, r;
  vi A, Log2;
  vector<vi> spt;
  cin>>n>>m;
  A.rsz(n);
  Log2.rsz(n+1);
  spt.rsz(n, vi(17));

  for(i64 i=1; i<=n; i++){
    for(i64 j=16; j>=0; j--){
      //2^j < i
      if((1<<j)<=i){
        Log2[i]=j;
        break;
      }
    }
  }
/*
Ta sử dụng trick như sau: 
Với đoạn [l,r] được tăng lên k đơn vị, 
ta tăng a[l] lên k, 
sau đó thằng a[r+1] ta giảm đi k. 
Khi đó sau m truy vấn tăng, ta duyệt mảng rồi cập nhật a[i] += a[i-1], 
khi đó những mỗi giá trị trong đoạn [l,r] sẽ được cộng đúng như các truy vấn. 
Do đó ta chỉ cần O(m) cho các truy vấn cộng.
*/
  while(m--){
    cin>>u>>v>>k;
    u--;
    v--;
    A[u]+=k;
    if(v<n-1){
      A[v+1]-=k;
    }
  }
  for(i64 i=1; i<n; i++){
    A[i]+=A[i-1];
  }

  cin>>q;

  for(i64 k=0; k<17; k++){
    //i+2^k <= n
    for(i64 i=0; i+(1<<k) <= n; i++){
      if(k==0){
        spt[i][k]=A[i];
      }else{
        spt[i][k]=max(spt[i][k-1], spt[i+(1<<(k-1))][k-1]);
      }
    }
  }

  while(q--){
    cin>>l>>r;
    l--;
    r--;
    cout<<max(spt[l][Log2[r-l+1]], spt[r+1-(1<<Log2[r-l+1])][Log2[r-l+1]]);
    cout<<endl;
  }
}

int main(){
  freopen("QMAX.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

