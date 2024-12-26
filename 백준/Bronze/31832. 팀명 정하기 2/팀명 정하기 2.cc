#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

bool check(string st) {
    if (st.size() > 10) return false;
    int upper(0), lower(0);
    bool noDigit(false);
    for (const char& c : st) {
        if (isupper(c)) ++upper;
        else if (islower(c)) ++lower;
        
        if (!isdigit(c)) noDigit = true;
    }
    if (upper > lower) return false;
    if (!noDigit) return false;
    return true;
}

int main() {
    Sync;

    int n; in n;
    Fori(n) {
        string st; in st;
        if (check(st)) out st endl;
    }
}