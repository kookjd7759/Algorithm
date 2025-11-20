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

vector<string> tok;
int idxp;

long double parseFactor() {
    long double v = stold(tok[idxp++]);
    return v;
}

long double parseTerm() {
    long double v = parseFactor();
    while (idxp < (int)tok.size() && (tok[idxp] == "+" || tok[idxp] == "-")) {
        string op = tok[idxp++];
        long double r = parseFactor();
        if (op == "+") v += r;
        else v -= r;
    }
    return v;
}

long double parseExpr() {
    long double v = parseTerm();
    while (idxp < (int)tok.size() && (tok[idxp] == "*" || tok[idxp] == "/")) {
        string op = tok[idxp++];
        long double r = parseTerm();
        if (op == "*") v *= r;
        else v /= r;
    }
    return v;
}

int main() {
    Sync;

    string line;
    getline(cin, line);
    while (line.size() == 0 && !cin.eof()) getline(cin, line);
    stringstream ss(line);
    string t;
    while (ss >> t) tok.push_back(t);
    idxp = 0;
    long double res = parseExpr();
    ll ans = (ll)floorl(res);
    out ans;
    return 0;
}
