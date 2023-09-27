#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

int N;
ll arr[100000];
ll ans[2];

int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	qsort(arr, N, sizeof(*arr), cmp);

	ll ret(2e10);
	int L = 0, R = N - 1;
	while (L < R) {
		ll sum = arr[L] + arr[R];
		if (abs(sum) < ret) {
			ret = abs(sum);
			ans[0] = arr[L];
			ans[1] = arr[R];
		}
		if (sum < 0) L++;
		else R--;
	}

	for (int i = 0; i < 2; i++)
		cout << ans[i] << " ";
}