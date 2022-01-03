#include<iostream>
using namespace std;
int SquaredSum(int n) {
    if (n == 0)return 0;
    return (((n % 10) * (n % 10)) + SquaredSum(n / 10));
}
int main() {
    int n;
    cin >> n;
    cout << SquaredSum(n);
}