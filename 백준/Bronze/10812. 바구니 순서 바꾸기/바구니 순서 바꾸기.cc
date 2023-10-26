#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;
	int arr[101];
	for (int i = 0; i < 101; i++) arr[i] = i;

	int N, M; cin >> N >> M;
	while (M--) {
		int l, r, m; cin >> l >> r >> m;
		int temparr[101];
		int idx = l;
		for (int i = 0; i <= r - m; i++) temparr[idx++] = arr[m + i];
		for (int i = 0; i < m - l; i++) temparr[idx++] = arr[l + i];
		for (int i = l; i <= r; i++) arr[i] = temparr[i];
	}
	for (int i = 1; i <= N; i++)
		cout << arr[i] << " ";
}