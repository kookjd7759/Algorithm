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
    Fixed(0);

    auto to_time = [&](string st) -> double {
        double t = 0.0;
        t += (st[0] - '0') * 60.0;
        t += (st[2] - '0') * 10.0;
        t += (st[3] - '0');
        t += (st[5] - '0') / 6.0;
        t += (st[6] - '0') / 60.0;

        return t;
        };

    int n, t; double d; in n >> d;
    while (in t) {
        double time(0.0);
        bool ch = false;
        Fori(n) {
            string st; in st;
            if (st == "-:--:--") ch = true;
            else time += to_time(st);
        }
        time /= d;

        if (t < 10) out "  ";
        else if (t < 100) out " ";
        out t << ":";
        if (ch) out " -\n";
        else {
            int sec = round((time - double(int(time))) * 60.0);
            if (sec == 60) {
                time++;
                sec = 0;
            }
            if (time < 10) out " ";
            out int(time) << ":";
            if (sec < 10) out "0";
            out sec << " min/km\n";
        }
    }
}