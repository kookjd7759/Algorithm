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

    string st, ans(""); in st;
    int sp1(0), sp2(1), sp3(2);
    for (int i = 0; i < st.size() - 2; ++i) {
        for (int j = i + 1; j < st.size() - 1; ++j) {
            string front = st.substr(0, i + 1);
            string middle = st.substr(i + 1, j + 1 - (i + 1));
            string back = st.substr(j + 1, st.size() - (j + 1));
            reverse(front.begin(), front.end());
            reverse(middle.begin(), middle.end());
            reverse(back.begin(), back.end());
            string ret = front + middle + back;
            if (ans == "") ans = ret;
            else ans = min(ans, ret);
        }
    }
    out ans;
}