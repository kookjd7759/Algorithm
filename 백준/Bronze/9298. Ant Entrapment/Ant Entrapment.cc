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
    cout << fixed; cout.precision(10);
    
    int tc; in tc;
    For1k(tc){
    int n; in n; n--;
    double x, y; in x >> y;
    double l = x, r = x, u = y, d = y;
    Fori(n) {
        in x >> y;

        if (l > x) l = x;
        else if (r < x) r = x;

        if (u < y) u = y;
        else if (d > y) d = y;
    }
    out "Case " << k << ": ";
    out "Area " << abs(r - l) * abs(u - d) << ", ";
    out "Perimeter " << abs(r - l) * 2 + abs(u - d) * 2 endl;
    };
}