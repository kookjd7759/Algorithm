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
    int N; in N;
    Fori(N) {
        string name, plan, spentStr;
        int used;
        in name >> plan >> used >> spentStr;

        int maxMeals, maxMunch;
        if (plan == "Marble") { maxMeals = 19; maxMunch = 20000; }
        else if (plan == "Marble+") { maxMeals = 19; maxMunch = 35000; }
        else if (plan == "Quartz") { maxMeals = 14; maxMunch = 20000; }
        else { maxMeals = 14; maxMunch = 35000; }

        int dot = spentStr.find('.');
        int spentCents = stoi(spentStr.substr(0, dot)) * 100
            + stoi(spentStr.substr(dot + 1, 2));

        int remainMeals = maxMeals - used;
        int remainCents = maxMunch - spentCents;

        cout << name << " " << remainMeals << " ";
        cout << remainCents / 100 << ".";
        cout << setw(2) << setfill('0') << (remainCents % 100) << " ";

        bool hasMeals = remainMeals > 0;
        bool hasMoney = remainCents > 0;

        if (hasMeals && hasMoney)            cout << "Use meal swipe or munch money\n";
        else if (!hasMeals && hasMoney)      cout << "Use munch money\n";
        else if (hasMeals && !hasMoney)      cout << "Use meal swipe\n";
        else                                 cout << "Go to Downtown Golden!\n";
    }
}
