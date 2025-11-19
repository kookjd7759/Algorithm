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

    int n;
    in n;

    deque<int> q;
    int maxLen = 0;
    int maxBack = 0;

    Fori(n) {
        int t;
        in t;
        if (t == 1) {
            int a;
            in a;
            q.push_back(a);
            int sz = (int)q.size();
            if (sz > maxLen) {
                maxLen = sz;
                maxBack = a;
            } else if (sz == maxLen) {
                if (a < maxBack) maxBack = a;
            }
        } else {
            if (!q.empty()) q.pop_front();
        }
    }

    out maxLen spc maxBack;

    return 0;
}
