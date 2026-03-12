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

    int T; in T;
    For1i(T) {
        int D, K, N; in D >> K >> N;
        vector<int> a(D);
        Forj(D) a[j] = j + 1;

        for (int t = 1; t <= N; ++t) {
            vector<int> b = a;
            if (t & 1) for (int s = 0; s < D; s += 2) swap(b[s], b[(s + 1) % D]);
            else for (int s = 0; s < D; s += 2) swap(b[(D - s) % D], b[(D - s - 1 + D) % D]);
            a = b;
        }

        int pos = 0;
        Forj(D) if (a[j] == K) pos = j;
        int left = a[(pos + 1) % D];
        int right = a[(pos - 1 + D) % D];

        out "Case #" << i << ": " << left << " " << right << "\n";
    }

    return 0;
}