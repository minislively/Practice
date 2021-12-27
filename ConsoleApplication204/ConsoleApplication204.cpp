#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m = 1, sum = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            m += (i + 1);
            sum += (i * m);
        }
        cout << sum << '\n';
    }
}