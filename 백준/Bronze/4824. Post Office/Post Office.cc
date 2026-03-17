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

    while (1) {
        double a[3]; Fori(3) in a[i];
        if (a[0] == 0 && a[1] == 0 && a[2] == 0) break;
        sort(a, a + 3);
        double t = a[0], h = a[1], l = a[2];
        bool mn = l >= 125 && h >= 90 && t >= 0.25;
        bool letter = mn && l <= 290 && h <= 155 && t <= 7;
        bool packet = mn && l <= 380 && h <= 300 && t <= 50 && (l > 290 || h > 155 || t > 7);
        bool parcel = mn && (l > 380 || h > 300 || t > 50) && l + 2 * (h + t) <= 2100;
        if (letter) out "letter" endl;
        else if (packet) out "packet" endl;
        else if (parcel) out "parcel" endl;
        else out "not mailable" endl;
    }

    return 0;
}