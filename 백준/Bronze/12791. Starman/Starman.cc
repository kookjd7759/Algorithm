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
    pair<int, string> arr[25];
    arr[0] = make_pair(1967, "DavidBowie");
    arr[1] = make_pair(1969, "SpaceOddity");
    arr[2] = make_pair(1970, "TheManWhoSoldTheWorld");
    arr[3] = make_pair(1971, "HunkyDory");
    arr[4] = make_pair(1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars");
    arr[5] = make_pair(1973, "AladdinSane");
    arr[6] = make_pair(1973, "PinUps");
    arr[7] = make_pair(1974, "DiamondDogs");
    arr[8] = make_pair(1975, "YoungAmericans");
    arr[9] = make_pair(1976, "StationToStation");
    arr[10] = make_pair(1977, "Low");
    arr[11] = make_pair(1977, "Heroes");
    arr[12] = make_pair(1979, "Lodger");
    arr[13] = make_pair(1980, "ScaryMonstersAndSuperCreeps");
    arr[14] = make_pair(1983, "LetsDance");
    arr[15] = make_pair(1984, "Tonight");
    arr[16] = make_pair(1987, "NeverLetMeDown");
    arr[17] = make_pair(1993, "BlackTieWhiteNoise");
    arr[18] = make_pair(1995, "1.Outside");
    arr[19] = make_pair(1997, "Earthling");
    arr[20] = make_pair(1999, "Hours");
    arr[21] = make_pair(2002, "Heathen");
    arr[22] = make_pair(2003, "Reality");
    arr[23] = make_pair(2013, "TheNextDay");
    arr[24] = make_pair(2016, "BlackStar");

    int n; in n;
    Fori(n) {
        int s, e; in s >> e;
        int cnt(0);
        Forj(25) if (s <= arr[j].first && arr[j].first <= e)
            ++cnt;
        out cnt endl;
        Forj(25) if (s <= arr[j].first && arr[j].first <= e)
            out arr[j].first spc arr[j].second endl;
    }
}
