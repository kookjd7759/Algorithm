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

vector<int>* edge;
vector<int>* edge_rev;
vector<vector<int>*> SCC;
bool SCC_sort(const vector<int>* a, const vector<int>* b) {
    return a[0] < b[0];
}
bool* visited;
bool* visited_rev;
stack<int> st;
int V, E;

void init() {
    in V >> E;
    edge = new vector<int>[V + 1];
    edge_rev = new vector<int>[V + 1];
    visited = new bool[V + 1]; memset(visited, false, sizeof(bool) * (V + 1));
    visited_rev = new bool[V + 1]; memset(visited_rev, false, sizeof(bool) * (V + 1));
    Fori(E) {
        int from, to; in from >> to;
        edge[from].push_back(to);
        edge_rev[to].push_back(from);
    }
}

void DFS(int node) {
    visited[node] = true;

    for (const int& child : edge[node]) {
        if (!visited[child]) {
            DFS(child);
        }
    }

    st.push(node);
}

void DFS_rev(int node) {
    visited_rev[node] = true;
    SCC[SCC.size() - 1]->push_back(node);

    for (const int& child : edge_rev[node]) {
        if (!visited_rev[child]) {
            DFS_rev(child);
        }
    }
}

void find_SCC() {
    For1i(V) if (!visited[i]) DFS(i);
    while (!st.empty()) {
        int node(st.top()); st.pop();
        if (visited_rev[node]) continue;
        SCC.push_back(new vector<int>);
        DFS_rev(node);
    }
}

void print_SCC() {
    Fori(SCC.size()) sort(SCC[i]->begin(), SCC[i]->end());
    sort(SCC.begin(), SCC.end(), SCC_sort);
    out SCC.size() endl;
    for (const vector<int>* scc : SCC) {
        for (const int n : *scc) out n << ' ';
        out -1 endl;
    }
}

int main() {
    Sync;

    init();
    find_SCC();
    print_SCC();
}