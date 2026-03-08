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

int ToMin(const string& s) {
    return (s[0] - '0') * 600 + (s[1] - '0') * 60 + (s[3] - '0') * 10 + (s[4] - '0');
}

int main() {
    Sync;

    int n, m, k; in n >> m >> k;
    vector<int> tram(n), person(m), ans(m, -1);
    string s;
    Fori(n) in s, tram[i] = ToMin(s);
    Fori(m) in s, person[i] = ToMin(s);

    queue<int> q;
    int p = 0;
    Fori(n) {
        while (p < m && person[p] <= tram[i]) q.push(p++);
        int cap = k;
        while (cap-- && !q.empty()) ans[q.front()] = i + 1, q.pop();
    }

    Fori(m) out ans[i] endl;

    return 0;
}