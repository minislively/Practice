#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int x = -a + sqrt(a * a - b);
    int y = -a - sqrt(a * a - b);
    if (x != y)
        cout << y << " " << x << '\n';
    else
        cout << x << '\n';
}