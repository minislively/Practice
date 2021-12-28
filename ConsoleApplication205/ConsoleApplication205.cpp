#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while (1) {
        cin >> n;
        int sum = 0;
        if (n == 0)
            break;
        while (1) {
            if (n % 10 == 1) sum += 2;
            else if (n % 10 == 0) sum += 4;
            else sum += 3;
            if (n < 10) break;
            n /= 10;
            sum += 1;
        }
        cout << sum + 2 << '\n';
    }
}