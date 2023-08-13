#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	short M; cin >> M;
	short N; cin >> N;
	bool Isit;
	
	for (; M <= N; M++) {
		Isit = true;
		if (M == 1)
			Isit = false;
		for (int i = 2; i < M; i++) {
			if (M % i == 0) {
				Isit = false;
				break;
			}
		}

		if (Isit)
			v.push_back(M);
	}
	
	if (v.size() == 0)
		cout << "-1";
	else {
		int size = 0;
		for (int i = 0; i < v.size(); i++) {
			size += v.at(i);
		}

		cout << size << endl << v.at(0);
	}

	return 0;
}