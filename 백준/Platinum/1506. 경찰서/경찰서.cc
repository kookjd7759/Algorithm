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
bool* visited;
bool* visited_rev;
stack<int> st;
int* cost;
int n, ans(0);

void init() {
    in n;
    cost = new int[n + 1]; For1i(n) in cost[i];

    edge = new vector<int>[n + 1];
    edge_rev = new vector<int>[n + 1];
    visited = new bool[n + 1]; memset(visited, false, sizeof(bool) * (n + 1));
    visited_rev = new bool[n + 1]; memset(visited_rev, false, sizeof(bool) * (n + 1));
    For1i(n) {
        For1j(n) {
            char c; in c;
            if (c == '1') {
                edge[i].push_back(j);
                edge_rev[j].push_back(i);
            }
        }
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

int DFS_rev(int node) {
    visited_rev[node] = true;
    int minCost(cost[node]);
    for (const int& child : edge_rev[node]) {
        if (!visited_rev[child]) {
            minCost = min(minCost, DFS_rev(child));
        }
    }
    return minCost;
}

void find_minCost() {
    For1i(n) if (!visited[i]) DFS(i);
    while (!st.empty()) {
        int node(st.top()); st.pop();
        if (visited_rev[node]) continue;
        ans += DFS_rev(node);
    }
    out ans;
}

int main() {
    Sync;

    init();
    find_minCost();
}