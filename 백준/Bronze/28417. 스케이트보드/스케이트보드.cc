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

int a[2], b[5];

int main() {
    Sync;

    int n, max_(0); in n;
    Roop(n) {
        Fori(2) in a[i]; sort(a, a + 2);
        Fori(5) in b[i]; sort(b, b + 5);
        int score = a[1] + b[3] + b[4];
        max_ = max(max_, score);
    }
    out max_;
}