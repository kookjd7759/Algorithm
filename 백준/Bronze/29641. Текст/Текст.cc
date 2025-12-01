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
    int k;
    in k;
    string dummy;
    getline(cin, dummy);
    string text;
    getline(cin, text);

    vector<string> words;
    string cur;
    for (char c : text) {
        if (c == ' ') {
            if (!cur.empty()) {
                words.push_back(cur);
                cur.clear();
            }
        } else {
            cur.push_back(c);
        }
    }
    if (!cur.empty()) words.push_back(cur);

    if (words.empty()) return 0;

    string line = words[0];
    int len = (int)words[0].size();

    for (size_t i = 1; i < words.size(); ++i) {
        int wlen = (int)words[i].size();
        if (len + 1 + wlen <= k) {
            line.push_back(' ');
            line += words[i];
            len += 1 + wlen;
        } else {
            out line << "\n";
            line = words[i];
            len = wlen;
        }
    }
    out line;
}
