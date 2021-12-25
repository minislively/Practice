#include<iostream>
using namespace std;
int main() {
    double n, sum = 0, a, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 3) {
            sum += 3;
            cnt++;
        }
        if (a == 2) {
            sum += 2;
            cnt++;
        }
        if (a == 1) {
            sum += 1;
            cnt++;
        }
        if (a == 0) {
            sum += 0;
            cnt++;
        }
        if (a == 4) {
            sum += 4;
            cnt++;
        }
    }
    cout << sum / cnt << '\n';
}