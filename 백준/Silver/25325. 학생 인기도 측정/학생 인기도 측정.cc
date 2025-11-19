#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout <<
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int main() {
    Sync;

    int n; in n;
    pair<string, int>* arr = new pair<string, int>[n];
    map<string, int> idx;
    Fori(n) {
        in arr[i].first;
        arr[i].second = 0;
        idx[arr[i].first] = i;
    }

    string line; getline(cin, line);
    Fori(n) {
        getline(cin, line);
        stringstream ss(line);
        string word;
        vector<string> result;
        while (ss >> word) result.push_back(word);
        
        for (string name : result) arr[idx[name]].second++;
    }

    sort(arr, arr + n, [](pair<string, int> a, pair<string, int> b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
        });

    Fori(n) out arr[i].first spc arr[i].second endl;
}