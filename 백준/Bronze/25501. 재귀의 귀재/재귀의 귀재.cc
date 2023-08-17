#include <iostream>
#include <string.h>

using namespace std;

int count_;

int recursion(const char* s, int l, int r) {
    count_++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    int S; cin >> S;
    while (S--) {
        count_ = 0;
        char ch[1005]; cin >> ch;
        cout << isPalindrome(ch) << " " << count_ << "\n";
    }
}