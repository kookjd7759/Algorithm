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

    int n; in n;
    vector<int> s(n), a(n - 1); Fori(n) in s[i]; Fori(n - 1) in a[i];

    int ans = 1, best = -1;

    For1i(201) {
        vector<int> nums = a; nums.push_back(i);
        vector<int> cnt(202, 0);
        Forj(n) if(nums[j] <= 201) cnt[nums[j]]++;

        int winNum = -1, winIdx = -1;
        For1j(201) if(cnt[j] == 1) { winNum = j; break; }
        if(winNum != -1) {
            Fork(n) if(nums[k] == winNum) { winIdx = k; break; }
        }

        vector<int> fin = s;
        if(winIdx != -1) fin[winIdx] += winNum;

        int petya = fin[n - 1], cur = 0;
        Forj(n - 1) if(fin[j] < petya) cur++;

        if(cur > best) best = cur, ans = i;
    }

    out ans endl;

    return 0;
}