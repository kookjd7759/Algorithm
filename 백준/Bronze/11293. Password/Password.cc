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

    int C; in C;
    cin.ignore();
    For1i(C) {
        int A; in A;
        cin.ignore();
        vector<string> ans(A + 1), letters(A + 1);
        For1j(A) {
            getline(cin, ans[j]);
            for (char c : ans[j]) if (c != ' ') letters[j].push_back(c);
        }

        int L; in L;
        out "Customer " << i << "\n";
        Forj(L) {
            int q, x, y; char c1, c2; in q >> x >> y >> c1 >> c2;
            if (letters[q][x - 1] == c1 && letters[q][y - 1] == c2) out "correct\n";
            else out "error\n";
        }
    }

    return 0;
}