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
    cin.ignore();
    string line;
    Fori(n) {
        getline(cin, line);
        stringstream ss(line);
        string x;
        while (ss >> x) {
            int a = 0, b = 0;
            while (a < (int)x.size() && x[a] == 'M') ++a;
            for (int j = a; j < (int)x.size(); ++j) if (x[j] == 'O') ++b;
            out char(a * 16 + b);
        }
        ent;
    }

    return 0;
}