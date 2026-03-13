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

string Add(const string &a, const string &b) {
    string r; int i = a.size() - 1, j = b.size() - 1, c = 0;
    while (i >= 0 || j >= 0 || c) {
        int s = c;
        if (i >= 0) s += a[i--] - '0';
        if (j >= 0) s += b[j--] - '0';
        r.push_back(char('0' + s % 10));
        c = s / 10;
    }
    reverse(r.begin(), r.end());
    return r;
}

string Mul(const string &a, int b) {
    if (b == 0) return "0";
    string r; int c = 0;
    for (int i = a.size() - 1; i >= 0; --i) {
        int v = (a[i] - '0') * b + c;
        r.push_back(char('0' + v % 10));
        c = v / 10;
    }
    while (c) r.push_back(char('0' + c % 10)), c /= 10;
    while (r.size() > 1 && r.back() == '0') r.pop_back();
    reverse(r.begin(), r.end());
    return r;
}

int main() {
    Sync;

    int n; in n;
    string f = "0";
    For1i(n) f = Add(to_string(i), Mul(f, i));
    out f endl;

    return 0;
}