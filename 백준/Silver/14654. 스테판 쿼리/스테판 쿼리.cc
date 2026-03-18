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

bool Win(int a, int b) {
    return (a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2);
}

int main() {
    Sync;

    int N; in N;
    vector<int> a(N + 1), b(N + 1);
    For1i(N) in a[i];
    For1i(N) in b[i];

    int cur = Win(a[1], b[1]) ? 0 : 1, streak = 1, ans = 1;
    for (int i = 2; i <= N; ++i) {
        int x = a[i], y = b[i];
        if (cur == 0) {
            if (Win(x, y)) ++streak;
            else cur = 1, streak = 1;
        } else {
            if (Win(y, x)) ++streak;
            else cur = 0, streak = 1;
        }
        ans = max(ans, streak);
    }

    out ans endl;

    return 0;
}