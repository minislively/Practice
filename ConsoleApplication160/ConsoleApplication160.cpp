#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

char a[600000];
int main()
{
    scanf("%s", a);
    stack<char> left, right; // 스택 left, right 
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        left.push(a[i]); // 커서는 제일 왼쪽에 있으니까, left의 스택에 다 입력
    }
    int m;
    scanf("%d", &m);
    while (m--)
    {
        char what;
        scanf(" %c", &what);
        if (what == 'L')
        {
            if (!left.empty())
            {
                right.push(left.top()); // 왼쪽에서 제일 위에있는 값이 오른쪽 스택에 추가
                left.pop(); // 왼쪽에 있는거 빼줌
            }
        }
        else if (what == 'D')
        {
            if (!right.empty())
            {
                left.push(right.top());
                right.pop();
            }
        }
        else if (what == 'B')
        {
            if (!left.empty())
            {
                left.pop();
            }
        }
        else if (what == 'P')
        {
            char c;
            scanf(" %c", &c);
            left.push(c);
        }
    }
    while (!left.empty()) // 스택은 위에있는 것이 의미를 가짐, 그래서 위에있는 것부터 하나씩 빼서 정답을 구하는게 좋음.
    {
        right.push(left.top()); // 왼쪽 스택에 있는 값을 오른쪽 스택의 값으로 옮겨준다. 
        left.pop();
    }
    while (!right.empty())
    {
        printf("%c", right.top()); // 그래서 위에서부터 출력을 해준다. 
        right.pop();
    }
    printf("\n");
    return 0;
}