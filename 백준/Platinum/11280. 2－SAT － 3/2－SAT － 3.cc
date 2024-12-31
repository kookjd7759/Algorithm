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
vector<int> scc;
bool* visited;
bool* visited_rev;
stack<int> st;
int N, M, SIZE;
int rev(int x) { return x > N ? x - N : x + N; }

void init() {
    in N >> M; SIZE = 2 * N + 5;
    edge = new vector<int>[SIZE];
    edge_rev = new vector<int>[SIZE];
    scc.resize(SIZE);
    visited = new bool[SIZE]; memset(visited, false, sizeof(bool) * SIZE);
    visited_rev = new bool[SIZE]; memset(visited_rev, false, sizeof(bool) * SIZE);
    Fori(M) {
        int a, b; in a >> b;
        if (a < 0) a = -a + N;
        if (b < 0) b = -b + N;

        edge[rev(a)].push_back(b);
        edge[rev(b)].push_back(a);
        edge_rev[a].push_back(rev(b));
        edge_rev[b].push_back(rev(a));
    }
}

void DFS(int node) {
    visited[node] = true;

    for (const int& child : edge[node]) if (!visited[child]) DFS(child);

    st.push(node);
}

void DFS_rev(int node, int x) {
    visited_rev[node] = true;
    scc[node] = x;

    for (const int& child : edge_rev[node]) {
        if (!visited_rev[child]) {
            DFS_rev(child, x);
        }
    }
}

void SCC() {
    For1i(2 * N + 1) if (!visited[i]) DFS(i);
    int idx(1);
    while (!st.empty()) {
        int node(st.top()); st.pop();
        if (visited_rev[node]) continue;
        DFS_rev(node, idx++);
    }
}

void print() {
    For1i(N) if (scc[i] == scc[i + N]) {
        out 0;
        return;
    }
    out 1;
}

int main() {
    Sync;

    init();
    SCC();
    print();
}