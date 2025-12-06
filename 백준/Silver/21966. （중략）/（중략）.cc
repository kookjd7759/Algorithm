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

    int N;
    string S;
    in N >> S;

    if (N <= 25) {
        out S;
        return 0;
    }

    int L = 11;
    int R = N - 12;

    int s_start = L;
    int s_end = L;

    int i = L;
    while (i > 0 && S[i - 1] != '.') --i;
    s_start = i;

    i = L;
    while (i < N && S[i] != '.') ++i;
    s_end = i;

    if (R >= s_start && R <= s_end) {
        string res = S.substr(0, 11);
        res += "...";
        res += S.substr(N - 11, 11);
        out res;
    } else {
        string res = S.substr(0, 9);
        res += "......";
        res += S.substr(N - 10, 10);
        out res;
    }

    return 0;
}
