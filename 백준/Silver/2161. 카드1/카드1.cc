#include <iostream>
#include <queue>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);

	queue<int> que, que_drop;
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
		que.push(i);
	while(que.size() != 1){
		que_drop.push(que.front());
		que.pop();
		que.push(que.front());
		que.pop();
	}
	
	while(que_drop.size() != 0){
		cout << que_drop.front() << " ";
		que_drop.pop();
	}
	cout << que.front();
}