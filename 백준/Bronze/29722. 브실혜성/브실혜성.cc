#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
#define Roop(x) while(x--) 

using namespace std;

int main() {
    Sync;

    int y(0), m(0), d(0); string st; in st;
    y += (st[0] - '0') * 1000 + (st[1] - '0') * 100 +
        (st[2] - '0') * 10 + (st[3] - '0');
    m += (st[5] - '0') * 10 + (st[6] - '0');
    d += (st[8] - '0') * 10 + (st[9] - '0');

    int n; in n;
    d += n;
    while (d > 30) {
        d -= 30;
        m++;
    }
    while (m > 12) {
        m -= 12;
        y++;
    }
    out y << "-" << (m < 10 ? "0" : "") << m << "-" << (d < 10 ? "0" : "") << d;
}