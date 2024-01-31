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

    int n, mini(2e9), maxi(-2e9), ret(0);
    in n;
    Fori(n) {
        string st; in st;
        int t; 
        if (st[1] == ':')
            t = (st[0] - '0') * 60 + (st[2] - '0') * 10 + (st[3] - '0');
        else
            t = (st[0] - '0') * 600 + (st[1] - '0') * 60 
            + (st[3] - '0') * 10 + (st[4] - '0');
        if (t >= 390 && t <= 1140) {
            mini = min(t, mini);
            maxi = max(t, maxi);
        }
    }

    if ((390 <= mini && mini <= 600) && (390 <= maxi && maxi <= 960))
        ret = max(0, 24000);
    if ((390 <= mini && mini <= 600) && (961 <= maxi && maxi <= 1140))
        ret = max(0, 36000);
    if ((601 <= mini && mini <= 960) && (601 <= maxi && maxi <= 960))
        ret = max(0, 16800);
    if ((601 <= mini && mini <= 1140) && (961 <= maxi && maxi <= 1140))
        ret = max(0, 24000);
    out ret;
}