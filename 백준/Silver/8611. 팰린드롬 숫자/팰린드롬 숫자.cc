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

pair<string, int> divmod_str(const string& s, int b) {
    string q;
    int rem = 0;
    for (char c : s) {
        int cur = rem * 10 + (c - '0');
        int d = cur / b;
        rem = cur % b;
        if (!q.empty() || d) q.push_back(char('0' + d));
    }
    if (q.empty()) q = "0";
    return {q, rem};
}

string to_base(string s, int b) {
    if (s == "0") return "0";
    string r;
    while (s != "0") {
        auto [q, rem] = divmod_str(s, b);
        r.push_back(char('0' + rem));
        s = q;
    }
    reverse(r.begin(), r.end());
    return r;
}

bool is_pal(const string& s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) if (s[l++] != s[r--]) return false;
    return true;
}

int main() {
    Sync;
    string n; in n;
    bool ok = false;
    for (int b = 2; b <= 10; ++b) {
        string s = to_base(n, b);
        if (is_pal(s)) ok = true, out b spc s endl;
    }
    if (!ok) out "NIE";
    return 0;
}