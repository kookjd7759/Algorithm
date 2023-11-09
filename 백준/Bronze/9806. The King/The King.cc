#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
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
#define Roop(x) while(x--) 

using namespace std;

int main() {
	Sync;

    int n, e; in n >> e;

    vector<int> vec_p, vec_n;
    Fori(n) {
        int a; in a;
        if (a > 0) vec_p.push_back(a);
        else vec_n.push_back(a);
    }

    sort(vec_p.rbegin(), vec_p.rend());
    sort(vec_n.begin(), vec_n.end(), [](const int& a, const int& b) { return abs(a) > abs(b); });

    int maxi(0);
    for (const auto& a : vec_p) maxi += pow(a, e);
    if (e % 2 == 0) for (const auto& a : vec_n) maxi += pow(a, e);

    out maxi endl;
}