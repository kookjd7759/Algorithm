#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    int n, maxi(-2e9), ans, mxc = 101, t;
    in n;
    int* ns = (int*)malloc(sizeof(int) * n);
    Fori(n) {
        in ns[i];
        maxi = max(ns[i], maxi);
    }

    int* cnt = (int*)malloc(sizeof(int) * maxi + 1);
    fill(cnt, cnt + maxi + 1, 0);
    Fori(n) cnt[ns[i]]++;
    For1i(maxi) {
        if (mxc > cnt[i] && cnt[i] != 0) {
            mxc = cnt[i];
            ans = i;
        }
    }
    out ans;
}