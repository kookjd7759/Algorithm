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

    int guess;
    int low = 1, high = 10;

    while (true) {
        in guess;
        if (guess == 0) break;

        string w1, w2;
        in w1 >> w2;
        string resp = w1 + " " + w2;

        if (resp == "too high") {
            if (guess - 1 < high) high = guess - 1;
        } else if (resp == "too low") {
            if (guess + 1 > low) low = guess + 1;
        } else { // right on
            if (guess >= low && guess <= high) {
                out "Stan may be honest" endl;
            } else {
                out "Stan is dishonest" endl;
            }
            low = 1;
            high = 10;
        }
    }

    return 0;
}
