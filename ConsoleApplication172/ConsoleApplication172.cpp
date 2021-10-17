#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[100], s[100];
    int t, sum=0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a[i] >> s[i];
        sum = sum + (s[i] - a[i]*(s[i]/a[i]));
    }
    cout << sum;
}