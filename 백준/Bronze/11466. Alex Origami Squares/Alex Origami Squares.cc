#include <iostream>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

#include <vector>
#include <stack>
#include <queue>
#include <map>

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

    double a[2], ans; in a[0] >> a[1];
    sort(a, a + 2);
    if (a[0] * 3 < a[1]) ans = a[0];
    else if (a[0] * 1.5 < a[1]) ans = a[1] / 3;
    else ans = a[0] / 2;
    out ans;
}