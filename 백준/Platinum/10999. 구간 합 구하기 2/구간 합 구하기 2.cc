#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

ll init(ll* ori, ll* tree, ll* lazy, int start, int end, int node) {
    lazy[node] = 0;
    if (start == end) return tree[node] = ori[start];
    int mid = (start + end) / 2;
    return tree[node] = init(ori, tree, lazy, start, mid, node * 2)
        + init(ori, tree, lazy, mid + 1, end, node * 2 + 1);
}

ll sum(ll* tree, ll* lazy, int start, int end, int node, int left, int right) {
    if (lazy[node] != 0) {
        tree[node] += lazy[node] * (end - start + 1);
        if (start != end) {
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (right < start || end < left) return 0;

    if (left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return sum(tree, lazy, start, mid, node * 2, left, right)
        + sum(tree, lazy, mid + 1, end, node * 2 + 1, left, right);
}

void update(ll* tree, ll* lazy, int start, int end, int node, int left, int right, ll add) {
    if (lazy[node] != 0) {
        tree[node] += lazy[node] * (end - start + 1);
        if (start != end) {
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (right < start || end < left) return;

    if (left <= start && end <= right) {
        lazy[node] = add;
        return;
    }
    if (start <= left && right <= end) {
        ll gab = right - left + 1;
        tree[node] += gab * add;
    }
    else if (start <= left && left <= end && end < right) {
        ll gab = end - left + 1;
        tree[node] += gab * add;
    }
    else if (left < start && start <= right && right <= end) {
        ll gab = right - start + 1;
        tree[node] += gab * add;
    }

    if (start == end) return;
    int mid = (start + end) / 2;
    update(tree, lazy, start, mid, node * 2, left, right, add);
    update(tree, lazy, mid + 1, end, node * 2 + 1, left, right, add);
}

void pirntTree(ll* tree, ll* lazy, int start, int end, int node) {
    out "Tree (" << start << " ~ " << end << ")  " << tree[node] << ", " << lazy[node] << "\n";
    if (start == end) return;
    int mid = (start + end) / 2;
    pirntTree(tree, lazy, start, mid, node * 2);
    pirntTree(tree, lazy, mid + 1, end, node * 2 + 1);
}

int main() {
    Sync;

    int N, M, K; in N >> M >> K;
    ll* ori = new ll[N + 1]; For1i(N) in ori[i];
    ll* tree = new ll[N * 4], *lazy = new ll[N * 4];
    init(ori, tree, lazy, 1, N, 1);
    //pirntTree(tree, lazy, 1, N, 1);
    int size = M + K;
    while (size--) {
        int v; in v;
        if (v == 1) {
            ll a, b, c; in a >> b >> c;
            update(tree, lazy, 1, N, 1, a, b, c);
            //pirntTree(tree, lazy, 1, N, 1);
        }
        else {
            int a, b; in a >> b;
            out sum(tree, lazy, 1, N, 1, a, b) endl;
        }
    }
}