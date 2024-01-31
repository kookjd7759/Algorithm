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

    auto isLinked = [&](pair<int, int> a, pair<int, int> b) -> bool {
        if (b.first <= a.first && a.first <= b.second)
            return true;
        if (b.first <= a.second && a.second <= b.second)
            return true;

        if (a.first <= b.first && b.first <= a.second)
            return true;
        if (a.first <= b.second && b.second <= a.second)
            return true;
        return false;
        };

    vector<pair<int, int>> vec(3);
    int mini(2e9), maxi(-2e9);
    Fori(3) {
        int a, b; in a >> b;
        if (a > b) swap(a, b);
        vec[i].first = a;
        vec[i].second = b;
        int len = b - a;
        mini = min(mini, len);
        maxi = max(maxi, len);
    }

    int cnt(0);
    Fori(2) for (int j = i + 1; j < 3; j++) {
        if (isLinked(vec[i], vec[j])) cnt++;
    }
    if (cnt == 0) out 3 endl;
    else if (cnt == 1) out 2 endl;
    else out 1 endl;
    out mini spc maxi;
}