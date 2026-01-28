#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N, L; cin >> N >> L;

    string p;
    if (N == 0) {
        p.push_back('1');
        p.append(L - 1, '0');
    } else if (N == 1) {
        p.append(L, '1');
    } else {
        p.push_back(char('0' + N));
        p.append(L - 1, '1');
    }

    cout << p;
    return 0;
}
