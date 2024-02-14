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

    int P, G, R, O, t; in P >> G >> R >> O >> t;
    int mini(2e9), com(0);

    auto print_func = [&](int p, int g, int r, int o) {
        out "# of PINK is " << p << " # of GREEN is " << g <<
            " # of RED is " << r << " # of ORANGE is " << o endl;

        com++;
        mini = min(mini, p + g + r + o);
        };

    for (int p = 0; ; p++) {
        int pink = p * P;
        if (pink > t) break;

        for (int g = 0; ; g++) {
            int green = g * G;
            if (pink + green > t) break;

            for (int r = 0; ; r++) {
                int red = r * R;
                if (pink + green + red > t) break;

                for (int o = 0; ; o++) {
                    int orange = o * O;
                    int totalPrice = pink + green + red + orange;
                    if (totalPrice > t) break;
                    
                    if (totalPrice == t) print_func(p, g, r, o);
                }
            }
        }
    }
    out "Total combinations is " << com << ".\n";
    out "Minimum number of tickets to print is " << mini << ".";
}