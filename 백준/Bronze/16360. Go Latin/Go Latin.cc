#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int n; cin >> n;
    while (n--) {
        string s; cin >> s;

        int L = (int)s.size();

        // 2-letter rules first: "-ne" -> "-anes"
        if (L >= 2 && s.substr(L - 2) == "ne") {
            s.erase(L - 2);
            s += "anes";
        }
        // 1-letter rules
        else {
            char last = s.back();
            switch (last) {
                case 'a': s.pop_back(); s += "as"; break;
                case 'i':
                case 'y': s.pop_back(); s += "ios"; break;
                case 'l': s.pop_back(); s += "les"; break;
                case 'n': s.pop_back(); s += "anes"; break;
                case 'o': s.pop_back(); s += "os"; break;
                case 'r': s.pop_back(); s += "res"; break;
                case 't': s.pop_back(); s += "tas"; break;
                case 'u': s.pop_back(); s += "us"; break;
                case 'v': s.pop_back(); s += "ves"; break;
                case 'w': s.pop_back(); s += "was"; break;
                default:  s += "us"; break;
            }
        }

        cout << s << "\n";
    }

    return 0;
}
