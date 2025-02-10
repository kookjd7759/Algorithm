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
    char** arr = new char *[n];
    Fori(n) arr[i] = new char[n];

    Fori(n) Forj(n) in arr[i][j];

    int cnt1(0), cnt2(0);
    Fori(n) {
        int temp1(0), temp2(0);
        Forj(n) {
            if (arr[i][j] == '.') ++temp1;
            else {
                if (temp1 >= 2) ++cnt1;
                temp1 = 0;
            }

            if (arr[j][i] == '.') ++temp2;
            else {
                if (temp2 >= 2) ++cnt2;
                temp2 = 0;
            }

        }
        if (temp1 >= 2) ++cnt1;
        if (temp2 >= 2) ++cnt2;
    }
    out cnt1 spc cnt2;
}