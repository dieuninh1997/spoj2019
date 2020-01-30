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

int sum(int p) {
    int ans = 0;
    for(int i = p; i; i -= i & -i)
        ans += bit[i];
    return ans;
}

void solve() {
    sieve();
    memset(a, 0, sizeof(a));
    cin >> n;
    int mn = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i]=(prime[a[i]] ? 1 : -1);
    }

    memset(bit, 0, sizeof(bit));
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += sum(a[i]);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
