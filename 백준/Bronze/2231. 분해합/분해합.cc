#include <iostream>

using namespace std;

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N; cin >> N;

    for (int i = 1; i < N; i++) {
        int sum = 0, temp = i;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum + i == N) {
            cout << i;
            return 0;
        }
    }

    cout << "0";
      
	return 0;
}