#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define out cout <<
#define in cin >>

using namespace std;

int main() {
    Sync;

    long long N; in N;
    string bin;
    while (N) { bin.push_back((N % 2) + '0'); N /= 2; }
    long long res = 0, p = 1;
    for (int i = bin.size() - 1; i >= 0; --i) {
        if (bin[i] == '1') res += p;
        p *= 2;
    }
    out res << "\n";
}
