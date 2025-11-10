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

string reverse_num(string st) {
    reverse(st.begin(), st.end());
    return st;
}

int main() {
    Sync;

    int n; in n;
    vector<string> nums_st; nums_st.resize(n);
    Fori(n) in nums_st[i];
    Fori(n) reverse(nums_st[i].begin(), nums_st[i].end());

    vector<ll> nums; nums.resize(n);
    Fori(n) nums[i] = stoll(nums_st[i]);

    sort(nums.begin(), nums.end());

    Fori(n) out nums[i] endl;
}
