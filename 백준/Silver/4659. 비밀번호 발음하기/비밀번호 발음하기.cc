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

    set<char> s = {'a', 'e', 'i', 'o', 'u'};
    string pass;
    while (true) {
        in pass;
        if (pass == "end") break;

        bool ch1(false), ch2(true), ch3(true);
        bool prev_aeiou = s.count(pass[0]);
        int cnt(0);
        Fori(pass.size()) {
            bool is_aeiou = s.count(pass[i]);
            if (is_aeiou) ch1 = true;
            if (prev_aeiou == is_aeiou) ++cnt;
            else cnt = 1;
            prev_aeiou = is_aeiou;
            if (cnt >= 3) ch2 = false;
            if (i < pass.size() - 1 && pass[i] == pass[i + 1] && pass[i] != 'e' && pass[i] != 'o') ch3 = false;
        }


        out '<' << pass << '>' << " is " << 
            ((ch1 && ch2 && ch3) ? "" : "not ") << "acceptable.\n";
    }
}