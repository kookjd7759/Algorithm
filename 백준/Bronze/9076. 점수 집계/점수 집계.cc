#include <iostream>
#include <algorithm>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define For(x) for (int i = 0; i < x; i++)

using namespace std;

int main() {
	Sync;
	int arr[5], t; in t;
	while (t--) {
		For(5) in arr[i];
		sort(arr, arr + 5);
		arr[3] - arr[1] >= 4 ? out "KIN" endl : out arr[1] + arr[2] + arr[3] endl;
	}
}