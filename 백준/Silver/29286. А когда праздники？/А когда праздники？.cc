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

    int n;
    in n;
    string startDay, leapFlag;
    in startDay >> leapFlag;

    map<string, int> wd;
    wd["monday"] = 0;
    wd["tuesday"] = 1;
    wd["wednesday"] = 2;
    wd["thursday"] = 3;
    wd["friday"] = 4;
    wd["saturday"] = 5;
    wd["sunday"] = 6;

    map<string, int> md;
    md["january"] = 0;
    md["february"] = 1;
    md["march"] = 2;
    md["april"] = 3;
    md["may"] = 4;
    md["june"] = 5;
    md["july"] = 6;
    md["august"] = 7;
    md["september"] = 8;
    md["october"] = 9;
    md["november"] = 10;
    md["december"] = 11;

    int daysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (leapFlag == "yes") daysInMonth[1] = 29;

    int w0 = wd[startDay];
    int startMonthW[12];
    startMonthW[0] = w0;
    for (int m = 1; m < 12; ++m) {
        startMonthW[m] = (startMonthW[m - 1] + daysInMonth[m - 1]) % 7;
    }

    Fori(n) {
        string type, dayName, ofWord, monthName;
        in type >> dayName >> ofWord >> monthName;
        int m = md[monthName];
        int len = daysInMonth[m];
        int wStart = startMonthW[m];
        int target = wd[dayName];
        int delta = (target - wStart + 7) % 7;
        int firstDay = 1 + delta;
        int res;
        if (type == "first") {
            res = firstDay;
        }
        else {
            int lastDay = firstDay;
            lastDay += 7 * ((len - firstDay) / 7);
            res = lastDay;
        }
        out res endl;
    }

    return 0;
}
