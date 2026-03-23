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

    map<char, double> mp; mp['C'] = 12.01; mp['H'] = 1.008; mp['O'] = 16.00; mp['N'] = 14.01;
    int T; in T;
    Fixed(3);
    while (T--) {
        string s; in s;
        double ans = 0;
        for (int i = 0; i < (int)s.size(); ++i) if (isalpha(s[i])) {
            int j = i + 1, num = 0;
            while (j < (int)s.size() && isdigit(s[j])) num = num * 10 + (s[j++] - '0');
            if (!num) num = 1;
            ans += mp[s[i]] * num;
            i = j - 1;
        }
        out ans endl;
    }

    return 0;
}