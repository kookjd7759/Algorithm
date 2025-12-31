#include <iostream>
#include <stack>

using namespace std;

stack<pair<int, int>> st;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); 
    
	int n, num; cin >> n >> num; 
	st.push({ num, 0 }); n--;
	
	long long cnt(0);
	while(n--){
        	cin >> num;
		int cur_pair(0);
		
		while (!st.empty() && st.top().first < num) {
			cnt += st.top().second + 1; 
			st.pop(); 
		}
		
		if (!st.empty() && st.top().first == num) {
			cur_pair = st.top().second + 1;
			cnt += cur_pair;
			st.pop(); 
		}
		
		if (!st.empty() && st.top().first > num) {
			cnt++; 
		}
		
		st.push({ num, cur_pair });
	}
	
	cout << cnt;
}