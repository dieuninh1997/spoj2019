#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

const int N = 2505;
int n;
LL a[N];

void solve() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    sort(a, a + n);
    LL ans[3] = {0, 0, 0};
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            LL l[3] = {0, 0, 0};
            LL t = hypot(a[i], a[j]);
            LL k = t + 1;
            if (t*t != a[i]*a[i] + a[j]*a[j]) {
                t++;
            }
          //  printf("t=%lld k=%lld\n", t, k);
            l[0] = lower_bound(a+j+1, a+n, t) - (a+j+1);
            if (t != k) {
                l[1] = lower_bound(a+j+1, a+n, k) - (a+j+1) - l[0];
            }
            l[2] = lower_bound(a + j + 1, a + n, a[i] + a[j]) - (a+j+1) - l[0] - l[1];
            ans[0] += l[0]; 
            ans[1] += l[1]; 
            ans[2] += l[2];
        }
    }
    printf("%lld %lld %lld", ans[0], ans[1], ans[2]);
}

int main() {
//    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
