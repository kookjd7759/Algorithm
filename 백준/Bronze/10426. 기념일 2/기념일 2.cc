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

int leap(int y){ return (y%400==0)||((y%4==0)&&(y%100!=0)); }

int main() {
    Sync;

    string s; int N; in s >> N;
    int y = stoi(s.substr(0,4)), m = stoi(s.substr(5,2)), d = stoi(s.substr(8,2));
    int md[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int add = N - 1;
    while (add) {
        int cur = md[m-1] + (m==2 ? leap(y) : 0);
        int left = cur - d;
        if (add <= left) { d += add; add = 0; }
        else {
            add -= left + 1; d = 1; m++;
            if (m == 13) { m = 1; y++; }
        }
    }
    out y << "-";
    out setw(2) << setfill('0') << m << "-";
    out setw(2) << setfill('0') << d endl;

    return 0;
}
