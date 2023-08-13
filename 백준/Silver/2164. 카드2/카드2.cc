#include <iostream>
#include <deque>

using namespace std;

deque<int> de;

int main() {
	int N; cin >> N;

	for (int i = 1; i <= N; i++)
		de.push_back(i);

	for (int i = 0; i < N - 1; i++) {
		de.pop_front();
		de.push_back(de.front());
		de.pop_front();
	}

	cout << de.front();

	return 0;
}