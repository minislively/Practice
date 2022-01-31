#include<iostream>
using namespace std;
int main() {
    int t, n, d, v, f, c;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int sum = 0;
        cin >> n >> d;
        for (int j = 0; j < n; j++) {
            cin >> v >> f >> c;
            if (v * f / c >= d)sum++;
        }
        cout << sum << '\n';
    }
}