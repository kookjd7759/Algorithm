#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;
	int arr[21];
	for (int i = 0; i <= 20; i++) arr[i] = i;

	for (int i = 0; i < 10; i++) {
		int a, b; cin >> a >> b;
		int temparr[21];
		for (int i = 0; i <= b - a; i++)
			temparr[a + i] = arr[b - i];
		for (int i = a; i <= b; i++)
			arr[i] = temparr[i];
	}

	for (int i = 1; i <= 20; i++)
		cout << arr[i] << " ";
}