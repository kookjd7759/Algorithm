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
    int n;
    int x, y;
    in n >> x >> y;
    vector<int> t(n);
    Fori(n) {
        string s;
        in s;
        int hh = (s[0] - '0') * 10 + (s[1] - '0');
        int mm = (s[3] - '0') * 10 + (s[4] - '0');
        t[i] = hh * 60 + mm;
    }
    long double charge = 1.0L;
    bool from_ac = true;
    int prev_t = 0;
    int end_t = 23 * 60 + 59;
    Fori(n) {
        int cur_t = t[i];
        int dt = cur_t - prev_t;
        if (dt > 0) {
            if (from_ac) {
                if (charge < 1.0L) {
                    long double need = (1.0L - charge) * y;
                    if ((long double)dt <= need + 1e-18L) {
                        charge += (long double)dt / (long double)y;
                    } else {
                        charge = 1.0L;
                    }
                }
            } else {
                if (charge > 0.0L) {
                    long double need = charge * x;
                    if ((long double)dt <= need + 1e-18L) {
                        charge -= (long double)dt / (long double)x;
                    } else {
                        charge = 0.0L;
                    }
                }
            }
        }
        from_ac = !from_ac;
        prev_t = cur_t;
    }
    int dt = end_t - prev_t;
    if (dt > 0) {
        if (from_ac) {
            if (charge < 1.0L) {
                long double need = (1.0L - charge) * y;
                if ((long double)dt <= need + 1e-18L) {
                    charge += (long double)dt / (long double)y;
                } else {
                    charge = 1.0L;
                }
            }
        } else {
            if (charge > 0.0L) {
                long double need = charge * x;
                if ((long double)dt <= need + 1e-18L) {
                    charge -= (long double)dt / (long double)x;
                } else {
                    charge = 0.0L;
                }
            }
        }
    }
    if (charge < 0.0L) charge = 0.0L;
    if (charge > 1.0L) charge = 1.0L;
    Fixed(3);
    out (charge * 100.0L);
}
