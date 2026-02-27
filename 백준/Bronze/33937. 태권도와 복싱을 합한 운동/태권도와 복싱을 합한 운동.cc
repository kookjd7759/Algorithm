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

static inline bool vowel(char c) { return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'; }

static inline string firstSyl(const string& s) {
    int n = (int)s.size(), v = -1;
    for (int i = 0; i < n; ++i) if (vowel(s[i])) { v = i; break; }
    if (v == -1) return "";
    for (int i = v + 1; i < n; ++i) if (!vowel(s[i])) return s.substr(0, i);
    return "";
}

int main() {
    Sync;

    string A, B; in A; in B;
    string a = firstSyl(A), b = firstSyl(B);
    if (a.empty() || b.empty()) { out "no such exercise" endl; return 0; }
    out a + b endl;

    return 0;
}