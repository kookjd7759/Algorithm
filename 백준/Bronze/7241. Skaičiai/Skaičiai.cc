#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    int arr[3]; Fori(3) in arr[i];
    vector<int> vec;
    set<int> s;
    Fori(3) Forj(3) {
        if (i == j) continue;
        Fork(3) {
            if (k == j || k == i) continue;
            s.insert(arr[i] * 100 + arr[j] * 10 + arr[k]);
        }
    }

    int a; in a;
    for (const auto iter : s)
        vec.push_back(iter);
    sort(vec.begin(), vec.end());
    Fori(vec.size()) {
        if (vec[i] == a) {
            out i + 1;
            break;
        }
    }
}