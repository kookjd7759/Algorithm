#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int L, C;
vector<char> arr;
vector<char> ans;
void dfs(int start, int depth) {
	if (depth == L) {
		int vowel(0), cons(0);
		for (int i = 0; i < L; ++i)
			if (ans[i] == 'a' || ans[i] == 'e' || ans[i] == 'i' ||
				ans[i] == 'o' || ans[i] == 'u')
				 vowel++;
			else cons++;
		if (vowel < 1 || cons < 2) return;

		for (int i = 0; i < L; ++i) 
			cout << ans[i];
		cout << "\n";
		return;
	}

	for (int i = start; i < C; ++i) {
		ans[depth] = arr[i];
		dfs(i + 1, depth + 1);
	}
}

int main() {
	Sync;

	cin >> L >> C;
	arr.resize(C); ans.resize(L);
	for (int i = 0; i < C; ++i) cin >> arr[i];
	sort(arr.begin(), arr.end());

	dfs(0, 0);

	return 0;
}
