#include <iostream>
using namespace std;


class Complex {
	public: 
		float real; 
		float imaginary;
    
    //private:
        Complex(float real, float imaginary){
            cout<<"initializes real and imaginary with two input value for them respectively"<<endl;
            this->real = real;
            this->imaginary = imaginary;
        }

        Complex(const Complex &c){
            cout<<"initialized real and imaginary with the values of another object of the same Complex class as input" <<endl;
            this->real  = c.real;
            this->imaginary = c.imaginary;
        }


        void print(){
            cout<<real<<" + "<<imaginary<<"i"<<endl<<endl;
            //Complex c(3, 2);
            //c.print();
        }


};


int main(int argc, char const *argv[])
{

    Complex cObj(24.2, 3);
    cObj.print();

    Complex newObj(cObj);
    newObj.print();

    Complex *obj = new Complex(2, 3);
    obj->print();


   


    
    return 0;
}