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

int day_of_week_sun0(int y, int m, int d) {
    static int md[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (m < 3) y--;
    return (y + y / 4 - y / 100 + y / 400 + md[m - 1] + d) % 7; 
}

int main() {
    Sync;
    int y;
    in y;
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool leap = (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
    if (leap) days_in_month[1] = 29;
    int total_rows = 0;
    Fori(12) {
        int m = i + 1;
        int dow_sun0 = day_of_week_sun0(y, m, 1);
        int dow_mon0 = (dow_sun0 + 6) % 7;
        int d = days_in_month[i];
        int rows = (dow_mon0 + d + 6) / 7;
        total_rows += rows;
    }
    out total_rows;
}
