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

using namespace std;

int main() {
    Sync;

    int n;
    in n;
    string line;
    getline(cin, line);

    Fori(n) {
        getline(cin, line);
        int freq[26];
        for (int j = 0; j < 26; ++j) freq[j] = 0;

        int len = (int)line.size();
        bool inWord = false;
        for (int p = 0; p <= len; ++p) {
            if (p == len || line[p] == ' ') {
                inWord = false;
            } else if (!inWord) {
                inWord = true;
                int q = p;
                while (q < len && line[q] != ' ') {
                    char c = line[q];
                    if (c >= 'a' && c <= 'z') {
                        ++freq[c - 'a'];
                        break;
                    }
                    ++q;
                }
            }
        }

        int best = 0;
        for (int j = 1; j < 26; ++j)
            if (freq[j] > freq[best]) best = j;

        char ans = char('a' + best);
        out ans endl;
    }

    return 0;
}
