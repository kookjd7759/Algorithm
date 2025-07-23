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

int func(char c) {
    return c == 'L' ? 0
        : c == 'O' ? 1
        : c == 'V' ? 2
        : c == 'E' ? 3
        : -1;
}

int main() {
    Sync;

    int LOVE[4]; memset(LOVE, 0, sizeof(LOVE));
    string name; in name;
    Fori(name.size()) {
        int a = func(name[i]);
        if (a != -1) LOVE[a]++;
    }

    int n, maxi(-1); in n;
    string maxi_team;
    Fori(n) {
        int temp_LOVE[4];
        memcpy(temp_LOVE, LOVE, sizeof(LOVE));

        string team; in team;
        Fori(team.size()) {
            int a = func(team[i]);
            if (a != -1) temp_LOVE[a]++;
        }

        int L(temp_LOVE[0]), O(temp_LOVE[1]), V(temp_LOVE[2]), E(temp_LOVE[3]);
        int score = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
        
        if (score > maxi) {
            maxi = score;
            maxi_team = team;
        }
        if (score == maxi) {
            if (team < maxi_team)
                maxi_team = team;
        }
    }
    out maxi_team;
}