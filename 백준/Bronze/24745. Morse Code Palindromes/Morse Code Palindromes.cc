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

    vector<string> morse = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--..",
        "-----",".----","..---","...--","....-",".....","-....","--...","---..","----."
    };

    string s, t = ""; getline(cin, s);
    for (char c : s) {
        if ('a' <= c && c <= 'z') t += morse[c - 'a'];
        else if ('A' <= c && c <= 'Z') t += morse[c - 'A'];
        else if ('0' <= c && c <= '9') t += morse[26 + c - '0'];
    }

    if (t.empty()) {
        out "NO" endl;
        return 0;
    }

    string r = t; reverse(r.begin(), r.end());
    out (t == r ? "YES" : "NO") endl;

    return 0;
}