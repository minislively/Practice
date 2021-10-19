#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;
class Person {
private:
    char* name;
    int age;
public:
    Person(const char myname[], int myage) {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy_s(name, len, myname);
        age = myage;
    }
    void ShowPersonInfo() const {
        cout << "이름 : " << name << '\n';
        cout << "나이 : " << age << '\n';
    }
    ~Person() {
        delete[]  name; 
        cout << "destructor is called!" << '\n';
        Sleep(1000);
    } 
};
int main() {
    Person man("남자", 4);
    Person woman("여자", 5);
    man.ShowPersonInfo();
    woman.ShowPersonInfo();

    system("pause");
    return 0;
}