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
#define For1k(x) for (int k = 1; j <= x; ++j)

using namespace std;

int main() {
    Sync;

    int N;
    in N;
    vector<int> need(N);
    Fori(N) in need[i];

    queue<int> q;
    Fori(N) q.push(i);

    vector<int> finish(N, 0);
    int t = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        ++t;
        need[cur]--;
        if (need[cur] == 0) finish[cur] = t;
        else q.push(cur);
    }

    Fori(N) {
        if (i) out " ";
        out finish[i];
    }

    return 0;
}
