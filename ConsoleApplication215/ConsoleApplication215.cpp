#include<iostream>
using namespace std;
int SumFunction(int n) {
    if (n >= 0) return n + SumFunction(n - 1);
    return 0;
}

int main() {
    int n = 0;
    cin >> n;
    cout << SumFunction(n);
}