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

    int N; in N;
    vector<vector<int>> a(N + 1, vector<int>(8));
    Fori(N + 1) Forj(8) in a[i][j];

    int evenRows = 0, oddRows = 0;
    vector<int> rowParity(N);
    Fori(N) {
        int sum = 0;
        Forj(8) sum += a[i][j];
        rowParity[i] = sum % 2;
        if (rowParity[i] == 0) evenRows++;
        else oddRows++;
    }

    int parity = (evenRows > oddRows ? 0 : 1);
    int brokenByte = 1;
    Fori(N) if (rowParity[i] != parity) brokenByte = i + 1;

    int brokenBit = 1;
    Forj(8) {
        int sum = 0;
        Fori(N + 1) sum += a[i][j];
        if (sum % 2 != parity) {
            brokenBit = j + 1;
            break;
        }
    }

    out (parity == 0 ? "Even" : "Odd") << "\n";
    out "Byte " << brokenByte << " is broken\n";
    out "Bit " << brokenBit << " is broken\n";

    return 0;
}