#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int x = (a + b) % 12;
    if (x == 0) cout << 12 << '\n';
    else cout << x << '\n';
}