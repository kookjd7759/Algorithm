#include <iostream>
#include <string>

using namespace std;

char UCPC[10] = {'U', 'C', 'P', 'C', };
char ucpc[10] = {'u', 'c', 'p', 'c', };

int main() {
    string st; getline(cin, st);
    int index = (0);
    for (int i = 0; i < st.size(); i++){
        if (st[i] == UCPC[index]) index++;
        if (index == 4) break;
    }
    if (index != 4) {
        int index = (0);
        for (int i = 0; i < st.size(); i++){
            if (st[i] == ucpc[index]) index++;
        if (index == 4) break;
        }
    }
    
    index == 4 ? cout << "I love UCPC" : cout << "I hate UCPC";
}