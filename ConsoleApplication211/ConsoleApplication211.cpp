#include<iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    while (n>=0) {
        if (n % 5 == 0 && n>=0) {
            sum += n / 5;
            cout << sum << '\n';
            return 0;
        }
        n -= 3;
        sum++;
    }
    cout << -1 << '\n';
}