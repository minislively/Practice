#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int A, B, C;
    int N;
    int a, b, c;
    int SUM[3000] = { 0, }, x = 0, j = 0;
    cin >> A >> B >> C;
    cin >> N;
    for (int i = 0; i < 3 * N; i++) {
        cin >> a >> b >> c;
        x = (a * A) + (b * B) + (c * C);
        if (i % 3 == 0 && i > 1)
            j++;
        SUM[j] += x;
    }
    sort(SUM, SUM + j);
    cout << SUM[j - 1] << '\n';
}