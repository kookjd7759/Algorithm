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

    int n, w, h;
    in n >> w >> h;

    vector<vector<string>> pat(n, vector<string>(h));
    Fori(n) {
        Forj(h) {
            in pat[i][j];
        }
    }

    vector<string> img(h);
    Fori(h) in img[i];

    int best = -1;
    int bestIdx = 0;

    Fori(n) {
        int sim = 0;
        Forj(h) {
            Fork(w) {
                if (pat[i][j][k] == img[j][k]) ++sim;
            }
        }
        if (sim > best) {
            best = sim;
            bestIdx = i + 1;
        }
    }

    out bestIdx endl;

    return 0;
}
