#include <iostream>
#include <cstring>

#define MAX 1000001

using namespace std;

long long DP[MAX];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(DP, 0, sizeof(DP)); 
	
	for (int i = 1; i < MAX; i++)
		for (int j = i; j < MAX; j += i)
			DP[j] += i;
	
	for (int i = 2; i < MAX; i++)
		DP[i] += DP[i - 1];

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
        	cout << DP[n]<<"\n";
	}
}
	