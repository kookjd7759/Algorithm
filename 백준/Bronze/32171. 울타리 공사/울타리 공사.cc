#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int main() {
    Sync;

    pair<int, int> LD{ 0, 0 }, RU{ 0, 0 };
    auto cost = [&]() -> void {
        cout << (RU.first - LD.first) * 2 + (RU.second - LD.second) * 2 << "\n";
    };
    int n; cin >> n;
    cin >> LD.first >> LD.second;
    cin >> RU.first >> RU.second;
    cost();
    Fori(n - 1) {
        pair<int, int> LD_new{ 0, 0 }, RU_new{ 0, 0 };
        cin >> LD_new.first >> LD_new.second;
        cin >> RU_new.first >> RU_new.second;
        LD.first = min(LD.first, LD_new.first); 
        LD.second = min(LD.second, LD_new.second);
        RU.first = max(RU.first, RU_new.first);
        RU.second = max(RU.second, RU_new.second);
        cost();
    }
}