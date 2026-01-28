#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int S, M;
    cin >> S >> M;

    int A = 1023;

    if (S <= A) {
        cout << "No thanks";
        return 0;
    }

    int need = S - A;

    if ((need & ~M) == 0) cout << "Thanks";
    else cout << "Impossible";

    return 0;
}
