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

    int N;
    in N;

    int L[5] = { 190, 200, 10, 2, 3 };
    int R[5] = { 220, 250, 20, 6, 7 };

    Fori(N) {
        int vals[5];
        Forj(5) in vals[j];

        int st[5];
        int cntAbove = 0, cntUpperOrAbove = 0, cntInOrAbove = 0;

        Forj(5) {
            int v = vals[j];
            int l = L[j], r = R[j];
            int s;
            if (v < l) s = -1;
            else if (v > r) s = 2;
            else {
                int mid = (l + r) / 2;
                if (v < mid) s = 0;
                else s = 1;
            }
            st[j] = s;
            if (s >= 0) ++cntInOrAbove;
            if (s >= 1) ++cntUpperOrAbove;
            if (s == 2) ++cntAbove;
        }

        bool aboveHeight = (st[0] == 2);
        bool aboveWingspan = (st[1] == 2);

        int cat = 3;

        if (cntAbove >= 3 && (aboveHeight || aboveWingspan)) {
            cat = 0;
        }
        else {
            bool first = false;
            if (cntAbove >= 2 && cntUpperOrAbove >= 3) first = true;
            if (!first) {
                if (cntInOrAbove == 5 && cntUpperOrAbove >= 3) first = true;
            }
            if (first) {
                cat = 1;
            }
            else {
                bool second = false;
                if (cntAbove >= 1 && cntUpperOrAbove >= 2) second = true;
                if (!second) {
                    if (cntUpperOrAbove >= 3) second = true;
                }
                if (second) cat = 2;
            }
        }

        out cat endl;
    }

    return 0;
}
