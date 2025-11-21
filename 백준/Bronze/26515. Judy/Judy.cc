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
        stringstream ss(line);
        string token;
        string w;

        while (ss >> token) {
            int v = stoi(token);
            char c;
            if ((v >= 65 && v <= 90) || (v >= 97 && v <= 122)) {
                c = tolower((char)v);
            } else {
                c = '-';
            }
            w.push_back(c);
        }

        if (!w.empty()) {
            string res;
            if (w.size() == 1) {
                res = w + "ay";
            } else {
                res = w.substr(1) + w[0] + "ay";
            }
            out res endl;
        } else {
            out "ay" endl;
        }
    }

    return 0;
}
