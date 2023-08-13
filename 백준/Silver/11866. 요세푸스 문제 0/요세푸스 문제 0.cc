#include <iostream>
#include <deque>

using namespace std;

int main() {
	int N, K; cin >> N >> K;
	deque<int> de;

	for (int i = 1; i <= N; i++)
		de.push_back(i);

	cout << "<";
	while (true) {
		for (int i = 0; i < K - 1; i++) {
			de.push_back(de.front()); de.pop_front();
		}
			

		cout << de.front(); de.pop_front();
		
		if (!de.empty())
			cout << ", ";
		else
			break;
	}
	cout << ">";

	return 0;
}