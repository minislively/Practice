#include<iostream>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        int cnt = 0;
        while (a>0) {
            if (a % 2 == 1) // 
                cout << cnt << " ";
            a /= 2;
            cnt++; // 최하비트 
        }
    }
}