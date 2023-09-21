#include <iostream>
#include <cstring>

using namespace std;

int n, m;
int arr[2001];
bool DP[2001][2001];

void setDP(){
	DP[1][1] = 1;
	for(int i = 2; i <= n; i++){
		DP[i][i] = 1;
		if(arr[i - 1] == arr[i]) DP[i - 1][i] = 1; 
	}
	
	for (int i = 2; i < n; i++)
		for (int j = 1; j + i <= n; j++)
			if (arr[j] == arr[j + i] && DP[j + 1][j + i - 1])
				DP[j][j + i] = 1; 
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(DP, 0, sizeof(DP));
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	
	setDP();
	
	cin >> m;
	while(m--){
		int s, e; cin >> s >> e;
		DP[s][e] ? cout << "1\n" : cout << "0\n";
	}
}