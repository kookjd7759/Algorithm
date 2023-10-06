#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int arr[1004][1004];

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	while (true){
		memset(arr, 0, sizeof(arr));
		int n, m; cin >> n >> m;
		if (n == 0 && m == 0) break;
		
		for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++){
			int num; cin >> num;
			if (num) arr[i][j] = arr[i - 1][j] + 1;
		}
		
		int ret(0);
		for (int i = 1; i <= n; i++) {
			stack<int> st; st.push(0);
			for (int j = 1; j <= m + 1; j++){
				while(!st.empty() && arr[i][st.top()] > arr[i][j]){
					int topIndex = st.top(); st.pop();
					int num = arr[i][topIndex] * (j - st.top() - 1);
					if (ret < num) ret = num;
				}
				st.push(j);
			}
		}
		
		cout << ret << "\n";
	}
}