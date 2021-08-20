#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str = ""; // string 초기화 

    cin >> str;

    for (int i = 0; i <= str.size(); i++) // str.size() string의 사이즈를 반환
    {                                    // ex) BlockDMask -> 10을 반환 
        cout << str[i];

        if (i % 10 == 9) 
            cout << endl;
        // 10개 출력하면 한 칸 내리기 
        // 문자열은 0부터 시작하므로, 0~9까지 10개가 출력됨.
    }
}