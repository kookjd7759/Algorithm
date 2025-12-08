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

    int T;
    in T;

    Fori(T) {
        string A, B;
        in A >> B;

        string RA = A, RB = B;
        reverse(RA.begin(), RA.end());
        reverse(RB.begin(), RB.end());

        int lenA = (int)RA.size();
        int lenB = (int)RB.size();
        int MinLen = min(lenA, lenB);

        string wrong = "";

        for (int pos = 0; pos < MinLen; ++pos) {
            int da = RA[pos] - '0';
            int db = RB[pos] - '0';
            int prod = da * db;
            string s = to_string(prod);
            wrong = s + wrong;
        }

        if (lenA > lenB) {
            for (int pos = MinLen; pos < lenA; ++pos) {
                string s(1, RA[pos]);
                wrong = s + wrong;
            }
        } else if (lenB > lenA) {
            for (int pos = MinLen; pos < lenB; ++pos) {
                string s(1, RB[pos]);
                wrong = s + wrong;
            }
        }

        ll wrongVal = stoll(wrong);
        ll normalVal = stoll(A) * stoll(B);

        if (wrongVal == normalVal) out 1 endl;
        else out 0 endl;
    }

    return 0;
}
