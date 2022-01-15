#include<iostream>
using namespace std;
int main() {
    int s, a, b;
    cin >> s >> a >> b;
    if (s > a) {
        int x = s - a;
        if (x % b == 0) 
            cout << 250 + 100 * (x / b);
        else
            cout << 250 + 100 * (x / b) + 100;
    }
    else
        cout << 250;
}