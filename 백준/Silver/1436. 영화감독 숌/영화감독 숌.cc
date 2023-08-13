#include <iostream>
#include <string>

using namespace std;

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	int count = 0;
	string Num = "666";
	
	while (true) {
		if (Num.find("666") != string::npos) {
			count++;
			if (count == N)
				break;
		}
		
		Num = to_string(stoi(Num) + 1);
	}

	cout << Num;
	
    return 0;
}