#include <iostream>

using namespace std;

int main(){
	int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
	int sec(0);
	if (a < 0 && b < 0) sec = (b - a) * c;
	else if (a < 0 && b > 0) sec = ((-1 * a) * c) + d + (b * e);
	else if (a > 0 && b > 0) sec = (b - a) * e;
	cout << sec;
}