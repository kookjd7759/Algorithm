#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

long long reverseBinary(long long n) {
    string s;
    while (n > 0) s.push_back(char('0' + (n & 1))), n >>= 1;
    long long r = 0;
    for (char c : s) r = (r << 1) + (c - '0');
    return r;
}

int main() {
    Sync;

    long long n; cin >> n;
    int cnt = 0;

    while (n > 0) n = reverseBinary(n) - 1, cnt++;

    cout << cnt;
    return 0;
}
