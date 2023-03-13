// 7. Create and initialize a static varialbe in a class with all the possible access specifiers.
#include <iostream>
using namespace std;

class MyClass
{
public:
    static int publicVar;

protected:
    static int protectedVar;

private:
    static int privateVar;

public:
    void myMethod()
    {
        cout << "value of publicVar " << publicVar << endl
             << "value of protectedVar" << protectedVar << endl
             << "value of private " << privateVar << endl;
    }
};

int MyClass::publicVar = 1;
int MyClass::protectedVar = 2;
int MyClass::privateVar = 3;

int main(int argc, char const *argv[])
{
    MyClass obj;
    obj.myMethod();

    return 0;
}
