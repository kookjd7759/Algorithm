#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
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

    Testcase{
    int m, first(0), now(0); in m;
    Roop(m) {
        int p1, p2; in p1 >> p2;
        if (p1 == p2) continue;
        else {
            if (p1 > p2) now += p1 - p2;
            else { // p1 < p2
                int temp = p2 - p1;
                if (temp == now) now = 0;
                else if (temp < now) now -= temp;
                else {
                    temp -= now;
                    now = 0;
                    first += temp;
                }
            }
        }
    }
    out first endl;
    };
}