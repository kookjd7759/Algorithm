#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;

	while(t--){
		long int M, N, x, y; cin >> M >> N >> x >> y;

		long int year(1);
		if (M == x && N == y){
			year = M;
			while(year % M != 0 || year % N != 0){
				year += M;
				if (year > (M * N)){
					year = -1;
					break;
				}
			}
		}
		else if (M == x && N != y){
			year = M;
			while(year % N != y){
				year += M;
				if (year > (M * N)){
					year = -1;
					break;
				}
			}
		}
		else if (M != x && N == y){
			year = N;
			while(year % M != x){
				year += N;
				if (year > (M * N)){
					year = -1;
					break;
				}
			}
		}
		else {
			year = x;
			while(year % M != x || year % N != y){
				year += M;
				if (year > (M * N)){
					year = -1;
					break;
				}
			}
		}

		cout << year << "\n";
	}
}
