#include <iostream>
#include <vector>
#include <set>
#include <iomanip>

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

    int T; in T;
    while (T--) {
        vector<int> s(5), v(5); Fori(5) in s[i] >> v[i];
        bool rainbow = true, spread = true;
        set<int> st; Fori(5) st.insert(s[i]); if ((int)st.size() != 5) rainbow = false;
        set<int> diff;
        Fori(5) for (int j = i + 1; j < 5; ++j) {
            int d = abs(v[i] - v[j]);
            if (diff.count(d)) spread = false;
            diff.insert(d);
        }
        out left << setw(24) << (spread ? "Have a spread." : "Do not have a spread.") << (rainbow ? "Have a rainbow." : "Do not have a rainbow.") endl;
    }

    return 0;
}