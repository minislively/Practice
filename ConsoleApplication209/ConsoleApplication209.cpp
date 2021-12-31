#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0;
    int a[8] = { 0, };
    int b[8] = { 0, };
    int c[8] = { 0, };
    string s;
    cin >> s;
    for (int j = 1; j < 8; j++) {
        if (s[j] == s[j - 1])
        {
            a[n] = a[n] + 1;
        }
        else
            n++;
    }
    sort(a, a + 8);
    cout << a[7] + 1 << '\n';
    n = 0;
    cin >> s;
    for (int j = 1; j < 8; j++) {
        if (s[j] == s[j - 1])
        {
            b[n] = b[n] + 1;
        }
        else
            n++;
    }
    sort(b, b + 8);
    cout << b[7] + 1 << '\n';
    n = 0;
    cin >> s;
    for (int j = 1; j < 8; j++) {
        if (s[j] == s[j - 1])
        {
            c[n] = c[n] + 1;
        }
        else
            n++;
    }
    sort(c, c + 8);
    cout << c[7] + 1 << '\n';
}