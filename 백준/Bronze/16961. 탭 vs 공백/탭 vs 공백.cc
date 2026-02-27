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
    vector<int> dT(368, 0), dS(368, 0);
    int bestStay = 0;
    Fori(N) {
        char c; int s, e; in c >> s >> e;
        bestStay = max(bestStay, e - s + 1);
        if (c == 'T') { dT[s]++; dT[e + 1]--; }
        else { dS[s]++; dS[e + 1]--; }
    }

    int occDays = 0, maxOcc = 0, noFightDays = 0, maxNoFightOcc = 0;
    int curT = 0, curS = 0;
    for (int day = 1; day <= 366; ++day) {
        curT += dT[day]; curS += dS[day];
        int total = curT + curS;
        if (total > 0) { occDays++; if (total > maxOcc) maxOcc = total; }
        bool noFight = false;
        if (total > 0) {
            if (curT == 0 || curS == 0) noFight = false;
            else if (curT == curS) noFight = true;
        }
        if (noFight) { noFightDays++; if (total > maxNoFightOcc) maxNoFightOcc = total; }
    }

    out occDays endl;
    out maxOcc endl;
    out noFightDays endl;
    out (noFightDays ? maxNoFightOcc : 0) endl;
    out bestStay endl;

    return 0;
}