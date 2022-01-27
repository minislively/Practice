#include<iostream>
using namespace std;
int main() {
    long long sum = 0, n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i + 1; j <= n; j++)
            cnt++;
    }
    cout << cnt << '\n' << 2 << '\n';
}