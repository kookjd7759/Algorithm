#include <iostream>
#include <algorithm>
#include <cstring>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >> 
#define out cout << 
#define spc << " " << 
#define ent << "\n"

using namespace std;

int arr[101];

int main() {
	Sync;
	memset(arr, 0, sizeof(arr));

	int t; in t;
	while (t--) {
		int n; in n;
		int maxPrice(0); string max_name;
		while (n--) {
			int Price; string name;
			in Price >> name;
			if (maxPrice < Price) {
				maxPrice = Price;
				max_name = name;
			}
		}
		out max_name ent;
	}
}