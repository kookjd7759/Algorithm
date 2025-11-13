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

int main() {
    Sync;

    string monthStr, dayStr, timeStr;
    int year;
    in monthStr >> dayStr >> year >> timeStr;

    int day = stoi(dayStr.substr(0, (int)dayStr.size() - 1));

    int colonPos = timeStr.find(':');
    int hour = stoi(timeStr.substr(0, colonPos));
    int minute = stoi(timeStr.substr(colonPos + 1));

    map<string, int> monthMap = {
        {"January", 1}, {"February", 2}, {"March", 3}, {"April", 4},
        {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8},
        {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}
    };

    int month = monthMap[monthStr];

    bool leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    int md[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (leap) md[2] = 29;

    ll daysBefore = 0;
    for (int m = 1; m < month; ++m) daysBefore += md[m];
    daysBefore += (day - 1);

    ll totalMinutes = (ll)(leap ? 366 : 365) * 24 * 60;
    ll elapsedMinutes = daysBefore * 24 * 60 + hour * 60 + minute;

    double ans = (double)elapsedMinutes * 100.0 / (double)totalMinutes;

    Fixed(15);
    out ans endl;

    return 0;
}
