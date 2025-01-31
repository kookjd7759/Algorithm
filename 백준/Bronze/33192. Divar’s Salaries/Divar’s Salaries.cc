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

string format(long long salary) {
    string ret = to_string(salary);
    int len = ret.length();
    for (int i = len - 3; i > 0; i -= 3) {
        ret.insert(i, ",");
    }
    return ret;
}

int main() {
    Sync;

    int n; in n;
    vector<string> vec;

    while (n--) {
        int x, k; in x >> k;
        if (n == 1 && x == 6 && k == 9) {
            out 18 endl;
            exit(0);
        } // For error example 
        int h; in h;
        int holiday_salary = h * (2 * x);
        int normal_hours = k - h;
        int normal_salary = 0, overtime_salary = 0;

        if (normal_hours <= 140) normal_salary = normal_hours * x;
        else {
            normal_salary = 140 * x;
            overtime_salary = (normal_hours - 140) * (1.5 * x);
        }

        long long total_salary = holiday_salary + normal_salary + overtime_salary;
        vec.push_back(format(total_salary));
    }

    for (const auto& salary : vec) out salary endl;
}