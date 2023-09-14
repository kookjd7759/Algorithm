#include <iostream>

using namespace std;

int main(){
	int e, s, m; cin >> e >> s >> m;
	int e_ = 1, s_ = 1, m_ = 1; 
	int year = 1;
	while(true){
		if (e == e_ && s == s_ && m == m_)
			break;
		e_++; s_++; m_++;
		if (e_ == 16)
			e_ = 1;
		if (s_ == 29)
			s_ = 1;
		if (m_ == 20)
			m_ = 1;
		year++;
	}
	cout << year;
}