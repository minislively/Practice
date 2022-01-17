#include<iostream>
#include<string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int sum;
    int part = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum = i; // n의 합 
        part = i; // n의 자리수들을 더할 부분
        while (1) {
            if (part == 0) break;
            sum += part % 10; // 각각 자릿수의 합을 구함. 
            part /= 10;
        }
        if (n == sum) {
            cout << i << '\n';
            return 0;
        }
    }
    cout << "0" << '\n';
}