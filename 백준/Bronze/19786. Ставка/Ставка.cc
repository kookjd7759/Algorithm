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

    Testcase {
        int a, c, r, g, b; in a >> c >> r >> g >> b;
        int red = a * (pow(r + 1, 2) + pow(g, 2) + pow(b, 2)) + c * min({ r + 1, g, b });
        int green = a * (pow(r, 2) + pow(g + 1, 2) + pow(b, 2)) + c * min({ r, g + 1, b });
        int blue = a * (pow(r, 2) + pow(g, 2) + pow(b + 1, 2)) + c * min({ r, g, b + 1 });

        if (red >= green && red >= blue) out "RED\n";
        else if (green >= red && green >= blue) out "GREEN\n";
        else out "BLUE\n";
    }
}