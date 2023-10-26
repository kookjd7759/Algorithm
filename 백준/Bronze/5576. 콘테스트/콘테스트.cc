#include <iostream>
#include <algorithm>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >> 
#define out cout << 

using namespace std;

int w[10];
int k[10];

int main() {
	Sync;

	for (int i = 0; i < 10; i++) in w[i]; sort(w, w + 10);
	for (int i = 0; i < 10; i++) in k[i]; sort(k, k + 10);

	out w[9] + w[8] + w[7] << " " << k[9] + k[8] + k[7];
}