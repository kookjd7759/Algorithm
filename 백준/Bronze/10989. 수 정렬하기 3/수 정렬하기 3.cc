#include <iostream>

using namespace std;

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	int Arr[10001]{};

	for (int i = 0; i < N; i++) {
		int ans; cin >> ans;
		Arr[ans]++;
	}

	for (int i = 0; i < 10001; i++) {
		if (Arr[i] > 0)
			for (int j = 0; j < Arr[i]; j++)
				cout << i << "\n";
	}

    return 0;
}