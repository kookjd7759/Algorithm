#include <iostream>
#include <vector>

using namespace std;

int main() {
    while (true) {
        vector<int> vec;
        int num; cin >> num;
        if (num == -1)
            break;

        int result = 0;
        for (int i = 1; i < num / 2 + 1; i++)
            if (num % i == 0) {
                result += i;
                vec.push_back(i);
            }

        if (result == num) {
            cout << num << " = ";
            for (int i = 0; i < vec.size(); i++) {
                cout << vec[i];
                if (i != vec.size() - 1)
                    cout << " + ";
            }
            cout << "\n";
        }
        else
            cout << num << " is NOT perfect.\n";
    }
}