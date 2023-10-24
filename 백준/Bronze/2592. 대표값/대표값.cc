#include <iostream>
#include <cstring>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int arr[1000];

int main() {
	sync;
	memset(arr, 0, sizeof(arr));

	int sum(0), freq(0), freq_num;
	for (int i = 0; i < 10; i++) {
		int n; cin >> n; 
		sum += n;

		arr[n]++;
		if (arr[n] > freq) {
			freq_num = n;
			freq = arr[n];
		}
	}
	cout << sum / 10 << "\n" << freq_num;
}