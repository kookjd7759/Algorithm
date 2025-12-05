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

    set<char> s; 
    map<char, char> m;
    string vowel("aiyeou"), cons("bkxznhdcwgpvjqtsrlmf");
    Fori(vowel.size()) {
        char c = vowel[i];
        m[c] = vowel[(vowel.size() + i - 3) % vowel.size()];
    }
    Fori(cons.size()) {
        char c = cons[i];
        m[c] = cons[(cons.size() + i - 10) % cons.size()];
    }

    string line;
    while (getline(cin, line)) {
        Fori(line.size()) {
            char c = line[i];
            if (isalpha(c)) {
                if (isupper(c)) {
                    char low = (char)tolower(c);
                    out(char)toupper(m[low]);
                }
                else out m[c];
            }
            else out c;
        }
        ent;
    }
}
