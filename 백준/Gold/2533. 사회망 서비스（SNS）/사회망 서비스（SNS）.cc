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

vector<int>* tree;
bool* visited;
pair<int, int>* dp;

void init(int node) {
    visited[node] = true;
    dp[node].second = 1;
    Fori(tree[node].size()) {
        int child = tree[node][i];
        if (visited[child]) continue;
        init(child);
        dp[node].first += dp[child].second;
        dp[node].second += min(dp[child].first, dp[child].second);
    }
}

int main() {
    Sync;

    int n; in n;
    tree = new vector<int>[n + 1];
    Fori(n - 1) {
        int a, b; in a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    visited = new bool[n + 1]; 
    Fori(n + 1) visited[i] = false;
    dp = new pair<int, int>[n + 1]; 
    Fori(n + 1) dp[i].first = 0, dp[i].second = 0;
    init(1);
    out min(dp[1].first, dp[1].second);
}