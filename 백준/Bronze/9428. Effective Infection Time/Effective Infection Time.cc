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
    Fixed(4);

    Testcase{
    int iM, iY, sM, sY; in iM >> iY >> sM >> sY;
    double ret = 0.0;
    if (iY == sY) ret += 0.5 * (sM - iM) / (12.0 - iM + 1);
    else ret += 0.5 + (sY - iY - 1) + (sM - 1) / 12.0;
    out ret endl;
    }
}