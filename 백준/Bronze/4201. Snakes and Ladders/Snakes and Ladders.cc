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

    // 여기만 수정
    int a, b, c; 
    in a >> b >> c;

    unordered_map<int,int> jump;
    jump.reserve(b * 2 + 10);
    Fori(b) {
        int x, y; in x >> y;
        jump[x] = y;
    }

    vector<int> pos(a, 1);
    bool finished = false;

    Fori(c) {
        int roll; in roll;
        if (finished) continue;
        int p = i % a;
        int np = pos[p] + roll;
        if (np > 100) np = 100;
        auto it = jump.find(np);
        if (it != jump.end()) np = it->second;
        pos[p] = np;
        if (pos[p] == 100) finished = true;
    }

    Fori(a) {
        out "Position of player " << i+1 << " is " << pos[i] << ".\n";
    }
    return 0;
}
