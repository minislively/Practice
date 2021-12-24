#include<iostream>
#include<string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if ((s[s.length() - 1]-'0') % 2 != 0)
            cout << "odd" << '\n';
        else
            cout << "even" << '\n';
    }
}