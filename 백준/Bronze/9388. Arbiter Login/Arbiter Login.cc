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

string Toggle(string s) {
    for (char &c : s) {
        if ('a' <= c && c <= 'z') c = char(c - 'a' + 'A');
        else if ('A' <= c && c <= 'Z') c = char(c - 'A' + 'a');
    }
    return s;
}

string RemoveNum(string s) {
    string t = "";
    for (char c : s) if (!isdigit(c)) t += c;
    return t;
}

int main() {
    Sync;

    int T; in T;
    For1i(T) {
        string a, b; in a >> b;
        string caps = Toggle(a), num = RemoveNum(a), both = Toggle(num);
        bool hasDigit = 0;
        for (char c : a) if (isdigit(c)) hasDigit = 1;

        out "Case " << i << ": ";
        if (a == b) out "Login successful." endl;
        else if (hasDigit && b == both) out "Wrong password. Please, check your caps lock and num lock keys." endl;
        else if (b == caps) out "Wrong password. Please, check your caps lock key." endl;
        else if (hasDigit && b == num) out "Wrong password. Please, check your num lock key." endl;
        else out "Wrong password." endl;
    }

    return 0;
}