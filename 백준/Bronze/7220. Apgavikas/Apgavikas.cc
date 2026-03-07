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

    int N, M; in N >> M;
    vector<int> p(N + 1);
    For1i(N) in p[i];

    vector<vector<int>> k(N + 1, vector<int>(N + 1));
    For1i(N) For1j(N) in k[i][j];

    vector<int> alive(N + 1, 1), know(N + 1, 0);
    int aliveCrew = N, red = 0;

    For1i(N) {
        int victim = p[i], room = k[i][victim];

        For1j(N) if(alive[j] && j != victim && k[i][j] == room) {
            if(!know[j]) know[j] = 1, ++red;
        }

        alive[victim] = 0;
        --aliveCrew;
        if(know[victim]) --red;

        if(red > (aliveCrew - red) + 1) {
            out i endl;
            return 0;
        }
    }

    out N endl;

    return 0;
}