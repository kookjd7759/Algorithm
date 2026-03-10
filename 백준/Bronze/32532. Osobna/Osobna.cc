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

string Cap(string s) {
    for (char &c : s) c = tolower(c);
    if (!s.empty()) s[0] = toupper(s[0]);
    return s;
}

int main() {
    Sync;

    string a, b, c; in a >> b >> c;
    string oib = a.substr(15, 11);
    string yy = b.substr(0, 2), mm = b.substr(2, 2), dd = b.substr(4, 2);
    int y = stoi(yy);
    string yyyy = (y <= 24 ? "20" : "19") + yy;

    int p = c.find("<<");
    string ime = c.substr(0, p), prezime = c.substr(p + 2);
    while (!prezime.empty() && prezime.back() == '<') prezime.pop_back();

    out "Ime: " << Cap(ime) endl;
    out "Prezime: " << Cap(prezime) endl;
    out "Datum rodjenja: " << dd << "-" << mm << "-" << yyyy endl;
    out "OIB: " << oib endl;

    return 0;
}