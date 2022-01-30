#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int a1[4], a2[4];
    for (int i = 0; i < 4; i++) {
        cin >> a1[i] >> a2[i];
    }
    sort(a1, a1 + 4);
    sort(a2, a2 + 4);
    int x = a1[3] - a1[0];
    int y = a2[3] - a2[0];
    if (x > y)cout << x * x << '\n';
    else if (x < y) cout << y * y << '\n';
}