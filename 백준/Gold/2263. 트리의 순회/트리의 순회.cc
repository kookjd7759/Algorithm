#include <iostream>
using namespace std;

int n;
int in[100001];
int post[100001];

void preOrder(int s1, int e1, int s2, int e2) {
	if (s1 > e1 || s2 > e2) return;
	int root = post[e2];

	int index = -1;
	for (int i = s1; i <= e1; i++) {
		if (in[i] == root) {
			index = i;
			break;
		}
	}
	int L_cnt = index - s1;

	cout << root << " ";
	preOrder(s1, index - 1, s2, s2 + L_cnt - 1);
	preOrder(index + 1, e1, s2 + L_cnt, e2 - 1);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> in[i];
	for (int i = 1; i <= n; i++) cin >> post[i];

	preOrder(1, n, 1, n);
}