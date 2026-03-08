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

    int N; in N;
    unordered_map<char,char> mp = {
        {'A','2'},{'B','2'},{'C','2'},
        {'D','3'},{'E','3'},{'F','3'},
        {'G','4'},{'H','4'},{'I','4'},
        {'J','5'},{'K','5'},{'L','5'},
        {'M','6'},{'N','6'},{'O','6'},
        {'P','7'},{'Q','7'},{'R','7'},{'S','7'},
        {'T','8'},{'U','8'},{'V','8'},
        {'W','9'},{'X','9'},{'Y','9'},{'Z','9'}
    };

    string s;
    Fori(N) {
        in s;
        for(char &c : s) {
            char u = toupper(c);
            out mp[u];
        }
        ent;
    }

    return 0;
}