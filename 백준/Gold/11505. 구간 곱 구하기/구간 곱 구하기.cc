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

ll init(ll* ori, ll* tree, int start, int end, int node) {
    if (start == end) return tree[node] = ori[start];
    int mid = (start + end) / 2;
    return tree[node] = (init(ori, tree, start, mid, node * 2)
        * init(ori, tree, mid + 1, end, node * 2 + 1))
        % 1000000007;
}

ll multiplication(ll* tree, int start, int end, int node, int left, int right) {
    if (left > end || right < start) return 1;
    if (left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return (multiplication(tree, start, mid, node * 2, left, right)
        * multiplication(tree, mid + 1, end, node * 2 + 1, left, right))
        % 1000000007;
}

ll update(ll* tree, int start, int end, int node, int idx, ll oldNum, ll newNum) {
    if (idx > end || idx < start) return tree[node];
    if (start == end) return tree[node] = newNum;

    int mid = (start + end) / 2;
    return tree[node] = (update(tree, start, mid, node * 2, idx, oldNum, newNum)
        * update(tree, mid + 1, end, node * 2 + 1, idx, oldNum, newNum))
        % 1000000007;
}

int main() {
    Sync;

    int N, M, K; in N >> M >> K;
    ll* ori = new ll[N + 1]; For1i(N) in ori[i];
    ll* tree = new ll[N * 4]; init(ori, tree, 1, N, 1);
    int size = M + K;
    while (size--) {
        ll v, a, b; in v >> a >> b;
        if (v == 1) {
            ll oldNum = ori[a];
            ori[a] = b;
            update(tree, 1, N, 1, a, oldNum, b);
        }
        else {
            out multiplication(tree, 1, N, 1, a, b) endl;
        }
    }
}