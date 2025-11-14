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

    int A, T, X;
    in A >> T >> X;

    int person = 0;
    int cnt = 0;
    int roundNum = 1;

    while (true) {
        for (int p = 0; p < 4; ++p) {
            int w = (p % 2 == 0 ? 0 : 1);
            if (w == X) {
                ++cnt;
                if (cnt == T) {
                    out person endl;
                    return 0;
                }
            }
            person = (person + 1) % A;
        }

        int rep = roundNum + 1;

        for (int i = 0; i < rep; ++i) {
            int w = 0;
            if (w == X) {
                ++cnt;
                if (cnt == T) {
                    out person endl;
                    return 0;
                }
            }
            person = (person + 1) % A;
        }

        for (int i = 0; i < rep; ++i) {
            int w = 1;
            if (w == X) {
                ++cnt;
                if (cnt == T) {
                    out person endl;
                    return 0;
                }
            }
            person = (person + 1) % A;
        }

        ++roundNum;
    }

    return 0;
}
