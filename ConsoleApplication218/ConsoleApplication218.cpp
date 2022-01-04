#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int n, cnt = 0;
    cin >> s >> n;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (cnt == n) break;
        else cout << s[i];
        cnt++;
    }
}