#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while (1) {
        string s;
        stack<char> st;
        bool check = 0;
        getline(cin, s);
        if (s == ".")
            break;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[')
                st.push(s[i]);
            else if (s[i] == ')') {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                    check = 1;
            }
            else if (s[i] == ']') {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                    check = 1;
            }
        }
        if (check == 0 && st.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}