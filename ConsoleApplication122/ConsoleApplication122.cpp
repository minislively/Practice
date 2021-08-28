#include <iostream>
#include <string> 

int main()
{
    char ch[2001] = ""; // 널 때문에 \n

    fgets(ch, 2000, stdin);  // fgets를 쓰면 공백 포함해서 출력 가능.  
                             // 2000자를 넘지 않음.
                             // stdin : 표준 입력 스트림 (키보드와 프로그램을 잇는다.)  

    printf("%s", ch);

}