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

int getMax(int arr[5]) {
    int maxi(-2e9);
    Fori(5) Forj(5) Fork(5) {
        if (i == j || j == k || i == k) continue;
        int sum = arr[i] + arr[j] + arr[k];
        maxi = max(maxi, sum % 10);
    }
    return maxi;
}

int main() {
    Sync;

    int n; in n;
    int** arr = new int*[n];
    Fori(n) arr[i] = new int[5];
    Fori(n) Forj(5) in arr[i][j];

    int maxi(-2e9), ret(-1);
    Fori(n) {
        int v = getMax(arr[i]);
        if (maxi <= v) {
            maxi = v;
            ret = i + 1;
        }
    }
    out ret;
}