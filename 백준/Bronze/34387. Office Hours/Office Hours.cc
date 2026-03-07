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
    vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    map<string, int> mp; Fori(7) mp[days[i]] = i;
    vector<vector<int>> cnt(7, vector<int>(24, 0));

    Fori(N) {
        string name, day; int x; in name >> day >> x;
        int d = mp[day];
        Forj(x) {
            int h; in h;
            cnt[d][h]++;
        }
    }

    int bd = 0, bh = 0, best = -1;
    Fori(7) Forj(24) if(cnt[i][j] > best) best = cnt[i][j], bd = i, bh = j;

    out "Your professor should host office hours " << days[bd] << " @ ";
    if(bh < 10) out '0';
    out bh << ":00\n";

    return 0;
}