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

    string s1, s2, s3; in s1 >> s2 >> s3;
    int p1 = 0, p2 = 0, p3 = 0, n1 = s1.size(), n2 = s2.size(), n3 = s3.size(), tot = (n1 + n2 + n3) / 2;
    string ans; ans.reserve(tot);
    while ((int)ans.size() < tot) {
        bool ok1 = p2 < n2 && p3 < n3 && s2[p2] == '1' && s3[p3] == '1';
        bool ok2 = p1 < n1 && p3 < n3 && s1[p1] == '2' && s3[p3] == '2';
        bool ok3 = p1 < n1 && p2 < n2 && s1[p1] == '3' && s2[p2] == '3';
        if (ok1) ans += '1', ++p2, ++p3;
        else if (ok2) ans += '2', ++p1, ++p3;
        else ans += '3', ++p1, ++p2;
    }
    out ans endl;

    return 0;
}