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

bool ok(const string &s) {
    vector<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') st.push_back(c);
        else {
            if (st.empty()) return false;
            char t = st.back();
            st.pop_back();
            if (c == ')' && t != '(') return false;
            if (c == ']' && t != '[') return false;
            if (c == '}' && t != '{') return false;
        }
    }
    return st.empty();
}

int main() {
    Sync;

    int N; in N;
    string br = "()[]{}";
    while (N--) {
        string s; in s;
        if (ok(s)) {
            out "YES 0" endl;
            continue;
        }
        bool found = false;
        int pos = -1;
        char ch = 0;
        Fori((int)s.size()) {
            char org = s[i];
            for (char c : br) {
                if (c == org) continue;
                s[i] = c;
                if (ok(s)) {
                    found = true;
                    pos = i + 1;
                    ch = c;
                    break;
                }
            }
            s[i] = org;
            if (found) break;
        }
        if (!found) out "NO" endl;
        else {
            out "YES 1" endl;
            out pos spc ch endl;
        }
    }

    return 0;
}