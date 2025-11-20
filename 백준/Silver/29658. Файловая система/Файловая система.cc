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

const string spec = "'-!#$%&()@^_{}.~";
const string bad = "\"/\\[]:;=,";

bool valid83char(char c) { return isalpha(c) || isdigit(c) || spec.find(c) != string::npos; }

bool is83(const string& s) {
    int dots = 0;
    Fori((int)s.size()) {
        char c = s[i];
        if (c == '.') {
            ++dots;
            if (dots > 1) return false;
        }
        else if (!valid83char(c)) return false;
    }
    int pos = -1;
    Fori((int)s.size()) if (s[i] == '.') { pos = i; break; }
    if (pos == -1) {
        return (int)s.size() <= 8;
    }
    else {
        int left = pos;
        int right = (int)s.size() - pos - 1;
        return left <= 8 && right <= 3;
    }
}

int main() {
    Sync;

    string s;  getline(cin, s);

    Fori(s.size()) s[i] = toupper(s[i]);

    if (is83(s)) { out s; return 0; }

    {
        string t;
        Fori((int)s.size()) if (s[i] != ' ') t.push_back(s[i]);
        s.swap(t);
    }

    Fori((int)s.size()) {
        if (bad.find(s[i]) != string::npos) s[i] = '_';
    }

    while (!s.empty() && s.back() == '.') s.pop_back();

    int lastDot = -1;
    Fori((int)s.size()) if (s[i] == '.') lastDot = i;
    if (lastDot != -1) {
        string t;
        Fori((int)s.size()) {
            if (s[i] == '.') {
                if (i == lastDot) t.push_back('.');
            }
            else t.push_back(s[i]);
        }
        s.swap(t);
    }

    string X, Y;
    int pos = -1;
    Fori((int)s.size()) if (s[i] == '.') { pos = i; break; }

    if (pos == -1) {
        X = s.substr(0, min(6, (int)s.size()));
        out X << "~1";
    }
    else {
        X = s.substr(0, min(6, pos));
        int rem = (int)s.size() - pos - 1;
        Y = s.substr(pos + 1, min(3, rem));
        out X << "~1";
        if (!Y.empty()) out "." << Y;
    }

    return 0;
}
