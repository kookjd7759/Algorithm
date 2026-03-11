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

int Hex(char c) {
    if('0' <= c && c <= '9') return c - '0';
    return c - 'A' + 10;
}

int main() {
    Sync;

    string s, t; in s >> t;
    int N = s.size() / 2;
    vector<int> a(N), b(N + 1), k(N + 1);

    Fori(N) a[i] = Hex(s[2 * i]) * 16 + Hex(s[2 * i + 1]);
    Fori(N + 1) b[i] = Hex(t[2 * i]) * 16 + Hex(t[2 * i + 1]);

    k[0] = b[0] ^ 32;
    Fori(N) k[i + 1] = k[i] ^ a[i] ^ b[i + 1];

    const char *h = "0123456789ABCDEF";
    Fori(N + 1) out h[k[i] / 16] << h[k[i] % 16];
    ent;

    return 0;
}