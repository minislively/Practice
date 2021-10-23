#include <iostream>
#include <string>
using namespace std;
int main() {
    int t, p = 0, q = 0, cnt = 0;
    string str;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        getline(cin, str);
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == ' ' && cnt == 2)
                break;
            if (str[j] == ' ') {
                p = j; // 두번째 공백 값
                cnt++;
            }
            q = p; // 처음 공백 값 
        }
        for (int k = p + 1; k < str.length(); k++) { // p+1 : 처음 공백 없애기 위해서 
            cout << str[k];
        }
        cout << " ";
        for (int m = 0; m < p; m++) {
            cout << str[m];
        }
        cout << '\n';
        cnt = 0;
    }
}