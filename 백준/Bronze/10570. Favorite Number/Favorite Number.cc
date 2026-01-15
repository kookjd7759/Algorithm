#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;
	
    int tc; cin >> tc;
	while (tc--) {
		int n, maxi(-1); cin >> n;
		vector<int> vec(1001, 0);
		for (int i = 0; i < n; ++i) {
			int a; cin >> a;
			vec[a]++;
			maxi = max(maxi, vec[a]);
		}
		for (int i = 1; i <= 1001; ++i) {
			if (vec[i] == maxi) {
				cout << i << "\n";
				break;
			}
		}
	}

    return 0;
}
