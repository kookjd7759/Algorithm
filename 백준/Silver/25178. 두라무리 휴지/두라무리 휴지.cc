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

bool is_vowel(char c) {
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main() {
    Sync;

    int N;
    in N;
    string s, t;
    in s >> t;

    if (s[0] != t[0] || s[N-1] != t[N-1]) {
        out "NO";
        return 0;
    }

    int cnt[26] = {0};
    Fori(N) {
        ++cnt[s[i]-'a'];
        --cnt[t[i]-'a'];
    }
    Fori(26) {
        if (cnt[i] != 0) {
            out "NO";
            return 0;
        }
    }

    string ns, nt;
    Fori(N) {
        if (!is_vowel(s[i])) ns.push_back(s[i]);
        if (!is_vowel(t[i])) nt.push_back(t[i]);
    }

    if (ns == nt) out "YES";
    else out "NO";

    return 0;
}
