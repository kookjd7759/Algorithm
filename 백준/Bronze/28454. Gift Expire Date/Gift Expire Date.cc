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

struct Date {
    int y, m, d;

    static Date parseDate(const string& s) {
        return {
          stoi(s.substr(0, 4)),
          stoi(s.substr(5, 2)),
          stoi(s.substr(8, 2))
        };
    }

    bool isAfterOrEqual(const Date& other) const {
        if (y != other.y) return y > other.y;
        if (m != other.m) return m > other.m;
        return d >= other.d;
    }
};

int main() {
    Sync;

    string st; in st;
    Date cur = Date::parseDate(st);

    int n, cnt(0); in n;
    while (n--) {
        string a; in a;
        Date ad = Date::parseDate(a);

        if (ad.isAfterOrEqual(cur)) cnt++;
    }

    cout << cnt << "\n";
}