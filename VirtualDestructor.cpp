// Virtual destructors exist, while virtual constructors do not.

#include <iostream>
using namespace std;

class Base {
    public:
    Base() {
        cout<<"Constructor of Base"<<endl;
    }
    virtual ~Base() {
        cout<<"Destructor of Base"<<endl;
    }
};

class Derived: public Base {
    public:
    Derived() {
        cout<<"Constructor of Derived"<<endl;
    }
    ~Derived() {
        cout<<"Destructor of Derived"<<endl;
    }
};

int main(){
    Base *ptr;
    ptr = new Derived;
    delete ptr;

    return 0;
}