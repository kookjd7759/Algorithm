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
    while(n--){
        int w, m; in w >> m;
        string line; getline(cin, line);

        vector<string> words;
        vector<int> sep;

        bool hasPrev = false;
        Fori(m){
            getline(cin, line);
            int j = 0;
            bool firstInLine = true;
            while(j < (int)line.size()){
                while(j < (int)line.size() && line[j] == ' ') j++;
                if(j >= (int)line.size()) break;
                int st = j;
                while(j < (int)line.size() && line[j] != ' ') j++;
                string word = line.substr(st, j - st);

                int s = 0;
                if(hasPrev){
                    if(firstInLine) s = 1;
                    else{
                        int p = st - 1;
                        while(p >= 0 && line[p] == ' ') s++, p--;
                    }
                }

                words.push_back(word);
                sep.push_back(s);
                hasPrev = true;
                firstInLine = false;
            }
        }

        string cur = "";
        Fori((int)words.size()){
            int need = (cur.empty() ? 0 : sep[i]) + (int)words[i].size();
            if(cur.empty() || (int)cur.size() + need <= w){
                if(!cur.empty()) cur += string(sep[i], ' ');
                cur += words[i];
            }else{
                out cur << "\n";
                cur = words[i];
            }
        }
        if(!cur.empty()) out cur << "\n";
        if(n) out "\n";
    }

    return 0;
}