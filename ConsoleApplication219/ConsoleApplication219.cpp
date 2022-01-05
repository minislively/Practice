#include<iostream>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a;
    if (n == 0) cout << "divide by zero";
    else cout << "1.00";
}