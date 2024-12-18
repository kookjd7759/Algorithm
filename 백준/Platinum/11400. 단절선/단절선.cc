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

struct Edge {
    int a, b;
    Edge(int a, int b) : a(a), b(b) {}
};
bool comp(Edge& a, Edge& b) {
    if (a.a > a.b) swap(a.a, a.b);
    if (b.a > b.b) swap(b.a, b.b);

    if (a.a == b.a) return a.b < b.b;
    return a.a < b.a;
}

int V, E;
vector<int>* edge;
bool* visited;
int* order;
vector<Edge> ans;

void init() {
    in V >> E;
    edge = new vector<int>[V + 1];
    Fori(E) {
        int a, b; in a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    visited = new bool[V + 1]; memset(visited, false, sizeof(bool) * (V + 1));
    order = new int[V + 1]; memset(order, 0, sizeof(int) * (V + 1));
}

int find(int node, int now_order, int parent = 0) {
    visited[node] = true;
    int mini = order[node] = now_order;

    Fori(edge[node].size()) {
        int child = edge[node][i];
        if (child == parent) continue;

        int child_order = order[child];
        if (!visited[child]) {
            child_order = find(child, now_order + 1, node);
            if (child_order > order[node]) ans.push_back(Edge(child, node));
        }
        mini = min(mini, child_order);
    }

    return mini;
}

int main() {
    Sync;

    init();
    Fori(V + 1) if (!visited[i]) find(i, 0);
    sort(ans.begin(), ans.end(), comp);

    out ans.size() endl;
    Fori(ans.size()) out ans[i].a spc ans[i].b endl;
}