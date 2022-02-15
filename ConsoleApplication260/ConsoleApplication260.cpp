#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int n = 0, m = 0;
    cin >> s;
    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] == 'J' && s[i+1] == 'O' && s[i+2] == 'I')
            n++;
        if (s[i] == 'I' && s[i+1] == 'O' && s[i+2] == 'I')
            m++;
    }
    cout << n << '\n' << m << '\n';
}