#include <iostream>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;

priority_queue<int> L_p_que;
deque<int> M_que;
priority_queue<int, vector<int>, greater<int>> R_p_que;

void Print_Que() {
	priority_queue<int> L = L_p_que;
	deque<int> M = M_que;
	priority_queue<int, vector<int>, greater<int>> R = R_p_que;

	cout << "===== que ===== \n";
	int Size = L.size();
	for (int i = 0; i < Size; i++) {
		cout << L.top() << " ";
		L.pop();
	}
	cout << "- \n";

	Size = M.size();
	for (int i = 0; i < Size; i++) {
		cout << M.front() << " ";
		M.pop_front();
	}
	cout << "- \n";

	Size = R.size();
	for (int i = 0; i < Size; i++) {
		cout << R.top() << " ";
		R.pop();
	}
	cout << "- \n\n";
}

void Func(int num) {
	if (M_que.empty())
		M_que.push_front(num);
	else {
		if (M_que.size() == 1) {
			if (L_p_que.empty() && R_p_que.empty()) {
				if (num <= M_que.front()) {
					M_que.push_front(num);
				}
				else if (M_que.back() <= num) {
					M_que.push_back(num);
				}
			}
			else {
				if (num <= L_p_que.top()) {
					L_p_que.push(num);
					M_que.push_front(L_p_que.top());
					L_p_que.pop();
				}
				else if (R_p_que.top() <= num) {
					R_p_que.push(num);
					M_que.push_back(R_p_que.top());
					R_p_que.pop();
				}
				else if (num <= M_que.front()) {
					M_que.push_front(num);
				}
				else if (M_que.back() <= num) {
					M_que.push_back(num);
				}
				else
					cout << "error :: Func() Function, if (M_que.size() == 1) \n";
			}
		}
		else if (M_que.size() == 2) {
			if (L_p_que.empty() && R_p_que.empty()) {
				if (num <= M_que.front()) {
					L_p_que.push(num);
					R_p_que.push(M_que.back());
					M_que.pop_back();
				}
				else if (M_que.back() <= num) {
					R_p_que.push(num);
					L_p_que.push(M_que.front());
					M_que.pop_front();
				}
				else if (M_que.front() <= num && num <= M_que.back()) {
					R_p_que.push(M_que.back());
					M_que.pop_back();
					L_p_que.push(M_que.front());
					M_que.pop_front();
					M_que.push_back(num);
				}
			}
			else {
				if (num <= L_p_que.top()) {
					L_p_que.push(num);
					M_que.push_front(L_p_que.top());
					M_que.pop_front();

					R_p_que.push(M_que.back());
					M_que.pop_back();
				}
				else if (R_p_que.top() <= num) {
					R_p_que.push(num);
					M_que.push_back(R_p_que.top());
					M_que.pop_back();

					L_p_que.push(M_que.front());
					M_que.pop_front();
				}
				else if (num <= M_que.front()) {
					L_p_que.push(num);
					R_p_que.push(M_que.back());
					M_que.pop_back();
				}
				else if (M_que.back() <= num) {
					R_p_que.push(num);
					L_p_que.push(M_que.front());
					M_que.pop_front();
				}
				else if (M_que.front() <= num && num <= M_que.back()) {
					R_p_que.push(M_que.back());
					M_que.pop_back();
					L_p_que.push(M_que.front());
					M_que.pop_front();
					M_que.push_back(num);
				}
				else
					cout << "error :: Func() Function, if (M_que.size() == 2) \n";
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int size; cin >> size;
	for (int i = 0; i < size; i++) {
		int ans; cin >> ans;
		Func(ans);
		// Print_Que();
		cout << M_que.front() << "\n";
	}

	return 0;
}