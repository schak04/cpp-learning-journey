#include <iostream>
#include <string>
using namespace std;

/* Inheritance */

// // 1
// class Student {
//     private:
//     int rollno;
//     protected:
//     string section;
//     public:
//     void get_rollno() {
//         cout<<"Enter the roll number: ";
//         cin>>rollno;
//     }
//     void show_rollno() {
//         cout<<"Roll Number: "<<rollno<<endl;
//     }
// };

// class result:public Student {
//     private:
//     float fees;
//     public:
//     void get_data() {
//         get_rollno();
//         cout<<"Enter fees: ";
//         cin>>fees;
//         cout<<"Enter section: ";
//         cin>>section;
//     }
//     void display() {
//         show_rollno();
//         cout<<"Fees: "<<fees<<endl;
//         cout<<"Section: "<<section<<endl;
//     }
// };

// int main() {
//     result obj1;
//     obj1.get_data();
//     obj1.display();
//     // obj1.get_rollno(); // possible -- public
//     // obj1.show_rollno(); // possible -- public
//     // strcpy(obj1.section, "K23TQ"); // not possible -- protected
//     return 0;
// }

// // 2
// class base {
//     int a = 10;
//     protected:
//     int b = 20;
//     public:
//     int c = 30;
// };

// class child:public base {
//     public:
//     void show() {
//         // cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//     }
// };

// int main(){
//     child c;
//     cout<<c.c<<endl;
//     c.show();
//     return 0;
// }


/* Multiple Inheritance */

// class M {
//     protected:
//     int m;
//     public:
//     void get_m(int);
// };
// class N {
//     protected:
//     int n;
//     public:
//     void get_n(int);
// };
// class P:public M, public N {
//     public:
//     void display(void);
// };
// void M::get_m(int x) {
//     m = x;
// }
// void N::get_n(int y) {
//     n = y;
// }
// void P::display(void) {
//     cout<<"m = "<<m<<endl;
//     cout<<"n = "<<n<<endl;
//     cout<<"m*n = "<<m*n<<endl;
// }

// int main() {
//     P p;
//     p.get_m(10);
//     p.get_n(20);
//     p.display();

//     return 0;
// }


/* Handling ambiguity */

// class A {
//     public:
//     void show() {
//         cout<<"I am class A";
//     }
// };
// class B {
//     public:
//     void show() {
//         cout<<"I am class B";
//     }
// };
// class C: public A, public B {};

// int main() {
//     C obj;
//     obj.A::show();
// }


/* Handling diamond problem */

// class A {
//     public:
//     virtual void show() {
//         cout<<"I am class A";
//     }
// };
// class B: virtual public A {};
// class C: virtual public A {};
// class D: public B, public C {};

// int main() {
//     D obj;
//     obj.show();

//     return 0;
// }


/* Virtual Base CLass (Solution) - Resolving Ambiguity in hybrid inheritance */

// // Common base class
// class A {
// public:
//     A() { cout << "Constructor of A" << endl; }
//     void display() { cout << "Display A" << endl; }
// };

// // Base class B inheriting from A virtually
// class B : virtual public A {
// public:
//     B() { cout << "Constructor of B" << endl; }
// };

// // Base class C inheriting from A virtually
// class C : virtual public A {
// public:
//     C() { cout << "Constructor of C" << endl; }
// };

// // Derived class D inheriting from B and C
// class D : public B, public C {
// public:
//     D() { cout << "Constructor of D" << endl; }
// };

// int main() {
//     D d;         // Creating an instance of D
//     d.display(); // Calling display function from A

//     return 0;
// }


// class B {
//     protected:
//     int x;
//     public:
//     void get_dataB() {
//         cout<<"ENter value of x: ";
//         cin>>x;
//     }
// };
// class DB1: public virtual B {
//     protected:
//     int y;
//     public:
//     void get_dataDB1() {
//         cout<<"Enter value of y: ";
//         cin>>y;
//     }
// };
// class DB2: public virtual B {
//     protected:
//     int z;
//     public:
//     void get_dataDB2() {
//         cout<<"Enter value of z: ";
//         cin>>z;
//     }
// };
// class D: public DB1, public DB2 {
//     public:
//     void sum() {
//         int result;
//         result = x+y+z;
//         cout<<"Result: "<<result;
//     }
// };

// int main() {
//     D obj;
//     obj.get_dataB();
//     obj.get_dataDB1();
//     obj.get_dataDB2();
//     obj.sum();

//     return 0;
// }


/* Function Overriding in Inheritance */

// #include <iostream>
// using namespace std;

// class A {
//     public:
//     void show() {
//         cout<<"I am A";
//     }
// };

// class B: public A {
//     public:
//     void show() {
//         cout<<"I am B";
//     }
// };

// int main(){
//     B obj;
//     obj.A::show();
//     return 0;
// }


/* Order of execution of Constructors & Destructors during Inheritance */

/*
If we have a parameterized constructor in the base class, then we must also have that in its derived class(es)
If we have a parameterized constructor in a derived class, then it isn't mandatory to have that in its base class

The class having the virtual keyword is called first.
*/

// #include <iostream>
// using namespace std;

// class A {
//     public:
//     A(int a) {
//         cout<<"Constructor of A "<<a<<endl;
//     }
//     ~A() {
//         cout<<"Destructor of A"<<endl;
//     }
// };

// class B: public A {
//     public:
//     B(int b):A(b) {
//         cout<<"Constructor of B "<<b<<endl;
//     }
//     ~B() {
//         cout<<"Destructor of B"<<endl;
//     }
// };

// int main(){
//     B obj(10);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A {
//     public:
//     A() {
//         cout<<"Constructor of A"<<endl;
//     }
//     ~A() {
//         cout<<"Destructor of A"<<endl;
//     }
// };

// class B {
//     public:
//     B() {
//         cout<<"Constructor of B"<<endl;
//     }
//     ~B() {
//         cout<<"Destructor of B"<<endl;
//     }
// };

// class C: public A, virtual public B {
//     public:
//     C() {
//         cout<<"Constructor of C"<<endl;
//     }
//     ~C() {
//         cout<<"Destructor of C"<<endl;
//     }
// };

// int main(){
//     C obj;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A {
//     int x, y;
//     public:
//     A(int r, int s) {
//         x = r;
//         y = s;
//         cout<<"Base class constructor called with values: "<<x<<" "<<y<<endl;
//     }
//     ~A() {
//         cout<<"Base class destructor called"<<endl;
//     }
// };

// class B: public A {
//     int l, m;
//     public:
//     B(int p, int q, int r, int s):A(r,s) {
//         l = p;
//         m = q;
//         cout<<"Derived class B constructor called with values: "<<l<<" "<<m<<endl;
//     }
//     ~B() {
//         cout<<"Derived class B destructor called"<<endl;
//     }
// };

// class C: public B {
//     int n, m;
//     public:
//     C(int u, int v, int p, int q, int r, int s):B(p,q,r,s) {
//         n = u;
//         m = v;
//         cout<<"Derived class C constructor called with values: "<<n<<" "<<m<<endl;
//     }
//     ~C() {
//         cout<<"Derived class C destructor called"<<endl;
//     }
// };

// int main(){
//     C obj(1, 2, 3, 4, 5, 6);

//     return 0;
// }