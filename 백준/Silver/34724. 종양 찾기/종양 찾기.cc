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

    int N, M;
    in N >> M;
    vector<string> g(N);
    Fori(N) in g[i];

    vector<int> h(M, 0);

    Fori(N) {
        Forj(M) {
            if (g[i][j] == '1') h[j] += 1;
            else h[j] = 0;
        }
        for (int j = 0; j + 1 < M; ++j) {
            if (h[j] >= 2 && h[j + 1] >= 2) {
                out 1 endl;
                return 0;
            }
        }
    }

    out 0 endl;
    return 0;
}
