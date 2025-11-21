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

    int n;
    in n;

    vector<string> ex(n);
    Fori(n) in ex[i];

    const string LEG  = u8"🦵";
    const string ARM  = u8"💪";
    const string REST = u8"😴";

    vector<string> days(31);

    Fori(31) {
        const string& s = ex[i % n];
        if (s.find("rest") != string::npos) {
            days[i] = REST;
        } else if (s.find("leg") != string::npos) {
            days[i] = LEG;
        } else {
            days[i] = ARM;
        }
    }

    Fori(5) {
        int week = i + 1;
        out week << ' ';
        int start = i * 7;
        int end = min(start + 7, 31);
        for (int d = start; d < end; ++d) {
            out days[d];
        }
        out "" endl;
    }

    return 0;
}
