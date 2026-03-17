#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define ll long long

using namespace std;

int main() {
    Sync;

    int N;
    cin >> N;

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        double l = min(x1, x2);
        double r = max(x1, x2);

        if (ceil(l) <= floor(r)) cnt++;
    }

    double x = (double)cnt / N;
    double pi = 2.0 / x;

    Fixed(12);
    cout << pi << '\n';

    return 0;
}