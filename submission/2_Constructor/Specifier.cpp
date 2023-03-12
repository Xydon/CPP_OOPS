#include <iostream>
using namespace std;

class Student{

    // access from base class only
   private:
   string password;

    
// acess from base class and subclass, and also access from friend function
   protected:
   int age;


// access everywhere
    public:
    string name;

    Student(string name){
        this->name = name;
    }


   friend void display(Student me);
   friend void create(Student me);



};

void create(Student me){
    // can acess in friend class
    
    me.age = 13;
    me.password = "90823";

}

void display(Student me){
    cout<<"name-> "<<me.name<<" age "<<me.age<<" and password is "<<me.password<<endl;
   
}



int main(int argc, char const *argv[])
{
    
    Student myClass("abc");

    
    //  cannot access
    // me.age = 10;
    // me. password = "abc"

    create(myClass);
    display(myClass);



    return 0;
}