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

    while (1) {
        int G, N; in G >> N;
        if (!G && !N) break;

        vector<int> M(G);
        vector<vector<int>> pref(G, vector<int>(N));
        Fori(G) {
            in M[i];
            Forj(N) in pref[i][j];
        }

        vector<int> alive(N + 1, 1);
        int left = N;

        while (left > 1) {
            vector<int> vote(N + 1, 0);

            Fori(G) {
                Forj(N) if (alive[pref[i][j]]) {
                    vote[pref[i][j]] += M[i];
                    break;
                }
            }

            int loser = -1, mn = (int)1e9;
            For1i(N) if (alive[i]) {
                if (vote[i] < mn || (vote[i] == mn && i > loser)) mn = vote[i], loser = i;
            }

            alive[loser] = 0;
            left--;
        }

        For1i(N) if (alive[i]) {
            out i endl;
            break;
        }
    }

    return 0;
}