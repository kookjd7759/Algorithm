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

struct Quest {
    int lev0, lev1, lev2;

    Quest(){}

    void init(int lev0, int lev1, int lev2){ this->lev0 = lev0; this->lev1 = lev1; this->lev2 = lev2; }

    int get(int user_lev) {
        if (user_lev < lev0) return 0;
        else if (lev0 <= user_lev && user_lev < lev1) return 500;
        else if (lev1 <= user_lev && user_lev < lev2) return 300;
        else if (lev2 <= user_lev) return 100;
    }
};

int main() {
    Sync;

    Quest quests_1[6], quests_2[7];
    quests_1[0].init(200, 210, 220);
    quests_1[1].init(210, 220, 225);
    quests_1[2].init(220, 225, 230);
    quests_1[3].init(225, 230, 235);
    quests_1[4].init(230, 235, 245);
    quests_1[5].init(235, 245, 250);

    quests_2[0].init(260, 265, 270);
    quests_2[1].init(265, 270, 275);
    quests_2[2].init(270, 275, 280);
    quests_2[3].init(275, 280, 285);
    quests_2[4].init(280, 285, 290);
    quests_2[5].init(285, 290, 295);
    quests_2[6].init(290, 295, 300);

    int level; in level;
    Fori(6) out quests_1[i].get(level) << ' '; ent;
    Fori(7) out quests_2[i].get(level) << ' ';
}