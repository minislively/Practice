#include<iostream>
using namespace std;
int main() {
    int a[31] = { 0, };
    int m;
    for (int i = 0; i < 28; i++) {
        cin >> m;
        a[m] = a[m] + 1;
    }
    for (int i = 1; i <= 30; i++)
        if (a[i] == 0) cout << i << '\n';
}