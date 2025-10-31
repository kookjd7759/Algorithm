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
    string a, b;
    in a >> b;
    auto tosec = [](string s) {
        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3, 2));
        int sec = stoi(s.substr(6, 2));
        return h * 3600 + m * 60 + sec;
    };
    int t1 = tosec(a), t2 = tosec(b);
    int hc = 0, mc = 0, sc = 0;
    for (int t = t1 + 1; t <= t2; ++t) {
        int h = (t / 3600) % 24;
        int m = (t / 60) % 60;
        int s = t % 60;
        if (s == 0) {
            sc++;
            if (m == 0) {
                mc++;
                if (h % 12 == 0) hc++;
            }
        }
    }
    out hc spc mc spc sc;
}
