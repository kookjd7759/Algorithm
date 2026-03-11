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
    Fixed(2);

    string line;
    int prev = 0, speed = 0;
    double dist = 0.0;

    auto conv = [&](string t) {
        return ((t[0]-'0')*10 + (t[1]-'0')) * 3600 + ((t[3]-'0')*10 + (t[4]-'0')) * 60 + ((t[6]-'0')*10 + (t[7]-'0'));
    };

    while(getline(cin, line)) {
        if(line.empty()) continue;
        string t = line.substr(0, 8);
        int cur = conv(t);
        dist += 1.0 * (cur - prev) * speed / 3600.0;
        prev = cur;

        if(line.size() > 8) {
            speed = stoi(line.substr(9));
        } else {
            out t << " " << dist << " km" endl;
        }
    }

    return 0;
}