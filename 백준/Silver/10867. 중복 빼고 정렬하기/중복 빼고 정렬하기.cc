#include <iostream>

using namespace std;

bool arr[2002];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		n += 1000;
		arr[n] = true;
	}
	
	for (int i = 0; i < 2002; i++)
		if (arr[i])
			cout << i - 1000 << " ";
}