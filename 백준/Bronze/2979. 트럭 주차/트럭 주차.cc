#include <iostream>
#include <algorithm>
#include <cstring>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >> 
#define out cout << 
#define sp << " " << 

using namespace std;

int arr[101];

int main() {
	Sync;
	memset(arr, 0, sizeof(arr));

	int a, b, c; in a >> b >> c;
	for (int i = 0; i < 3; i++) {
		int s, e; in s >> e;
		for (int j = s; j < e; j++) arr[j]++;
	}

	int ret(0);
	for (int i = 0; i <= 100; i++) {
		if (arr[i] == 1) ret += a * arr[i];
		else if (arr[i] == 2) ret += b * arr[i];
		else if (arr[i] == 3) ret += c * arr[i];
	}
	cout << ret;
}