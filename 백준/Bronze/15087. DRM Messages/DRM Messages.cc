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

    string s; in s;
    int n = s.size() / 2;
    string a = s.substr(0, n), b = s.substr(n);

    int ra = 0, rb = 0;
    Fori(n) ra += a[i] - 'A', rb += b[i] - 'A';
    ra %= 26, rb %= 26;

    Fori(n) a[i] = char('A' + (a[i] - 'A' + ra) % 26);
    Fori(n) b[i] = char('A' + (b[i] - 'A' + rb) % 26);

    string ans = a;
    Fori(n) ans[i] = char('A' + ((a[i] - 'A') + (b[i] - 'A')) % 26);

    out ans endl;
    return 0;
}