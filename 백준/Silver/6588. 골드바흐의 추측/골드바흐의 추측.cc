#include <iostream>
#include <cstring>

using namespace std;

bool prime[1000001];

void mkpr(){
	memset(prime, true, sizeof(prime));
	
	for (int i = 2; i * i < 1000001; i++){
		if (!prime[i]) continue;
		for (int j = i * i; j < 1000001; j += i) prime[j] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	mkpr();
	
	int n; 
	while (true) {
		cin >> n; if (!n) break;
		
		bool chk = false;
		for (int i = 3; i < n; i += 2) {
			if (prime[i] && prime[n - i]){
				cout << n << " = " << i << " + " << n - i << "\n";
				chk = true;
				break;
			}
		}
		
		if (!chk) cout << "Goldbach's conjecture is wrong.\n";
	}
}