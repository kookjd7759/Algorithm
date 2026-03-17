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

string cardName(int x) {
    vector<string> val = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    vector<string> suit = {"Clubs", "Diamonds", "Hearts", "Spades"};
    --x;
    return val[x % 13] + " of " + suit[x / 13];
}

int main() {
    Sync;

    int n; in n;
    vector<vector<int>> sh(n + 1, vector<int>(53));
    For1i(n) For1j(52) in sh[i][j];

    vector<int> deck(53), nxt(53);
    For1i(52) deck[i] = i;

    int k;
    while (in k) {
        For1i(52) nxt[i] = deck[sh[k][i]];
        deck = nxt;
        For1i(52) out cardName(deck[i]) << "\n";
        ent;
    }

    return 0;
}