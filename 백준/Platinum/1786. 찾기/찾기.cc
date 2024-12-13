#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

void cal_partialMatch(int* F, const string& P) {
    Fori(P.size()) F[i] = 0;
    int i(1), matched(0);
    while (i + matched < P.size()) {
        if (P[i + matched] == P[matched]) {
            ++matched;
            F[i + matched - 1] = matched;
        }
        else {
            if (!matched) ++i;
            else {
                i += matched - F[matched - 1];
                matched = F[matched - 1];
            }
        }
    }
}

int main() {
    Sync;
    
    string T, P; getline(cin, T); getline(cin, P);
    int n = T.size(), m = P.size();
    int* F = new int[m]; cal_partialMatch(F, P);

    int cnt(0); vector<int> vec;
    int i(0), matched(0);
    while (i <= n - m) {
        if (matched < m && T[i + matched] == P[matched]) {
            ++matched;
            if (matched == m) ++cnt, vec.push_back(i + 1);
        }
        else {
            if (matched == 0) ++i;
            else {
                i += matched - F[matched - 1];
                matched = F[matched - 1];
            }
        }
    }
    out cnt endl;
    for (const int& idx : vec) out idx endl;
}