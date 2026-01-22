#include <iostream>
#include <string>
#include <cctype>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N;
    cin >> N;

    int t = 1;
    int dir = 1;

    for (int i = 0; i < N; ++i) {
        if (i > 0) {
            t += dir;
            if (t == 13) t = 1;
            if (t == 0) t = 12;
        }

        string S;
        int X;
        cin >> S >> X;

        bool rev = (S == "HOURGLASS");
        bool sync = (t == X);

        if (rev && sync) {
            cout << t << " NO\n";
        } else {
            cout << t << ' ' << (sync ? "YES" : "NO") << '\n';
            if (rev) dir = -dir;
        }
    }

    return 0;
}
