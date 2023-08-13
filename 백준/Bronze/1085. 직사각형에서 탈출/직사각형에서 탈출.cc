#include <iostream>

using namespace std;

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int x, y, w, h; cin >> x >> y >> w >> h;
	int x_, y_;

	if (w - x <= x)
		x_ = w - x;
	else
		x_ = x;

	if (h - y <= y)
		y_ = h - y;
	else
		y_ = y;

	if (x_ != y_)
		x_ > y_ ? cout << y_ : cout << x_;
	else
		cout << x_;

	return 0;
}