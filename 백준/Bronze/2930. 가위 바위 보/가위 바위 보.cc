#include <bits/stdc++.h>
using namespace std;

int score(char a, char b) {
    if (a == b) return 1;
    // a wins?
    if ((a == 'S' && b == 'P') || (a == 'P' && b == 'R') || (a == 'R' && b == 'S')) return 2;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R; 
    cin >> R;

    string sg;
    cin >> sg;

    int N;
    cin >> N;

    vector<string> fr(N);
    for (int i = 0; i < N; i++) cin >> fr[i];

    int actual = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < N; j++) {
            actual += score(sg[i], fr[j][i]);
        }
    }

    int best = 0;
    for (int i = 0; i < R; i++) {
        int cntS = 0, cntP = 0, cntR = 0;
        for (int j = 0; j < N; j++) {
            if (fr[j][i] == 'S') cntS++;
            else if (fr[j][i] == 'P') cntP++;
            else cntR++;
        }
        int sScore = 2 * cntP + 1 * cntS;
        int pScore = 2 * cntR + 1 * cntP;
        int rScore = 2 * cntS + 1 * cntR;
        best += max({sScore, pScore, rScore});
    }

    cout << actual << "\n" << best << "\n";
    return 0;
}
