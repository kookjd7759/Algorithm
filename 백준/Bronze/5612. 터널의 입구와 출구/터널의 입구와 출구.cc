#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
	int cur = m, ret(m);
	while (n--) {
		int in, out; cin >> in >> out;
		cur += in; cur -= out;
		if (cur < 0) { ret = 0; break; }
		ret = max(ret, cur);
	}
	cout << ret;
}