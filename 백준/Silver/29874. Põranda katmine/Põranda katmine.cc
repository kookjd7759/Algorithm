#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n";
#define ent cout << "\n";
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

    int X, Y, A1, B1, A2, B2; in X >> Y >> A1 >> B1 >> A2 >> B2;
    vector<pair<int,int>> v1 = {{A1, B1}, {B1, A1}}, v2 = {{A2, B2}, {B2, A2}};

    for (auto [w, h] : v1) if (w == X && h == Y) {
        out 0 spc 0 spc X spc Y endl;
        out "Z" endl;
        return 0;
    }
    for (auto [w, h] : v2) if (w == X && h == Y) {
        out "Z" endl;
        out 0 spc 0 spc X spc Y endl;
        return 0;
    }

    for (auto [w1, h1] : v1) for (auto [w2, h2] : v2) {
        if (w1 <= X && h1 == Y && w2 <= X && h2 == Y && w1 + w2 >= X) {
            out 0 spc 0 spc w1 spc Y endl;
            out X - w2 spc 0 spc X spc Y endl;
            return 0;
        }
        if (h1 <= Y && w1 == X && h2 <= Y && w2 == X && h1 + h2 >= Y) {
            out 0 spc 0 spc X spc h1 endl;
            out 0 spc Y - h2 spc X spc Y endl;
            return 0;
        }
    }

    out "EI SAA" endl;
    return 0;
}