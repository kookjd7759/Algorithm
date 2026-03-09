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

int ToMin(const string& s){
    return ((s[0] - '0') * 10 + (s[1] - '0')) * 60 + (s[3] - '0') * 10 + (s[4] - '0');
}

int Overlap(int l1, int r1, int l2, int r2){
    return max(0, min(r1, r2) - max(l1, l2));
}

int main() {
    Sync;

    int N;
    while(in N, N){
        ll total = 0, nightTotal = 0;
        bool ok = true;

        Fori(N){
            string sr, ss, st, ft; in sr >> ss >> st >> ft;
            int sunrise = ToMin(sr), sunset = ToMin(ss), start = ToMin(st), finish = ToMin(ft);
            int dur = finish - start;

            if(dur > 120) ok = false;
            total += dur;

            int night = Overlap(start, finish, 0, sunrise) + Overlap(start, finish, sunset, 1440);
            if(night * 2 >= dur) nightTotal += dur;
        }

        if(ok && total >= 3000 && nightTotal >= 600) out "PASS\n";
        else out "NON\n";
    }

    return 0;
}