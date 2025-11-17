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

    string line;
    int n; in n;
    getline(cin, line);
    Fori(n) {
        getline(cin, line);
        int eng[26]; memset(eng, 0, sizeof(eng));
        Forj(line.size()) if (isalpha(line[j])) ++eng[tolower(line[j]) - 'a'];
        int ans(2e9);
        Forj(26) ans = min(ans, eng[j]);

        out "Case " << i + 1 << ": ";
        if (ans == 0) out "Not a pangram\n";
        else if (ans == 1) out "Pangram!\n";
        else if (ans == 2) out "Double pangram!!\n";
        else if (ans == 3) out "Triple pangram!!!\n";
    }
}