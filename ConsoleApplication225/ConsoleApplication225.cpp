#include<iostream>
#include<string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    unsigned long long int j = 0, sum = 0;
    string a, b;
    cin >> a >> b;
    int x = b.length() - 1;
    while (1) {
        if (j == (x+1)) break;
        for (int i = 0; i < a.length(); i++) {
            sum += (a[i] - '0')*(b[j]-'0');
        }
        j++;
    }
    cout << sum << '\n';
}