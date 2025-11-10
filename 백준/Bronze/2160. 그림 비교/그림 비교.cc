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

    int n; in n;
    string* st = new string[5 * n];
    Fori(n * 5) in st[i];

    auto diff = [&](int a, int b) -> int {
        int score(0);
        Fori(5) Forj(7) 
            if (st[a * 5 + i][j] == st[b * 5 + i][j]) ++score;
        return score;
        };

    int a(-1), b(-1), maxi(-2e9);
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j) {
            int score = diff(i, j);
            if (maxi < score) {
                a = i, b = j;
                maxi = score;
            }
        }
    out a + 1 spc b + 1;
}
