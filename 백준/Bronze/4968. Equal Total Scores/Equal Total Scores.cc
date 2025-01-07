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

    while (true) {
        int n, m; in n >> m;
        if (!n && !m) break;

        vector<int> taro(n), hanako(m);
        int sumTaro(0), sumHanako(0);

        Fori(n) in taro[i], sumTaro += taro[i];
        Fori(m) in hanako[i], sumHanako += hanako[i];

        int delta = sumTaro - sumHanako;

        if (delta % 2 != 0) {
            out -1 endl; continue;
        }

        delta /= 2;

        int minSum(2e9), X(-1), Y(-1);

        for (int x : taro) {
            for (int y : hanako) {
                if (x - y == delta) {
                    if (x + y < minSum) {
                        minSum = x + y;
                        X = x;
                        Y = y;
                    }
                }
            }
        }

        if (X == -1) out -1 endl;
        else out X spc Y endl;
    }
}