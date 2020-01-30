#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;
const int N = 1e6 + 9;
bool prime[N];
int a[N], n, bit[N];

void sieve() {
    memset(prime, 1, sizeof(prime));
    int i, lim = sqrt(N);
    for (i = 2; i <= lim; i++) {
        if (prime[i]) {
            for (int j = i * i; j < N; j += i)
                if (prime[j]) prime[j] = false;
        }
    }
    prime[1] = false;
}

void update(int idx, int val) {
    while (idx <= N) {
        bit[idx] += val;
        idx += (idx & -idx);
    }
}

int read(int idx) {
    int ret = 0;
    while (idx > 0) {
        ret += bit[idx];
        idx -= (idx & -idx);
    }
    return ret;
}

void solve() {
    sieve();
    memset(a, 0, sizeof(a));
    cin >> n;
    int mn = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = a[i - 1] + (prime[a[i]] ? 1 : -1);
        mn = min(mn, a[i]);
    }

    mn--;
   
    for (int i = 0; i <= n; i++) {
        a[i] -= mn;
      //  cout << a[i]<< " ";
    }

//   1 2 3 5
//  -1 1 1 1
//0 -1 0 1 2
// 2 1 2 3 4
//

    memset(bit, 0, sizeof(bit));
    long long ans = 0;
    update(a[0], 1);
    for (int i = 1; i <= n; i++) {
        ans += read(a[i]);
        
        update(a[i], 1);
        cout<<ans<<" "<<a[i]<<endl;
    }
    cout << ans;
}

int main() {
//    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
