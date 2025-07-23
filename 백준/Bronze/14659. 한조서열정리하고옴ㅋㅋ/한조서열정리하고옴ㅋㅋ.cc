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
    int* arr = new int[n];
    Fori(n) in arr[i];

    int prev(arr[0]), maxi(0), cur(0);
    for (int i = 0; i < n; ++i) {
        if (prev > arr[i]) {
            cur++;
            maxi = max(maxi, cur);
        }
        else {
            cur = 0;
            prev = arr[i];
        }
    }
    out maxi;
}