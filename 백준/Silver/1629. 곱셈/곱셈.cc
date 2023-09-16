#include <iostream>

#define ll long long

using namespace std;

ll my_pow(ll a, ll b, ll c) {
    if (b == 1) return a % c;
    ll ret = my_pow(a, b / 2, c);
    ret = (ret * ret) % c;
    if (b % 2 == 0) return ret;
    else return ret * a % c;
}

int main() {
    ll a, b, c; cin >> a >> b >> c;
    cout << my_pow(a, b, c);
}