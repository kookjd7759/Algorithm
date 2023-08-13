#include <iostream>

using namespace std;

int64_t DP[12]{0, 1, 2, 4};

void ResetDP(){
	for(int i = 4; i < 12; i++){
		DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
	}
}

int main(){
	ResetDP();
	int TestCase; cin >> TestCase;
	
	while(TestCase--){
		int N; cin >> N;
		cout << DP[N] << "\n";
	}
}
