#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout <<
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

struct SegTree {
    int n;
    vector<ll> mx, lz;

    SegTree(int n) : n(n), mx(4 * n + 5), lz(4 * n + 5) {}

    void push(int node) {
        if (!lz[node]) return;
        ll v = lz[node];
        mx[node << 1] += v; lz[node << 1] += v;
        mx[node << 1 | 1] += v; lz[node << 1 | 1] += v;
        lz[node] = 0;
    }

    void update(int node, int s, int e, int l, int r, ll val) {
        if (r < s || e < l) return;
        if (l <= s && e <= r) { mx[node] += val; lz[node] += val; return; }
        push(node);
        int m = (s + e) >> 1;
        update(node << 1, s, m, l, r, val);
        update(node << 1 | 1, m + 1, e, l, r, val);
        mx[node] = max(mx[node << 1], mx[node << 1 | 1]);
    }

    int findPos(int node, int s, int e, ll K) {
        if (s == e) return s;
        push(node);
        int m = (s + e) >> 1;
        if (mx[node << 1] > K) return findPos(node << 1, s, m, K);
        return findPos(node << 1 | 1, m + 1, e, K);
    }
};

int main() {
    Sync;

    int N, M; ll K; in N >> M >> K;
    SegTree seg(N);

    For1i(M) {
        int t; ll r; in t >> r;
        seg.update(1, 1, N, 1, t, r);
        if (seg.mx[1] > K) {
            out i spc seg.findPos(1, 1, N, K) endl;
            return 0;
        }
    }

    out -1 endl;

    return 0;
}