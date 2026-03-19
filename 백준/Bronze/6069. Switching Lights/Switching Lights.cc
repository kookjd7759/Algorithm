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

struct Seg {
    int n;
    vector<int> t, lazy;

    Seg(int sz) {
        n = sz;
        t.assign(4 * n + 4, 0);
        lazy.assign(4 * n + 4, 0);
    }

    void push(int node, int s, int e) {
        if (!lazy[node]) return;
        t[node] = (e - s + 1) - t[node];
        if (s != e) lazy[node << 1] ^= 1, lazy[node << 1 | 1] ^= 1;
        lazy[node] = 0;
    }

    void update(int node, int s, int e, int l, int r) {
        push(node, s, e);
        if (r < s || e < l) return;
        if (l <= s && e <= r) {
            lazy[node] ^= 1;
            push(node, s, e);
            return;
        }
        int m = (s + e) >> 1;
        update(node << 1, s, m, l, r);
        update(node << 1 | 1, m + 1, e, l, r);
        t[node] = t[node << 1] + t[node << 1 | 1];
    }

    int query(int node, int s, int e, int l, int r) {
        push(node, s, e);
        if (r < s || e < l) return 0;
        if (l <= s && e <= r) return t[node];
        int m = (s + e) >> 1;
        return query(node << 1, s, m, l, r) + query(node << 1 | 1, m + 1, e, l, r);
    }
};

int main() {
    Sync;

    int N, M; in N >> M;
    Seg seg(N);

    while (M--) {
        int op, s, e; in op >> s >> e;
        if (op == 0) seg.update(1, 1, N, s, e);
        else out seg.query(1, 1, N, s, e) endl;
    }

    return 0;
}