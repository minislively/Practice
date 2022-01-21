#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int x = a + b;
    int y = a - b;
    if (x > y) cout << x << '\n' << y << '\n';
    else cout << y << '\n' << x << '\n';
}