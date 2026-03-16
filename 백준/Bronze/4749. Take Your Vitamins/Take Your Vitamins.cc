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

    vector<string> small;
    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        stringstream ss(line);
        double A, R; string U, V;
        ss >> A;
        if (A < 0) break;
        ss >> U >> R;
        getline(ss, V);
        V = V.substr(1);
        double P = A / R * 100.0;
        if (P >= 1.0) {
            out V << " ";
            Fixed(1); out A << " " << U << " ";
            Fixed(0); out P << "%" endl;
        } else small.push_back(V);
    }
    out "Provides no significant amount of:" endl;
    for (string &s : small) out s endl;

    return 0;
}