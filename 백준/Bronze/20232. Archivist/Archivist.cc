#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string winner[] = {"ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO",
                               "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO",
                               "ITMO", "PetrSU, ITMO", "SPbSU", "SPbSU",
                               "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU",
                               "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO"};
	int n; cin >> n;
	cout << winner[n - 1995];
}