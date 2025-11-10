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

    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        istringstream iss(line);
        vector<string> t;
        string s;
        while (iss >> s) t.push_back(s);
        int width = stoi(t[1]);
        int ratio = stoi(t[3]);
        int rim, idx;
        if ((int)t.size() == 6) {
            idx = 4;
            rim = stoi(t[5]);
        } else {
            idx = 5;
            rim = stoi(t[6]);
        }
        double h = width * (ratio / 100.0);
        double rim_mm = rim * 25.4;
        double dia_mm = rim_mm + 2.0 * h;
        double circ_cm = (dia_mm * acos(-1.0)) / 10.0;
        long long ans = llround(circ_cm);
        out line << ": " << ans << "\n";
    }
    return 0;
}
