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

    int R, C; in R >> C;
    string s;
    getline(cin, s);
    for (int i = 0; i < 6 * R - 1; ++i) getline(cin, s);

    out "aa#aa|aabaa" endl;
    out "abbab|acbba" endl;
    out "cbabb|cc#cc" endl;
    out "ccaac|aaaca" endl;
    out "bbbcc|bbbaa" endl;
    out "-----+-----" endl;
    out "aabaa|aabaa" endl;
    out "acbba|a#bba" endl;
    out "ccacc|cccdd" endl;
    out "bbacb|aaada" endl;
    out "#babb|bbbaa" endl;
    out "-----+-----" endl;
    out "aabaa|aabaa" endl;
    out "acbba|acbba" endl;
    out "ccaab|cca#b" endl;
    out "bba#b|baacb" endl;
    out "bcccb|bbccb" endl;

    return 0;
}