#include <iostream>
using namespace std;


class Duck{
    public:
    int age;
    string type;
    string color;

    Duck(int iage, string itype, string icolor){
        this->age = iage;
        this->type = itype;
        this->color = icolor;
    }
     
    void introduce(){
        cout<<"this is "<<type << " its color is "<<color<<" its age is "<<age<<endl;
    }

    void sound(){
        cout<<"duck sound is quack quack!!"<<endl;
    }

    void eat();
};

void Duck ::eat(){
    cout<<"duck are aquatic vegeterian, they eat pond weed, along with seeds, insects, worms."<<endl;
}


void createClass(){
    Duck dk(5, "seaDuck", "brown");
    dk.sound();
    dk.eat();
    dk.introduce();

    cout<<endl;

    Duck *dk2 = new Duck(4,"domesticDuck", "white");
    dk2->sound();
    dk2->eat();
    dk2->introduce();
    
}

int main(int argc, char const *argv[])
{
    createClass();
    return 0;
}
