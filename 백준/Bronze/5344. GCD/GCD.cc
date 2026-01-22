#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    Sync;

    int n;
    cin >> n;

    while (n--) {
        long long a, b;
        cin >> a >> b;
        cout << gcd(a, b) << '\n';
    }

    return 0;
}
