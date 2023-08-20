#include <iostream>

using namespace std;

int n, m, k, total_min = 2000001;
int prefix_sum[2001][2001];

void input(void) {
	cin >> n >> m >> k;

	int i = 0;
	while (++i <= n) {
		int j = 0;
		while (++j <= m) {
			char color;
			cin >> color;
			if (((i + j) % 2 == 0 && color != 'B') || ((i + j) % 2 != 0 && color == 'B'))
				prefix_sum[i][j] = 1;
			prefix_sum[i][j] += prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1];
		}
	}

	return;
}

void find_min(void) {
	int i, j;

	i = k - 1;
	while (++i <= n) {
		j = k - 1;
		while (++j <= m) {
			int count_painting = prefix_sum[i][j] - prefix_sum[i - k][j] - prefix_sum[i][j - k] + prefix_sum[i - k][j - k];
			count_painting = min(k * k - count_painting, count_painting);
			total_min = min(total_min, count_painting);
		}
	}

	return;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	input();
	find_min();
	cout << total_min << '\n';

	return (0);
}



