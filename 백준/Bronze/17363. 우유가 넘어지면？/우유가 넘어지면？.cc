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

char rot(char c) {
    if (c == '.') return '.';
    if (c == 'O') return 'O';
    if (c == '-') return '|';
    if (c == '|') return '-';
    if (c == '/') return '\\';
    if (c == '\\') return '/';
    if (c == '^') return '<';
    if (c == '<') return 'v';
    if (c == 'v') return '>';
    if (c == '>') return '^';
    return c;
}

int main() {
    Sync;
    int N, M;
    in N >> M;
    vector<string> a(N);
    Fori(N) in a[i];
    vector<string> b(M, string(N, '.'));
    Fori(M) {
        Forj(N) {
            b[i][j] = rot(a[j][M - 1 - i]);
        }
    }
    Fori(M) out b[i] << "\n";
}
