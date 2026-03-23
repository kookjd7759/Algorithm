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

    map<string, int> L, V, T;
    L["ㄱ"] = 0; L["ㄲ"] = 1; L["ㄴ"] = 2; L["ㄷ"] = 3; L["ㄸ"] = 4; L["ㄹ"] = 5; L["ㅁ"] = 6; L["ㅂ"] = 7; L["ㅃ"] = 8; L["ㅅ"] = 9; L["ㅆ"] = 10; L["ㅇ"] = 11; L["ㅈ"] = 12; L["ㅉ"] = 13; L["ㅊ"] = 14; L["ㅋ"] = 15; L["ㅌ"] = 16; L["ㅍ"] = 17; L["ㅎ"] = 18;
    V["ㅏ"] = 0; V["ㅐ"] = 1; V["ㅑ"] = 2; V["ㅒ"] = 3; V["ㅓ"] = 4; V["ㅔ"] = 5; V["ㅕ"] = 6; V["ㅖ"] = 7; V["ㅗ"] = 8; V["ㅘ"] = 9; V["ㅙ"] = 10; V["ㅚ"] = 11; V["ㅛ"] = 12; V["ㅜ"] = 13; V["ㅝ"] = 14; V["ㅞ"] = 15; V["ㅟ"] = 16; V["ㅠ"] = 17; V["ㅡ"] = 18; V["ㅢ"] = 19; V["ㅣ"] = 20;
    T[""] = 0; T["ㄱ"] = 1; T["ㄲ"] = 2; T["ㄳ"] = 3; T["ㄴ"] = 4; T["ㄵ"] = 5; T["ㄶ"] = 6; T["ㄷ"] = 7; T["ㄹ"] = 8; T["ㄺ"] = 9; T["ㄻ"] = 10; T["ㄼ"] = 11; T["ㄽ"] = 12; T["ㄾ"] = 13; T["ㄿ"] = 14; T["ㅀ"] = 15; T["ㅁ"] = 16; T["ㅂ"] = 17; T["ㅄ"] = 18; T["ㅅ"] = 19; T["ㅆ"] = 20; T["ㅇ"] = 21; T["ㅈ"] = 22; T["ㅊ"] = 23; T["ㅋ"] = 24; T["ㅌ"] = 25; T["ㅍ"] = 26; T["ㅎ"] = 27;

    string a, b, c; getline(cin, a); getline(cin, b); getline(cin, c);
    int code = 0xAC00 + (L[a] * 21 + V[b]) * 28 + T[c];

    string ans;
    if (code <= 0x7F) ans += char(code);
    else if (code <= 0x7FF) ans += char(0xC0 | (code >> 6)), ans += char(0x80 | (code & 0x3F));
    else ans += char(0xE0 | (code >> 12)), ans += char(0x80 | ((code >> 6) & 0x3F)), ans += char(0x80 | (code & 0x3F));

    out ans endl;

    return 0;
}