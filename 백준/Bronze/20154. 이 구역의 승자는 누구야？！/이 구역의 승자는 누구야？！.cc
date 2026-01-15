#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int eng[26]{ 3, 2, 1, 2, 3, 3, 3, 3, 1, 1, 3, 1, 3, 3, 1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2, 1 };
    int total(0); string line; cin >> line;
    for (int i = 0; i < line.size(); ++i) {
        total += eng[line[i] - 'A'];
    }
    cout << ((total & 1) ? "I'm a winner!" : "You're the winner?");

    return 0;
}
