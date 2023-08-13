#include <iostream>

using namespace std;

int64_t DP[1001]{0, 1, 3};
int N;

void Input(){
	cin >> N;
	
	for(int i = 3;i <= N; i++){
		DP[i] = DP[i - 1] + (DP[i - 2] * 2);
		DP[i] %= 10007;
	}
}

int main(){
	Input();
	
	cout << DP[N];
}
