#include <iostream>
using namespace std;

class Add
{
private:
    int a;
    int b;
    int *c;

public:
    Add(int a, int b)
    {
        cout << "constructor is called" << endl;
        this->a = a;
        this->b = b;
        c = new int;
        *c = 10;
    }

    void addition()
    {
        cout << "result is " << (a + b) << endl
             << endl;
    }

    ~Add()
    {
        delete c;
        // can not use with a and b because delete is expected pointer
        // delete a;
        cout << "destructor is called, memory is released" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Add *num = new Add(3, 4);
    num->addition();

    // we can call destructor using below two method
    // num->~Add();
    // delete num;

    // in this destructor is executed itself, when we create using new we need
    // to call destructor or delete.
    Add num2(12, 13);
    num2.addition();

    return 0;
}
