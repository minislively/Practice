#include<iostream>
#include<string>
#include<cmath>
using namespace std;
unsigned long long mod = 1234567891, sum = 0, cnt = 1;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        sum += (s[i] - 'a' + 1) * cnt;
        sum %= mod;
        cnt *= 31;
        cnt %= mod;
    }
    cout << sum << '\n';
}