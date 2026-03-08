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

vector<int> ToVec(const string& s) {
    vector<int> v(s.size());
    Fori((int)s.size()) v[i] = s[s.size() - 1 - i] - '0';
    return v;
}

int Cmp(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return a.size() < b.size() ? -1 : 1;
    for (int i = (int)a.size() - 1; i >= 0; --i) if (a[i] != b[i]) return a[i] < b[i] ? -1 : 1;
    return 0;
}

vector<int> Add(const vector<int>& a, const vector<int>& b, int base) {
    vector<int> c;
    int carry = 0, n = max(a.size(), b.size());
    Fori(n) {
        int x = i < (int)a.size() ? a[i] : 0;
        int y = i < (int)b.size() ? b[i] : 0;
        int s = x + y + carry;
        c.push_back(s % base);
        carry = s / base;
    }
    while (carry) c.push_back(carry % base), carry /= base;
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    return c;
}

vector<int> Sub(const vector<int>& a, const vector<int>& b, int base) {
    vector<int> c = a;
    int borrow = 0;
    Fori((int)c.size()) {
        int y = (i < (int)b.size() ? b[i] : 0) + borrow;
        if (c[i] < y) c[i] += base, borrow = 1;
        else borrow = 0;
        c[i] -= y;
    }
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    return c;
}

vector<int> Mul(const vector<int>& a, const vector<int>& b, int base) {
    vector<int> c(a.size() + b.size() + 5, 0);
    Fori((int)a.size()) Forj((int)b.size()) c[i + j] += a[i] * b[j];
    Fori((int)c.size() - 1) c[i + 1] += c[i] / base, c[i] %= base;
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    return c;
}

bool Valid(const string& s, int base) {
    for (char ch : s) if (ch - '0' >= base) return false;
    return true;
}

int main() {
    Sync;

    string A, op, B, eq, C; in A >> op >> B >> eq >> C;
    vector<int> ans;

    for (int base = 2; base <= 10; ++base) {
        if (!Valid(A, base) || !Valid(B, base) || !Valid(C, base)) continue;

        vector<int> a = ToVec(A), b = ToVec(B), c = ToVec(C), res;
        if (op[0] == '+') res = Add(a, b, base);
        else if (op[0] == '-') {
            if (Cmp(a, b) < 0) continue;
            res = Sub(a, b, base);
        } else res = Mul(a, b, base);

        if (Cmp(res, c) == 0) ans.push_back(base);
    }

    out ans.size() endl;
    if (!ans.empty()) {
        Fori((int)ans.size()) out ans[i] << (i + 1 == (int)ans.size() ? '\n' : ' ');
    }

    return 0;
}