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

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int main() {
    Sync;

    string line; in line;
    stack<char> st;

    for (char c : line) {
        if (isalpha(c)) out c;
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (true) {
                if (st.top() == '(') {
                    st.pop();
                    break;
                }
                out st.top();
                st.pop();
            }
        }
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                if (st.top() == '(') break;
                out st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        out st.top();
        st.pop();
    }
}