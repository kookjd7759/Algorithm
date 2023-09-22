#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cout.tie(0);
	int n; cin >> n; n += 2;
	for (int i = 1; i <= n; i++){
		if (i == 1 || i == n) for (int j = 0; j < n; j++)
			cout << "@";
		else for (int j = 1; j <= n; j++)
			if (j == 1 || j == n) cout << "@";
			else cout << " ";
		cout << "\n";
	}
}