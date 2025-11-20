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

    long double P, D, N;
    in P >> D >> N;

    ll Pc = (ll)llround(P * 100.0L);
    ll Dc = (ll)llround(D * 100.0L);

    long double yearlyFactor = 1.0L + N / 100.0L;
    long double yearDiff = yearlyFactor - 1.0L;

    long double monthFactor = powl(yearlyFactor, 1.0L / 12.0L);

    long double powMonth[12];
    powMonth[0] = 1.0L;
    For1i(11) powMonth[i] = powMonth[i - 1] * monthFactor;

    long double sumInterestMonths = 0.0L;
    for (int K = 1; K <= 11; ++K)
        sumInterestMonths += (powMonth[K] - 1.0L);

    long double D_euro = (long double)Dc / 100.0L;
    long double depositInterestPerYearEuro = D_euro * sumInterestMonths;

    ll expenses = 12LL * (Pc - Dc);

    ll S_c = 0;
    int years = 0;

    while (true) {
        years++;

        long double S_euro = (long double)S_c / 100.0L;

        long double interestEuro =
            S_euro * yearDiff + depositInterestPerYearEuro;

        ll I_c = (ll)llround(interestEuro * 100.0L);

        if (I_c >= expenses) {
            out years;
            break;
        }

        S_c += 12LL * Dc + I_c;
    }

    return 0;
}
