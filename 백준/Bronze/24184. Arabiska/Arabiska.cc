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

bool Vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
    Sync;

    int N; in N;
    vector<string> a(N);
    Fori(N) in a[i];

    for (string &s : a) {
        string t = "";
        int m = s.size();
        Forj(m) {
            if (Vowel(s[j]) && j + 2 < m && !Vowel(s[j + 1]) && !Vowel(s[j + 2])) continue;
            t += s[j];
        }
        reverse(t.begin(), t.end());
        s = t;
    }

    for (int i = N - 1; i >= 0; --i) {
        out a[i];
        if (i) out " ";
    }
    out "\n";

    return 0;
}