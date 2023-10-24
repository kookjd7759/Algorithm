#include <iostream>
#include <cstring>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

bool arr[1000];

int main() {
	sync;
	memset(arr, false, sizeof(arr));

	int n; cin >> n;
	int ret(0);
	while (n--) {
		int a; cin >> a;
		if (arr[a]) ret++;
		else arr[a] = true;
	}
	cout << ret;
}