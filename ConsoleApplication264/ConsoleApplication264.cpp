#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;     // cin 입력 버퍼에는 정수 t와 개행문자가 들어간다.
    cin.ignore(); // 입력 버퍼를 비워줌. 
    while (t--) {
        string s;
        int sum = 0;
        getline(cin, s);
        string tmp = "";
        for (int i = 0; i < s.length(); i++) {
            tmp += s[i];
            if (s[i] == ' ' || i == s.length() - 1) {
                sum += stoi(tmp);
                tmp = "";
            }
        }
        cout << sum << '\n';
    }
}