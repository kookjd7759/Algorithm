#include <iostream>
#include <string>

using namespace std;

int DP[1005][1005]{};

int main() {
	string st1, st2, ret = ""; cin >> st1 >> st2;
	
	for (int i = 1; i <= st2.size(); i++)
		for (int j = 1; j <= st1.size(); j++)
			if (st2[i - 1] == st1[j - 1]) 
				DP[i][j] = DP[i - 1][j - 1] + 1;
			else
				DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);

	cout << DP[st2.size()][st1.size()] << "\n";
	int i = st2.size(), j = st1.size();
	while (i != 0 && j != 0) {
		if (DP[i][j] == DP[i - 1][j]) 
			i--;
		else if (DP[i][j] == DP[i][j - 1])
			j--;
		else { 
			ret.push_back(st1[j - 1]); 
			i--; j--; 
		}
	}

	for (int i = ret.size() - 1; i >= 0; i--)
		cout << ret[i];
}
