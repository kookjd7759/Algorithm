#include <iostream>

using namespace std;

int DP_max[3];
int DP_min[3];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n; n--;
	int a, b, c; cin >> a >> b >> c;
	DP_max[0] = a; DP_max[1] = b; DP_max[2] = c;
	DP_min[0] = a; DP_min[1] = b; DP_min[2] = c;
	while (n--) {
		cin >> a >> b >> c;

		int ret_a_max, ret_b_max, ret_c_max;
		ret_a_max = max(DP_max[0], DP_max[1]) + a;
		ret_b_max = max(max(DP_max[0], DP_max[1]), DP_max[2]) + b;
		ret_c_max = max(DP_max[1], DP_max[2]) + c;
		DP_max[0] = ret_a_max; DP_max[1] = ret_b_max; DP_max[2] = ret_c_max;

		int ret_a_min, ret_b_min, ret_c_min;
		ret_a_min = min(DP_min[0], DP_min[1]) + a;
		ret_b_min = min(min(DP_min[0], DP_min[1]), DP_min[2]) + b;
		ret_c_min = min(DP_min[1], DP_min[2]) + c;
		DP_min[0] = ret_a_min; DP_min[1] = ret_b_min; DP_min[2] = ret_c_min;
	}

	cout << max(max(DP_max[0], DP_max[1]), DP_max[2]) << " ";
	cout << min(min(DP_min[0], DP_min[1]), DP_min[2]);
}