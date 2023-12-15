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

    auto getScore = [&](const double& x, const double& y) -> int {
        double d = sqrt(x * x + y * y);
        if (d <= 10) return 10;
        else if (d <= 30) return 9;
        else if (d <= 50) return 8;
        else if (d <= 70) return 7;
        else if (d <= 90) return 6;
        else if (d <= 110) return 5;
        else if (d <= 130) return 4;
        else if (d <= 150) return 3;
        else if (d <= 170) return 2;
        else if (d <= 190) return 1;
        else return 0;
        };

    int score(0);
    Testcase{
    double x, y; in x >> y;
    score += getScore(abs(x), abs(y));
    };
    out score;
}