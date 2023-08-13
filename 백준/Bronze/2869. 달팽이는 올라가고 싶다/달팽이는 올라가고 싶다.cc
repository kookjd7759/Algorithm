#include<iostream>

using namespace std;

int main() {
	int A; cin >> A;
	int B; cin >> B;
	int V; cin >> V;
	int D;

	if (A > V) {
		cout << 1;
	}
	else {
		D = (V - A) / (A - B);
		
		if ((V - A) % (A - B) != 0)
			if (D * (A - B) < V)
				D++;

		cout << ++D;
	}
}