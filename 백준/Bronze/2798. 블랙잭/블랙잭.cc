#include <iostream>

using namespace std;

#define MAX 101

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N, M; cin >> N >> M;
    int ans, min = 0;

    int Arr[MAX]{};
    
    for (int i = 0; i < N; i++) 
        cin >> Arr[i];
    
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                ans = Arr[i] + Arr[j] + Arr[k];

                if (ans < M && ans > min)
                    min = ans;
                else if (ans == M) {
                    cout << ans;
                    return 0;
                }
            }
        }
    }

    cout << min;
    
	return 0;
}