#include <iostream>
#include <stack>

using namespace std;

stack<pair<int, int>> st;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); 
    
	int n, num; cin >> n >> num; 
	st.push({ num, 0 }); n--;
	// cout << num << " " << 0 << "\n";
	
	long long cnt(0);
	while(n--){
        	cin >> num;
		int cur_pair(0);
		
		while (!st.empty() && st.top().first < num) {
		    // cout << " < ";
			cnt += st.top().second + 1; 
			// cout << " +" << st.top().second + 1 << " \n";
			st.pop(); 
		}
		
		if (!st.empty() && st.top().first == num) {
		    // cout << " == ";
			cur_pair = st.top().second + 1;
			cnt += cur_pair;
			// cout << " +" << cur_pair << " \n";
			st.pop(); 
		}
		
		if (!st.empty() && st.top().first > num) {
		    // cout << " > ";
			cnt++; 
			// cout << " +1 \n";
		}
		
		st.push({ num, cur_pair });
		// cout << num << " " << cur_pair << "\n";
	}
	
	cout << cnt;
}