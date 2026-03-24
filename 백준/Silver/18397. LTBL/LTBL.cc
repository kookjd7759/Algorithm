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

struct Node {
    string name;
    int p = 0, w = 0, d = 0, l = 0, gs = 0, gr = 0;
};

int main() {
    Sync;

    int T; in T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Fori(T) {
        int M; in M;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        map<string, int> mp;
        vector<Node> v;

        auto getId = [&](const string &s) {
            auto it = mp.find(s);
            if (it != mp.end()) return it->second;
            int id = v.size();
            mp[s] = id;
            Node t; t.name = s;
            v.push_back(t);
            return id;
        };

        Forj(M) {
            string s; getline(cin, s);

            int lb = s.find('['), rb = s.find(']');
            string a = s.substr(0, lb - 1);
            string b = s.substr(rb + 2);
            string mid = s.substr(lb + 1, rb - lb - 1);

            stringstream ss(mid);
            int x, y; char dash;
            ss >> x >> dash >> y;

            int ia = getId(a), ib = getId(b);

            v[ia].gs += x; v[ia].gr += y;
            v[ib].gs += y; v[ib].gr += x;

            if (x > y) v[ia].w++, v[ia].p += 3, v[ib].l++;
            else if (x < y) v[ib].w++, v[ib].p += 3, v[ia].l++;
            else v[ia].d++, v[ib].d++, v[ia].p++, v[ib].p++;
        }

        sort(v.begin(), v.end(), [&](const Node &a, const Node &b) {
            if (a.p != b.p) return a.p > b.p;
            if (a.w != b.w) return a.w > b.w;
            if (a.d != b.d) return a.d > b.d;
            if (a.l != b.l) return a.l < b.l;
            if (a.gs != b.gs) return a.gs > b.gs;
            if (a.gr != b.gr) return a.gr < b.gr;
            return a.name < b.name;
        });

        for (auto &x : v) out x.name << "," << x.p << "," << x.w << "," << x.d << "," << x.l << "," << x.gs << "," << x.gr endl;
        if (i + 1 < T) ent;
    }

    return 0;
}