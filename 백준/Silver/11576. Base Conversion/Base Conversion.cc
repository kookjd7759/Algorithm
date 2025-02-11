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

    int a, b, n; in a >> b >> n;
    int temp = 0;

    vector<int> vec(n), ans;
    for (int i = n - 1; i >= 0; --i) in vec[i];
    Fori(n) temp += vec[i] * pow(a, i);

    while (temp >= b) {
        ans.push_back(temp % b);
        temp = temp / b;
        if (temp < b) {
            ans.push_back(temp);
        }
    }

    for (int i = ans.size() - 1; i >= 0; i--) out ans[i] << ' ';
}