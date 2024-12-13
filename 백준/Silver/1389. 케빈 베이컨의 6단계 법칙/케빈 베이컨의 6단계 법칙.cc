#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int main() {
    Sync;
    
    int n, m; in n >> m;
    int** arr = new int* [n];
    Fori(n) arr[i] = new int[n];
    Fori(n) Forj(n) arr[i][j] = 1e9;
    Fori(m) {
        int a, b; in a >> b; a--; b--;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    Fori(n) Forj(n) Fork(n) if (arr[j][k] > arr[j][i] + arr[i][k])
        arr[j][k] = arr[j][i] + arr[i][k];

    int mini(2e9), ans(-1);
    Fori(n) {
        int sum(0);
        Forj(n) if (i != j) sum += arr[i][j];
        if (mini > sum) {
            mini = sum;
            ans = i + 1;
        }
    }
    out ans;
}