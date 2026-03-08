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

string Add(string a, string b) {
    if (a.size() < b.size()) swap(a, b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string c = "";
    int carry = 0;
    Fori((int)a.size()) {
        int x = a[i] - '0', y = i < (int)b.size() ? b[i] - '0' : 0;
        int s = x + y + carry;
        c += char('0' + s % 10);
        carry = s / 10;
    }
    if (carry) c += char('0' + carry);
    while (c.size() > 1 && c.back() == '0') c.pop_back();
    reverse(c.begin(), c.end());
    return c;
}

int main() {
    Sync;

    int N; string s; in N >> s;
    vector<int> cnt(10, 0);
    for (char c : s) cnt[c - '0']++;

    string a = "", b = "";
    bool turn = 0;
    Fori(10) while (cnt[i]--) {
        if (!turn) a += char('0' + i);
        else b += char('0' + i);
        turn = !turn;
    }

    out Add(a, b) endl;

    return 0;
}