#include<bits/stdc++.h>

#define MOD 1000000007
using namespace std;

typedef pair<int,int> II;

vector<II> v;
vector<int> len[100010];
int tx[100010], a[100010], f[100010], g[100010], st[100010];
int n;

void update(int x, int v) {
    while (x <= 100000) {
        tx[x] += v;
        if (tx[x] < 0) tx[x] += MOD;
        tx[x] %= MOD;
        x += (x & -x);
    }
}

int calc(int x) {
    int r = 0;
    while (x) {
        r = (r + tx[x]) % MOD;
        x -= (x & -x);
    }
    return r;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        cin>>n;
        for (int i = 1; i <= n; i++) {
            cin>>a[i];
            v.push_back(make_pair(a[i], i));
        }

        sort(v.begin(),v.end());

        a[v[0].second] = 1;
        for (int i = 1; i < v.size(); i++)
        a[v[i].second] = (v[i].first == v[i - 1].first) ? a[v[i - 1].second] : (i + 1);
        for (int i = 1; i <= 100000; i++) 
            st[i] = MOD;  
        st[0] = 0;
        int maxlen = 0;
        for (int i = 1; i <= n; i++) {
            int inf = 0;  
            int sup = maxlen;
            while (inf <= sup) {
                int med = (inf + sup) / 2;
                if (st[med] < a[i]) {
                    f[i] = med;  inf = med + 1;
                }
                else sup = med - 1;
            }
            f[i]++;  maxlen = max(maxlen,f[i]);  st[f[i]] = min(st[f[i]],a[i]);  len[f[i]].push_back(i);
        }
        memset(tx, 0, sizeof(tx));
        memset(g, 0, sizeof(g));
        for (int i = 0; i < len[1].size(); i++) 
            g[len[1][i]] = 1;
        for (int i = 2; i <= 100000; i++) {
            int f1 = 0;
            int f2 = 0;
            while (f1 < len[i - 1].size() || f2 < len[i].size()) {
                if (f2 == len[i].size() || (f1 < len[i - 1].size() && len[i - 1][f1] < len[i][f2])) {
                    update(a[len[i - 1][f1]] + 1,g[len[i - 1][f1]]);
                    f1++;
                } else {
                    g[len[i][f2]] = calc(a[len[i][f2]]);
                    f2++;
                }
            }
            for (f1 = 0; f1 < len[i - 1].size(); f1++)
                update(a[len[i - 1][f1]] + 1,-g[len[i - 1][f1]]);
        }
        int ret = 0;
        for (int i = 1; i <= n; i++)
            if (f[i] == maxlen) ret = (ret + g[i]) % MOD;
        cout<<ret<<endl;
        memset(f, 0, sizeof(f));
        memset(len, 0, sizeof(len));
        memset(a, 0, sizeof(a));
        v.clear();
    }
}
