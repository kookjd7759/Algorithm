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

bool vow(char c){
    c = tolower((unsigned char)c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main() {
    Sync;

    int n; in n;
    string s; in s;

    vector<int> pre(n + 1, 0), suf(n + 2, 0);
    For1i(n) pre[i] = pre[i - 1] + vow(s[i - 1]);
    for(int i = n; i >= 1; --i) suf[i] = suf[i + 1] + vow(s[i - 1]);

    int ans = 0;
    For1i(n){
        int a = pre[i];
        int b = suf[n - i + 1];
        if(a && a == b) ans++;
    }

    out ans;
    return 0;
}