#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

char func(int R, int G, int B) { 
    int intensity = 2126 * R + 7152 * G + 722 * B; 
    return intensity < 510000 ? '#'
        : intensity < 1020000 ? 'o'
        : intensity < 1530000 ? '+'
        : intensity < 2040000 ? '-'
        : '.';
}

int main() {
    Sync;

    int N, M; cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int R, G, B; cin >> R >> G >> B;
            cout << func(R, G, B);
        } cout << "\n";
    }

    return 0;
}
