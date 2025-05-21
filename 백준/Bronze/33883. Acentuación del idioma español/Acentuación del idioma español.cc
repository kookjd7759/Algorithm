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

bool is_vowel(char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }

int main() {
    Sync;

    string st; in st;
    vector<int> vowel_pos;
    Fori(st.size()) if (is_vowel(st[i])) vowel_pos.push_back(i + 1);
    char last(st[st.size() - 1]);
    if (is_vowel(last) || last == 'n' || last == 's')
        out(vowel_pos.size() >= 2 ? vowel_pos[vowel_pos.size() - 2] : -1);
    else
        out(vowel_pos.size() >= 1 ? vowel_pos[vowel_pos.size() - 1] : -1);
}