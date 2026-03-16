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

    vector<pair<char,string>> v = {
        {'A',".-"}, {'B',"-..."}, {'C',"-.-."}, {'D',"-.."}, {'E',"."}, {'F',"..-."},
        {'G',"--."}, {'H',"...."}, {'I',".."}, {'J',".---"}, {'K',"-.-"}, {'L',".-.."},
        {'M',"--"}, {'N',"-."}, {'O',"---"}, {'P',".--."}, {'Q',"--.-"}, {'R',".-."},
        {'S',"..."}, {'T',"-"}, {'U',"..-"}, {'V',"...-"}, {'W',".--"}, {'X',"-..-"},
        {'Y',"-.--"}, {'Z',"--.."}, {'_',"..--"}, {'.',"---."}, {',',".-.-"}, {'?',"----"}
    };
    unordered_map<char,string> enc;
    unordered_map<string,char> dec;
    for (auto &p : v) enc[p.first] = p.second, dec[p.second] = p.first;

    int n; in n;
    For1i(n) {
        string s; in s;
        string morse, len;
        for (char c : s) {
            morse += enc[c];
            len += char('0' + (int)enc[c].size());
        }
        reverse(len.begin(), len.end());
        string ans;
        int pos = 0;
        for (char c : len) {
            int l = c - '0';
            ans += dec[morse.substr(pos, l)];
            pos += l;
        }
        out i << ": " << ans endl;
    }

    return 0;
}