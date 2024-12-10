#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

struct Node {
    int num = 0, len = 0;
};

int main() {
    Sync;

    int N; in N;
    vector<Node> vec;
    Node prev; in prev.num; prev.len = 1;
    Fori(N - 1) {
        int n; in n;
        if (prev.num == n) ++prev.len;
        else {
            vec.push_back(prev);
            prev.num = n; prev.len = 1;
        }
    }
    vec.push_back(prev);

    if (vec.size() == 1) out vec[0].len;
    else {
        int left(0), right(1), len(vec[0].len + vec[1].len), maxi(len);
        int arr[10], size(2); memset(arr, 0, sizeof(arr));
        arr[vec[0].num]++; arr[vec[1].num]++;

        while (true) {
            ++right;
            if (right >= vec.size()) break;

            len += vec[right].len;
            if (arr[vec[right].num] == 0) size++;
            arr[vec[right].num]++;

            while (size > 2) {
                arr[vec[left].num]--;
                len -= vec[left].len;
                if (arr[vec[left].num] == 0) size--;
                ++left;
            }

            maxi = max(maxi, len);
        }
        out maxi;
    }
}