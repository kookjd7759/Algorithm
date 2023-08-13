#include<iostream>
#include<stack>
#include<deque>
#include<string>

using namespace std;

int count_ = 0;

void Show(stack<int> st, deque<string> de) {
    cout << "count_ : " << count_ << "\n";

    int size = st.size();
    for (int i = 0; i < size; i++) {
        cout << "st.top() " << size - i << " : " << st.top() << "\n";
        st.pop();
    }
    
    int size_ = de.size();
    for (int i = 0; i < size_; i++) {
        cout << "de " << i << " : " << de.front() << "\n";
        de.pop_front();
    }
}

int main() {
    stack<int> st;
    deque<string> de;
    int N; cin >> N;
    
    for (int i = 0; i < N; i++) {
        int num; cin >> num;

        while (true) {
            if (!st.empty()) {
                if (st.top() > num) {
                    if (st.size() == 0) {
                        cout << "NO";
                        return 0;
                    }
                    de.push_back("-");
                    st.pop();
                }
                else if (st.top() < num) {
                    if (count_ > N) {
                        cout << "NO";
                        return 0;
                    }
                    de.push_back("+");
                    st.push(++count_);
                }
                else { // st.top() == num
                    de.push_back("-");
                    st.pop();
                    break;
                }
            }
            else {
                de.push_back("+");
                st.push(++count_);

                if (count_ > N) {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }

    int size_ = de.size();
    for (int i = 0; i < size_; i++) {
        cout << de.front() << "\n";
        de.pop_front();
    }

    return 0;
}