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

    int n; in n;
    vector<pair<int, int>> vec(n);
    Fori(n) {
        int x1, y1, x2, y2; in x1 >> y1 >> x2 >> y2;
        int x = x2 - x1, y = y2 - y1;
        vec[i].first = x, vec[i].second = y;
    }
    
    auto check = [](int x1, int y1, int x2, int y2) -> bool {
        bool ch1 = false, ch2 = false;
        if ((x1 < x2 && y1 > y2) ||
            (x1 > x2 && y1 < y2))
            ch1 = true;
        swap(x1, y1);
        if ((x1 < x2 && y1 > y2) ||
            (x1 > x2 && y1 < y2))
            ch2 = true;
        return ch1 && ch2;
        };

    int cnt(0);
    Fori(n - 1) for (int j = i + 1; j < n; j++) {
        int x1 = vec[i].first, y1 = vec[i].second;
        int x2 = vec[j].first, y2 = vec[j].second;

        if (check(x1, y1, x2, y2)) {
            cnt++;
        }
    }
    out cnt;
}