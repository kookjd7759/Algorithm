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
    int** num = new int*[n];
    int* score = new int[n]; memset(score, 0, n * sizeof(int));

    Fori(n) {
        num[i] = new int[3];
        Forj(3) in num[i][j];
    }

    Fori(3) {
        map<int, int> m;
        Forj(n) {
            if (m.count(num[j][i])) m[num[j][i]] = false;
            else m.insert({ num[j][i], true });
        }
        Forj(n) if (m[num[j][i]]) score[j] += num[j][i];
    }

    Fori(n) out score[i] endl;
}