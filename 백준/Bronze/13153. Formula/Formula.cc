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
    Fixed(3);

    double point[3][2]; Fori(3) Forj(2) in point[i][j];
    double input_r; in input_r;
    auto d = [&](int x, int y) -> double {
        double X = point[x][0] - point[y][0];
        double Y = point[x][1] - point[y][1];
        return sqrt(X * X + Y * Y);
        };
    double a = d(0, 1);
    double b = d(1, 2);
    double c = d(0, 2);

    double A = 0.25 * sqrt((4.0 * a * a * b * b) - ((a * a + b * b - c * c) * (a * a + b * b - c * c)));
    double abcper2 = (a + b + c) / 2.0;
    double cal_r = A / abcper2;
    double diff = abs(cal_r - input_r);
    if (cal_r > input_r) out diff / input_r * 100.0;
    else out -(diff / input_r * 100.0);
}