#include "grader.h"
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

void play() {
    vector<vector<int>> pos(25);
    for(int i = 1; i <= 50; i += 2) {
        char a = faceup(i);
        char b = faceup(i + 1);
        pos[a - 'A'].push_back(i);
        pos[b - 'A'].push_back(i + 1);
    }
    Fori(25) {
        faceup(pos[i][0]);
        faceup(pos[i][1]);
    }
}