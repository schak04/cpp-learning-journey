#include <iostream>
#include <conio.h>
using namespace std;

/*
For suffix, we need to provide the data type in the parameter for it to work.
*/

// class abc {
//     int x, y, z;
//     public:
//     abc(int a, int b, int c):x(a), y(b), z(c) {}
//     void operator - () {
//         x = -x;
//         y = -y;
//         z = -z;
//     }
//     void display() {
//         cout<<x<<" "<<y<<" "<<z<<endl;
//     }
// };

// int main(){
//     abc s(10, -20, 30);
//     cout<<"Before operator overloading: ";
//     s.display();
//     -s;    // calling the operator function
//     cout<<"After operator overloading: ";
//     s.display();
//     return 0;
// }


// class sum {
//     public:
//     int b, a;
//     sum() {
//         b = 50;
//     }
//     void set_data() {
//         cout<<"Enter a: ";
//         cin>>a;
//     }
//     int operator+(sum s1) {
//         return (a+s1.b);
//     }
// };

// int main() {
//     int d;
//     sum s, t;
//     s.set_data();
//     d = s+t;
//     cout<<"Sum = "<<d<<endl;
//     return 0;
// }


// class Complex {
//     public:
//     int r, i;
//     Complex(int a = 0, int b = 0) : r(a), i(b) {}
//     Complex operator+(Complex &c) {
//         Complex temp;
//         temp.r = r + c.r;
//         temp.i = i + c.i;
//         return temp;
//     }
//     void display() {
//         cout<<r<<" + "<<i<<"i"<<endl;
//     }
// };

// int main() {
//     Complex c1(10, 20), c2(20, 30), c3;
//     c3 = c1 + c2;   
//     c3.display();
//     return 0;
// }


// class Complex {
// public:
//     int r, i;

//     Complex(int a, int b) : r(a), i(b) {}

//     friend Complex operator+(Complex c1, Complex c2);

//     void display() {
//         cout << r << " + " << i << "i" << endl;
//     }
// };

// Complex operator+(Complex c1, Complex c2) {
//     Complex temp(0, 0);
//     temp.r = c1.r + c2.r;
//     temp.i = c1.i + c2.i;
//     return temp;
// }

// int main() {
//     Complex c1(10, 20), c2(20, 30), c3(0, 0);
//     c3 = c1 + c2;
//     c3.display();
//     return 0;
// }