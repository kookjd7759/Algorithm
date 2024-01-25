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

    int T; in T;
    For1k(T) {
        out "Test case #" << k << ":\n";
        int n; in n;
        vector<pair<char, char>> vec(n * 2);
        for (int i = 0; i < n * 2; i++) {
            char a, b; in a >> b;
            vec[i].first = a, vec[i].second = b;
            i++;
            vec[i].first = b, vec[i].second = a;
        }

        int q; in q;
        while (q--) {
            string st; in st;
            bool ch = true;
            Fori(st.size()) {
                if (st[i] != st[st.size() - i - 1]) {
                    ch = false;
                    for (auto iter : vec) {
                        if (iter.first == st[i] && iter.second == st[st.size() - i - 1]) {
                            ch = true;
                            break;
                        }
                    }
                }
                if (!ch) break;
            }
            out st spc(ch ? "YES" : "NO") endl;
        }
        if (k < T) ent;
    }
}