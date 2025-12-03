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

    int p, n; in p >> n;
    int* base_score = new int[p];
    Fori(p) in base_score[i];

    pair<int, int>* student = new pair<int, int>[n];
    Fori(n) {
        int name; in name;
        int score(0);
        Forj(p) {
            char c; in c;
            if (c == 'O') score += base_score[j];
        }
        student[i] = make_pair(score, name);
    }

    sort(student, student + n, [&](const pair<int, int>& a, const pair<int, int>& b) -> bool {
        if (a.first == b.first) return a.second < b.second;
        return a.first > b.first;
        });

    out student[0].second spc student[0].first;
}
