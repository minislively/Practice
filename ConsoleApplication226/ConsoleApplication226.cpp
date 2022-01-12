#include<iostream>
#include<string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int cnt = 0;
    cin >> s;
    string t = s;
    int x = stoi(t);
    for (int i = 1; i <= x; i++) {
        string n = to_string(i);
        for (int j = 0; j < n.length(); j++) {
            if (n[j] == '3')cnt++;
            if (n[j] == '6')cnt++;
            if (n[j] == '9')cnt++;
        }
    }
    cout << cnt << '\n';
}