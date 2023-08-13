#include <iostream>

using namespace std;

struct Per{
    int kg;
    int cm;
};

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N; cin >> N;

    Per* people = new Per[N];

    for (int i = 0; i < N; i++)
        cin >> people[i].kg >> people[i].cm;

    for (int i = 0; i < N; i++) {
        int temp = 1;

        for (int j = 0; j < N; j++)
            if (people[i].kg < people[j].kg && people[i].cm < people[j].cm)
                temp++;

        cout << temp << " ";
    }

    return 0;
}