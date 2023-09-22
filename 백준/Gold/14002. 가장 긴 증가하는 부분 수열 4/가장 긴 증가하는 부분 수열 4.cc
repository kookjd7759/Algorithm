#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int n;
int nList[1001];
int DP[1001];
vector<int> vec;
stack<int> st;
int max_index(1);

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++) cin >> nList[i];
	
	vec.push_back(nList[1]); DP[1] = 1;
	for (int i = 2; i <= n; i++){
		if (vec[vec.size() - 1] < nList[i]) {
			vec.push_back(nList[i]);
			DP[i] = vec.size();
			max_index = i;
		}
		else {
			int index = lower_bound(vec.begin(), vec.end(), nList[i]) - vec.begin();
			vec[index] = nList[i];
			DP[i] = index + 1;
		}
	}
	
	st.push(max_index);
	for (int i = max_index - 1; i > 0; i--){
		if (DP[i] + 1 == DP[max_index]){
			max_index = i;
			st.push(i);
		}
	}
	
	cout << vec.size() << "\n";
	
	while(!st.empty()){
		cout << nList[st.top()] << " ";
		st.pop();
	}
}