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

bool ok_allowed(const string& attempt, const string& real_pwd) {
    if (attempt.size() != real_pwd.size()) return false;
    int diff = 0;
    Fori((int)attempt.size()) if (attempt[i] != real_pwd[i]) ++diff;
    return diff == 0 || diff == 1;
}

bool ok_denied(const string& attempt, const string& real_pwd) {
    if (attempt.size() != real_pwd.size()) return true;
    int diff = 0;
    Fori((int)attempt.size()) if (attempt[i] != real_pwd[i]) ++diff;
    return !(diff == 0 || diff == 1);
}

int main() {
    Sync;
    int n;
    in n;
    string real_pwd;
    in real_pwd;
    bool bad = false;
    Fori(n) {
        string attempt, res;
        in attempt >> res;
        if (res == "ALLOWED") {
            if (!ok_allowed(attempt, real_pwd)) bad = true;
        } else {
            if (!ok_denied(attempt, real_pwd)) bad = true;
        }
    }
    if (bad) out "INTEGRITY OVERFLOW";
    else out "SYSTEM SECURE";
}
