#include <iostream>

using namespace std;

int main() {
	long long v1, j1, v2, j2, v, d, j;
    cin >> v1 >> j1 >> v2 >> j2 >> v >> d >> j;
    cout << (v*j*d)*(v1*j1+v2*j2) << endl;
}