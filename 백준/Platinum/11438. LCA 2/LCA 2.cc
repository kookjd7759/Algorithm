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

int N;
vector<int>* edge;
int** parent;
int* depth;

void init() {
    int N; in N;
    edge = new vector<int>[N + 1];
    Fori(N - 1) {
        int a, b; in a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    parent = new int* [N + 1];
    Fori(N + 1) parent[i] = new int[17];
    Fori(N + 1) Forj(17) parent[i][j] = 0;

    depth = new int[N + 1];
    Fori(N + 1) depth[i] = 0;
}

void set_tree(int node, int prev, int dep) {
    depth[node] = dep;
    parent[node][0] = prev;

    For1i(16) parent[node][i] = parent[parent[node][i - 1]][i - 1];
    Fori(edge[node].size()) {
        int child = edge[node][i];
        if (child == prev) continue;
        set_tree(child, node, dep + 1);
    }
}

int LCA(int a, int b) {
    if (depth[a] < depth[b]) swap(a, b);

    if (depth[a] != depth[b])
        for (int i = 16; i >= 0; i--) 
            if (depth[parent[a][i]] >= depth[b]) a = parent[a][i];

    int ans(a);
    if (a != b)
        for (int i = 16; i >= 0; i--) {
            if (parent[a][i] != parent[b][i])
                a = parent[a][i], b = parent[b][i];
            ans = parent[a][i];
        }

    return ans;
}

int main() {
    Sync;

    init();
    set_tree(1, 0, 1);
    int m; in m;
    Fori(m) {
        int a, b; in a >> b;
        out LCA(a, b) endl;
    }
}