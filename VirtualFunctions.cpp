/*
- Virtual functions cannot be static.
- If a function were both virtual and static, it would conflict
    with the need for an object instance (required by virtual functions)
    and the lack of one (expected by static functions).
- A virtual function can be a friend function of another class.
- Virtual functions should be accessed using a pointer or reference of base class
    type, to achieve runtime polymorphism.
- Virtual destructors exist, while virtual constructors do not.
- early binding / static binding -> compile-time polymorphism. late binding / dynamic binding -> run-time polymorphism
- Pure Virtual Function: a virtual function which is always declared in the base class and is assigned with a 0
- Abstract class: a class designed to be used as a base class for other classes and cannot be instantiated on its own
                -> contains at least one pure virtual function
*/

// // program to show early and late bindings
// #include <iostream>
// using namespace std;

// class Base {
//     public:
//     virtual void print() {
//         cout<<"print base class"<<endl;
//     }
//     void show() {
//         cout<<"show base class"<<endl;
//     }
// };

// class Derived: public Base {
//     public:
//     void print() {
//         cout<<"print derived class"<<endl;
//     }
//     void show() {
//         cout<<"show derived class"<<endl;
//     }
// };

// int main(){
//     Base *bptr;
//     Derived d;
//     bptr = &d;
//     // virtual function, binded at run-time (late binding)
//     bptr->print();
//     // non-virtual function, binded at compile-time (early binding)
//     bptr->show();

//     return 0;
// }

