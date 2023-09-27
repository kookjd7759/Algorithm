#include <iostream>

using namespace std;

int getScore(string st_1, string st_2, string st_3) {
	auto func = [&](string a, string b) -> int {
		int sum(0);
		for (int k = 0; k < 4; k++)
			if (a[k] != b[k])
				sum += 1;
		return sum;
		};
	return func(st_1, st_2) + func(st_1, st_3) + func(st_2, st_3);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string* mbti = new string[n];
		for (int i = 0; i < n; i++)
			cin >> mbti[i];

		int ret(0);
		string mbti_ret[3];
		if (n > 32)
			ret = 0;
		else {
			int min_ = 128;
			for (int i = 0; i < n - 2; i++)
				for (int j = i + 1; j < n - 1; j++)
					for (int k = j + 1; k < n; k++) {
						if (min_ > getScore(mbti[i], mbti[j], mbti[k])) {
							mbti_ret[0] = mbti[i];
							mbti_ret[1] = mbti[j];
							mbti_ret[2] = mbti[k];
							min_ = getScore(mbti[i], mbti[j], mbti[k]);
						}
						// min_ = min(min_, getScore(mbti[i], mbti[j], mbti[k]));
					}
			ret = min_;
		}
		cout << ret << "\n";
	}
}