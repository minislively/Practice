#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    long long int cnt = 1;
    unsigned long long int k = 1;
    long long int sum = 0;
    while (1) {
        cin >> s;
        if (s == "#")
            break;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '-')
                cnt = 0;
            else if (s[i] == '\\')
                cnt = 1;
            else if (s[i] == '(')
                cnt = 2;
            else if (s[i] == '@')
                cnt = 3;
            else if (s[i] == '?')
                cnt = 4;
            else if (s[i] == '>')
                cnt = 5;
            else if (s[i] == '&')
                cnt = 6;
            else if (s[i] == '%')
                cnt = 7;
            else if (s[i] == '/')
                cnt = -1;
            sum = sum + cnt * k;
            k = k * 8;
        }
        cout << sum << '\n';
        sum = 0, k = 1, cnt = -1;
    }
}