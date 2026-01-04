#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;
	
    long long n; int p; cin >> n >> p;
    double loss = (double)n * (double)p * 55.0 / 1000.0;

    cout.setf(ios::fixed);
    cout.precision(10);
    cout << loss;

	return 0;
}
