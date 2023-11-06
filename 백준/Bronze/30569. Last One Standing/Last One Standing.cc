#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
#define Roop(x) while(x--) 

using namespace std;

enum Unit {
    Health,
    Deal,
    Time,
    Load
};

int main() {
    Sync;
    
    int p1[4], p2[4]; p1[3] = 0, p2[3] = 0;
    Fori(3) in p1[i];
    Fori(3) in p2[i];

    auto state = [&]() -> void {
        out "P1 : " spc p1[Health] endl;
        out "P2 : " spc p2[Health] endl;
        };

    while (p1[Health] > 0 && p2[Health] > 0) {
        if (p1[Load] <= 0) {
            p2[Health] -= p1[Deal];
            p1[Load] = p1[Time];
        }

        if (p2[Load] == 0) {
            p1[Health] -= p2[Deal];
            p2[Load] = p2[Time];
        }

        p1[Load]--;
        p2[Load]--;
    }

    bool p1Die = p1[Health] <= 0;
    bool p2Die = p2[Health] <= 0;
    if (p1Die && p2Die) out "draw";
    else p1Die ? out "player two" : out "player one";
}