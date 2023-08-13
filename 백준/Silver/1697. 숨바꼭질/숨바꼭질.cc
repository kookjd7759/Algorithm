#include <iostream>
#include <queue>

using namespace std;

int N, K;
bool visit[100001]{};

void Input() {
	cin >> N >> K;
}

int Function() {
	int Result = 0;
	queue<int> que;
	que.push(N);

	while (true) {
		int Size = que.size();

		for (int i = 0; i < Size; i++) {
			int num = que.front();
			que.pop();

			if (num == K)
				return Result;

			if (num > 0 && visit[num - 1] == false) {
				que.push(num - 1);
				visit[num - 1] = true;
			}
			
			if (num < 100000 && visit[num + 1] == false) {
				que.push(num + 1);
				visit[num + 1] = true;
			}
			
			if (num * 2 <= 100000 && visit[num * 2] == false) {
				que.push(num * 2);
				visit[num * 2] = true;
			}
		}

		Result++;
	}
}

int main() {
	Input();
	cout << Function();
}