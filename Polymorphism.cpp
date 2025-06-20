#include <iostream>
using namespace std;

class B{
    public:
    virtual void show(){
        cout<<"Base class Show"<<endl;
    }
};

class D: public B{
    public:
    void show() {
        cout<<"Derived class Show"<<endl;
    }
};

int main(){
    B *bptr;
    B base;
    bptr = &base;
    cout<<"-------Early Binding-------"<<endl;
    cout<<"bptr points to base objects"<<endl;
    bptr->show();

    return 0;
}