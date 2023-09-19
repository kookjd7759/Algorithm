#include <iostream>

using namespace std;

int DP[100001];
int N[100001];

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, s; cin >> n >> s; 
	DP[0] = 0; cin >> DP[1];
	for (int i = 2; i < n + 1; i++){
		cin >> N[i]; 
		DP[i] += DP[i - 1] + N[i];
	}
	
	int L = 0, R = 1;
	int min_ret = 100002;
	while(R <= n){
		int sum = DP[R] - DP[L];
		if (sum < s)
			R++;
		else if (sum >= s) {
			min_ret = min(min_ret, R - L);
			if (min_ret == 1) break;
			L++;
		}
	}
	
	min_ret != 100002 ? cout << min_ret : cout << 0;
}