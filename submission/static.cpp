// Create a static variable that keeps count of how many times a function was called.

#include <iostream>
using namespace std;

class Counter
{
public:
    static int count;

    void myFunction()
    {
        count++;
        cout << "Function has been called " << count << " times." << endl;
    }
};

int Counter::count = 0;

int main(int argc, char const *argv[])
{
    Counter obj1;

    obj1.myFunction();
    obj1.myFunction();
    obj1.myFunction(); // print 3

    Counter obj2;
    obj2.myFunction(); // print 4

    return 0;
}
