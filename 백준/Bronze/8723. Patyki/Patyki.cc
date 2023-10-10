#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[3], ret(0);
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	if(a[0] == a[1] && a[1] == a[2]) ret += 2;
	if(a[2] * a[2] == a[0] * a[0] + a[1] * a[1]) ret++;
	cout << ret;
}
