#include <iostream>

using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 

	ll count[1001];
	for (int i = 0; i <= 1000; i++)
		count[i] = 0;

	int N, M; cin >> N >> M;
	ll sum = 0;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		sum += num;
		count[sum % M]++;
	}

	ll result = 0;
	for (int i = 0; i <= 1000; i++)
		result += count[i] * (count[i] - 1) / 2;

	cout << result + count[0];
}