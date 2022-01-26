#include<iostream>
#include<string>
using namespace std;
int main() {
    string x;
    int a = 0;
    cin >> x;
    while (1) {
        int y = x.length() * (x[0] - '0');
        if (a == y) {
            cout << "FA" << '\n';
            break;
        }
        a = y;
    }
}