#include<iostream>
using namespace std;
int main() {
    int a[4], b[4];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
        sum1 += a[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> b[i];
        sum2 += b[i];
    }
    if (sum1 > sum2) cout << "Gunnar" << '\n';
    else if (sum1 == sum2) cout << "Tie" << '\n';
    else cout << "Emma" << '\n';
}