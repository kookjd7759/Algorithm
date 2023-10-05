#include <iostream>
#include <array>
#include <stack>

using namespace std;

void Input(array<int64_t, 100004>& H_Arr, int& N) {
	cin >> N;

	for (int i = 1; i <= N; i++)
		cin >> H_Arr[i];
}

int main() {
	array<int64_t, 100004> H_Arr{};
	int N;
	int64_t MaxRect = -1;
	stack<int> st;
	Input(H_Arr, N);

	st.push(0);
	for (int i = 1; i <= N + 1; i++) {
		while(!st.empty() && H_Arr[st.top()] > H_Arr[i]) {
			int Topindex = st.top();
			st.pop();
			int64_t num = H_Arr[Topindex] * (i - st.top() - 1);
			if (MaxRect < num)
				MaxRect = num;
		}
		st.push(i);
	}
		
	cout << MaxRect << "\n";
}