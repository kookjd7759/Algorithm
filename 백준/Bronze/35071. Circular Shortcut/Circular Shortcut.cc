#include <iostream>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;
	
    long double d; cin >> d;
    const long double PI = acos(-1.0L);
    long double ans = d * (PI / 2.0L - 1.0L);

    cout.setf(ios::fixed);
    cout.precision(15);
    cout << ans;

	return 0;
}
