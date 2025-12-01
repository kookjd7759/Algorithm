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
    ll N; in N;
    vector<string> base = {
        "baby","sukhwan","tururu","turu",
        "very","cute","tururu","turu",
        "in","bed","tururu","turu",
        "baby","sukhwan"
    };
    ll zero = N - 1;
    ll cycle = zero / 14;
    int pos = (int)(zero % 14) + 1;
    int ru = -1;
    if (pos == 3 || pos == 7 || pos == 11) ru = 2 + (int)cycle;
    else if (pos == 4 || pos == 8 || pos == 12) ru = 1 + (int)cycle;
    if (ru == -1) {
        out base[pos - 1];
    } else {
        if (ru >= 5) {
            out "tu+ru*" << ru;
        } else {
            out "tu";
            Fori(ru) out "ru";
        }
    }
}
