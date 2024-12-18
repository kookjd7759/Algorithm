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

int V, E;
vector<int>* edge;
bool* visited;
bool* isBreakPoint;
int* order;
int now_order(0);
vector<int> ans;

void init() {
    in V >> E;
    edge = new vector<int>[V + 1];
    Fori(E) {
        int a, b; in a >> b;
        if (a == b) edge[a].push_back(b);
        else edge[a].push_back(b), edge[b].push_back(a);
    }

    visited = new bool[V + 1]; memset(visited, false, sizeof(bool) * (V + 1));
    isBreakPoint = new bool[V + 1]; memset(isBreakPoint, false, sizeof(bool)* (V + 1));
    order = new int[V + 1]; memset(order, 0, sizeof(int) * (V + 1));
}

int find(int node, bool root = true) {
    visited[node] = true;
    int mini = order[node] = ++now_order;
    int children(0);

    Fori(edge[node].size()) {
        int child = edge[node][i];
        int child_order = order[child];
        if (!visited[child]) {
            ++children;
            child_order = find(child, false);
            if (!root && child_order >= order[node] && !isBreakPoint[node]) {
                ans.push_back(node);
                isBreakPoint[node] = true;
            }
        }
        mini = min(mini, child_order);
    }

    if (root && !isBreakPoint[node] && children > 1){
        ans.push_back(node);
        isBreakPoint[node] = true;
    }

    return mini;
}

int main() {
    Sync;

    init();
    Fori(V + 1) if (!visited[i]) find(i);
    sort(ans.begin(), ans.end());

    out ans.size() endl;
    Fori(ans.size()) out ans[i] << ' ';
}