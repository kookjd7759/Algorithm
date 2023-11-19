#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed;cout.precision(x);
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
    
    int n; in n;
    if (620 <= n && n <= 780) out "Red";
    else if (590 <= n && n < 620) out "Orange";
    else if (570 <= n && n < 590) out "Yellow";
    else if (495 <= n && n < 570) out "Green";
    else if (450 <= n && n < 495) out "Blue";
    else if (425 <= n && n < 450) out "Indigo";
    else if (380 <= n && n < 425) out "Violet";
}