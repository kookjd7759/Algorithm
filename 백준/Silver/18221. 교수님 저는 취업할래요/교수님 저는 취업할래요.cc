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

struct Point {
    int x, y;
};

int main() {
    Sync;

    int n; in n;
    Point sang, prof;
    vector<Point> friends;
    Fori(n) Forj(n) {
        int a; in a;
        if (a == 5) prof.x = i, prof.y = j;
        else if (a == 2) sang.x = i, sang.y = j;
        else if (a == 1) {
            Point p;
            p.x = i, p.y = j;
            friends.push_back(p);
        }
    }

    double distance = sqrt(pow(sang.x - prof.x, 2) + pow(sang.y - prof.y, 2));
    if (distance < 5.0) out 0;
    else {
        int cnt(0);
        int l = min(sang.y, prof.y);
        int r = max(sang.y, prof.y);
        int u = min(sang.x, prof.x);
        int d = max(sang.x, prof.x);

        for (const Point point : friends)
            if (u <= point.x && point.x <= d &&
                l <= point.y && point.y <= r)
                cnt++;
        
        out(cnt >= 3 ? 1 : 0);
    }
}
