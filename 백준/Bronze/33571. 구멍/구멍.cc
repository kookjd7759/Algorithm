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

    int alpha_upper[26]; memset(alpha_upper, 0, sizeof(alpha_upper));
    int alpha_lower[26]; memset(alpha_lower, 0, sizeof(alpha_lower));
    alpha_upper['A' - 'A'] = 1; alpha_upper['B' - 'A'] = 2; alpha_upper['D' - 'A'] = 1;
    alpha_lower['a' - 'a'] = 1; alpha_lower['b' - 'a'] = 1; alpha_lower['d' - 'a'] = 1;
    alpha_lower['e' - 'a'] = 1;
    alpha_lower['g' - 'a'] = 1;
    alpha_upper['O' - 'A'] = 1; alpha_upper['P' - 'A'] = 1; alpha_upper['Q' - 'A'] = 1;
    alpha_lower['o' - 'a'] = 1; alpha_lower['p' - 'a'] = 1; alpha_lower['q' - 'a'] = 1;
    alpha_upper['R' - 'A'] = 1;

    int sum(0);
    string line; getline(cin, line);
    for (const char c : line) {
        if (c == '@') sum += 1;
        else if (islower(c)) sum += alpha_lower[c - 'a'];
        else if (isupper(c)) sum += alpha_upper[c - 'A'];
    }
    out sum;
}