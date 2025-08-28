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

    int n, X;
    in n >> X;

    vector<int> a(n);
    Fori(n) in a[i];

    vector<long long> b(X);
    Fori(X) in b[i];

    if (n < X) { 
        out - 1 << '\n';
        return 0;
    }

    long long sumA = 0, sumB = 0;
    Fori(n) sumA += a[i];
    Fori(X) sumB += b[i];

    int idx = 0;          
    long long cur = 0;    

    for (int j = 0; j < X - 1; ++j) {
        int must_left = X - 1 - j;
        while (idx < n - must_left && cur < b[j]) {
            cur += a[idx++];
        }
        if (cur < b[j]) {
            out - 1 << '\n';
            return 0;
        }
        cur = 0;
    }

    long long lastSum = 0;
    for (; idx < n; ++idx) lastSum += a[idx];

    if (lastSum < b[X - 1]) {
        out - 1 << '\n';
        return 0;
    }

    out(sumA - sumB);
}