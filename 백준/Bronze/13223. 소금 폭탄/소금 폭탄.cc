#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int start(0), end(0), ret(0);
	string st;
	cin >> st;
	start += ((st[0] - 48) * 10 + (st[1] - 48)) * 60 * 60;
	start += ((st[3] - 48) * 10 + (st[4] - 48)) * 60;
	start += ((st[6] - 48) * 10 + (st[7] - 48));

	cin >> st;
	end += ((st[0] - 48) * 10 + (st[1] - 48)) * 60 * 60;
	end += ((st[3] - 48) * 10 + (st[4] - 48)) * 60;
	end += ((st[6] - 48) * 10 + (st[7] - 48));

	if (start > end)
		ret = (24 * 60 * 60) - start + end;
	else if (start < end)
		ret = end - start;

	if (ret == 0) ret = (24 * 60 * 60);

	int h, m, s;
	s = ret % 60; ret /= 60;
	m = ret % 60; ret /= 60;
	h = ret;
	if (h < 10) cout << "0" << h;
	else cout << h;
	cout << ":";
	if (m < 10) cout << "0" << m;
	else cout << m;
	cout << ":";
	if (s < 10) cout << "0" << s;
	else cout << s;
}