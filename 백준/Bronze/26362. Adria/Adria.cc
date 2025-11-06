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

int main() {
    Sync;
    int G, N; in G >> N;
    vector<vector<int>> sets(N);
    Fori(N) {
        int X; in X;
        sets[i].resize(X);
        Forj(X) in sets[i][j];
    }

    auto play_until = [&](const vector<int>& s, int limit)->pair<int, int> {
        int a = 0, b = 0;
        for (int v : s) {
            if (v == 1) ++a; else ++b;
            if (a == limit || b == limit) break;
        }
        return { a,b };
        };

    auto p1 = play_until(sets[0], G);
    out p1.first << "\n";

    int jos = 0;
    Fori(N) {
        auto p = play_until(sets[i], G);
        if (p.second == G) ++jos;
    }
    out jos << "\n";

    int bestG1 = 1, bestWins = -1;
    for (int g1 = 1; g1 < G; ++g1) {
        int w = 0;
        Fori(N) {
            auto p = play_until(sets[i], g1);
            if (p.first == g1) ++w;
        }
        if (w > bestWins || (w == bestWins && g1 < bestG1)) {
            bestWins = w; bestG1 = g1;
        }
    }
    out bestG1 << "\n";
    return 0;
}
