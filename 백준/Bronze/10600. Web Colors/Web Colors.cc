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

struct Color {
    string name;
    int r, g, b;
};

int main() {
    Sync;

    vector<Color> v = {
        {"White", 255, 255, 255},
        {"Silver", 192, 192, 192},
        {"Gray", 128, 128, 128},
        {"Black", 0, 0, 0},
        {"Red", 255, 0, 0},
        {"Maroon", 128, 0, 0},
        {"Yellow", 255, 255, 0},
        {"Olive", 128, 128, 0},
        {"Lime", 0, 255, 0},
        {"Green", 0, 128, 0},
        {"Aqua", 0, 255, 255},
        {"Teal", 0, 128, 128},
        {"Blue", 0, 0, 255},
        {"Navy", 0, 0, 128},
        {"Fuchsia", 255, 0, 255},
        {"Purple", 128, 0, 128}
    };

    int r, g, b;
    while (in r >> g >> b, !(r == -1 && g == -1 && b == -1)) {
        ll mn = (1LL << 62);
        string ans = "";
        Fori(16) {
            ll dr = r - v[i].r, dg = g - v[i].g, db = b - v[i].b;
            ll d = dr * dr + dg * dg + db * db;
            if (d < mn) mn = d, ans = v[i].name;
        }
        out ans endl;
    }

    return 0;
}