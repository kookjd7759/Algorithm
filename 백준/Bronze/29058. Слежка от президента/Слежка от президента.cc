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
    int n, m, k; in n >> m >> k;

    vector<string> doc(n);
    string clip;          
    int cur = 0;          

    Fori(m) {
        string op; in op;
        if (op == "Backspace") {
            if (!doc[cur].empty()) doc[cur].pop_back();
        }
        else if (op == "Copy") {
            int len = (int)doc[cur].size();
            if (len <= k) clip = doc[cur];
            else clip = doc[cur].substr(len - k);
        }
        else if (op == "Paste") {
            if (!clip.empty()) doc[cur] += clip;
        }
        else if (op == "Next") cur = (cur + 1) % n;
        else doc[cur].push_back(op[0]);
    }

    const string& curDoc = doc[cur];
    if (curDoc.empty()) {
        out "Empty";
    }
    else {
        int len = (int)curDoc.size();
        if (len <= k) out curDoc;
        else out curDoc.substr(len - k);
    }
}