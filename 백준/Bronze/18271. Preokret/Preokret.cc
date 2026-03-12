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
    vector<int> a(N);
    Fori(N) in a[i];

    int s1 = 0, s2 = 0, ties = 1, best = 0;
    Fori(N) {
        if (a[i] == 1) s1++;
        else s2++;
        if (s1 == s2) ties++;
    }

    int c1 = 0, c2 = 0;
    for (int i = 0; i < N; ) {
        int team = a[i], j = i;
        while (j < N && a[j] == team) j++;
        int len = j - i;

        if (team == 1) {
            if (c1 < c2 && c1 + len > c2) best = max(best, len);
            c1 += len;
        } else {
            if (c2 < c1 && c2 + len > c1) best = max(best, len);
            c2 += len;
        }
        i = j;
    }

    out s1 spc s2 << "\n";
    out ties << "\n";
    out best << "\n";

    return 0;
}