#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    stack<char> st;
    int sum = 0, k = 1;
    bool check = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            k *= 2;
            st.push('(');
        }
        else if (s[i] == '[') {
            k *= 3;
            st.push('[');
        }
        else if (s[i] == ')' && (st.empty() || st.top() != '(')) {
            check = false;
            break;
        }
        else if (s[i] == ']' && (st.empty() || st.top() != '[')) {
            check = false;
            break;
        }
        else if (s[i] == ')') {
            if (s[i - 1] == '(')
                sum += k;
            st.pop();
            k /= 2;
        }
        else if (s[i] == ']') {
            if (s[i - 1] == '[')
                sum += k;
            st.pop();
            k /= 3;
        }
    }
    if (check == false || !st.empty())
        cout << 0 << '\n';
    else
        cout << sum << '\n';
}