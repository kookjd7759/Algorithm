#include <iostream>
#include <queue>

using namespace std;

bool visited[10001];

inline int D(int num) {
	num *= 2;
	if (num >= 10000)
		num %= 10000;
	return num;
}

inline int S(int num) {
	num == 0 ? num = 9999 : num -= 1;
	return num;
}

inline int L(int num) {
	int p1, p2, p3, p4;
	p1 = num / 1000; num %= 1000;
	p2 = num / 100; num %= 100;
	p3 = num / 10; num %= 10;
	p4 = num;
	num = (p2 * 1000) + (p3 * 100) + (p4 * 10) + p1;
	return num;
}

inline int R(int num) {
	int p1, p2, p3, p4;
	p1 = num / 1000; num %= 1000;
	p2 = num / 100; num %= 100;
	p3 = num / 10; num %= 10;
	p4 = num;
	num = (p4 * 1000) + (p1 * 100) + (p2 * 10) + p3;
	return num;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while (t--) {
		for (int i = 0; i < 10001; i++) visited[i] = false;
		queue<pair<int, string>> que;
		int a, b; cin >> a >> b;
		que.push({ a, "" });
		visited[a] = true;

		while (true) {
			int size = que.size();
			
			while (size--) {
				int num = que.front().first;
				string st = que.front().second;
				que.pop();

				if (num == b) {
					cout << st << "\n";
					size = 0;
					break;
				}

				int new_num;
				string new_st;

				new_num = D(num);
				if (!visited[new_num]) {
					visited[new_num] = true;
					new_st = st + "D";
					que.push({ new_num , new_st });
				}

				new_num = S(num);
				if (!visited[new_num]) {
					visited[new_num] = true;
					new_st = st + "S";
					que.push({ new_num , new_st });
				}

				new_num = L(num);
				if (!visited[new_num]) {
					visited[new_num] = true;
					new_st = st + "L";
					que.push({ new_num , new_st });
				}

				new_num = R(num);
				if (!visited[new_num]) {
					visited[new_num] = true;
					new_st = st + "R";
					que.push({ new_num , new_st });
				}
			}

			if (!size)
				break;
		}
	}
}