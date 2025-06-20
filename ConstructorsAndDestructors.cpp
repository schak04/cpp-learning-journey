// #include <iostream>
// using namespace std;

// // class ABC {
// //     public:
// //     int a, b;
// //     ABC() {
// //         cout<<"Hello World";
// //     }
// // };

// class Rectangle {
//     private:
//     int length, breadth;
//     public:
//     // // Rectangle() {
//     // //     length=5, breadth=6;
//     // // }
//     Rectangle(int a, int b) {
//         length = a, breadth = b;
//     }
//     int area() {
//         int a=length*breadth;
//         cout<<"Area is "<<a;
//     }

//     // private:
//     // int l, w;
//     // public:
//     // Rectangle(int a, int b):l(a),w(b){}
//     // void area() {
//     //     int area=l*w;
//     //     cout<<area;
//     // }
// };

// // class A {
// //     int ID;
// //     public:
// //     A(int i){
// //         ID = i;
// //         cout<<"Constructor called. ID: "<<ID<<endl;
// //     }
// //     ~A(){
// //         cout<<"Destructor called. ID: "<<ID<<endl;
// //     }
// // };

// // class Counter{
// //     int a;
// //     public:
// //     Counter(int num) {
// //         a=num;
// //     } // data type of object = name of its class
// //     Counter(Counter &obj) { // copy constructor
// //         a=obj.a;
// //     }
// //     void show() {
// //         cout<<a<<endl;
// //     }  
// // };

// int main(){
//     // ABC obj;
//     // obj.a=20;
//     // obj.b=40;
//     // cout<<endl;
//     // cout<<obj.a<<endl;
//     // cout<<obj.b<<endl;

//     // Rectangle r1;
//     Rectangle r1(5,6);
//     r1.area();

//     // Counter object1(10);
//     // Counter object2(object1);
//     // object1.show();
//     // object2.show();

//     // Rectangle obj(2,3);
//     // obj.area();

//     // A a(1);
//     // A b(2);
//     // A c(3);

//     return 0;
// }


/* Default Constructor */
// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     MyClass() {  // Default constructor
//         cout << "Default Constructor called!" << endl;
//     }
// };

// int main() {
//     MyClass obj;  // Default constructor will be called
//     return 0;
// }


/* Parameterized Constructor */
// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     MyClass(int x) {  // Parameterized constructor
//         cout << "Parameterized Constructor called with value: " << x << endl;
//     }
// };

// int main() {
//     MyClass obj(10);  // Parameterized constructor will be called with argument 10
//     return 0;
// }


/* Copy Constructor */
// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     int value;
    
//     MyClass(int x) {  // Parameterized constructor
//         value = x;
//         cout << "Constructor called with value: " << value << endl;
//     }

//     MyClass(const MyClass& obj) {  // Copy constructor
//         value = obj.value;
//         cout << "Copy Constructor called, value copied: " << value << endl;
//     }
// };

// int main() {
//     MyClass obj1(10);  // Constructor called
//     MyClass obj2 = obj1;  // Copy constructor called
//     return 0;
// }


/* Constructor with Default Parameters */
// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     MyClass(int x = 5) {  // Constructor with a default parameter
//         cout << "Constructor called with value: " << x << endl;
//     }
// };

// int main() {
//     MyClass obj1;  // Default value of 5 will be used
//     MyClass obj2(20);  // Constructor called with value 20
//     return 0;
// }


/* Destructor */
// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     MyClass() {  // Constructor
//         cout << "Constructor called!" << endl;
//     }

//     ~MyClass() {  // Destructor
//         cout << "Destructor called!" << endl;
//     }
// };

// int main() {
//     MyClass obj;  // Constructor called, destructor will be called automatically at the end of scope
//     return 0;
// }


/* Destructor in Derived Class */
// #include <iostream>
// using namespace std;

// class Base {
// public:
//     Base() {
//         cout << "Base class constructor called!" << endl;
//     }

//     virtual ~Base() {  // Virtual destructor in base class
//         cout << "Base class destructor called!" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     Derived() {
//         cout << "Derived class constructor called!" << endl;
//     }

//     ~Derived() {  // Destructor in derived class
//         cout << "Derived class destructor called!" << endl;
//     }
// };

// int main() {
//     Base* ptr = new Derived();  // Base class pointer pointing to Derived class object
//     delete ptr;  // Destructor will be called in order (derived class destructor followed by base class destructor)
//     return 0;
// }


/* Constructor Initialization List */
// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     int x;
//     MyClass(int a) : x(a) {  // Constructor initialization list
//         cout << "Constructor called, x = " << x << endl;
//     }
// };

// int main() {
//     MyClass obj(10);  // Constructor called with initialization
//     return 0;
// }


/* Copy Constructor with Dynamic Memory Allocation */
// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     int* ptr;
    
//     MyClass(int val) {  // Constructor
//         ptr = new int;
//         *ptr = val;
//         cout << "Constructor called, ptr = " << *ptr << endl;
//     }

//     MyClass(const MyClass& obj) {  // Copy constructor
//         ptr = new int;
//         *ptr = *(obj.ptr);
//         cout << "Copy Constructor called, ptr copied: " << *ptr << endl;
//     }

//     ~MyClass() {  // Destructor
//         delete ptr;
//         cout << "Destructor called, memory freed!" << endl;
//     }
// };

// int main() {
//     MyClass obj1(10);  // Constructor called
//     MyClass obj2 = obj1;  // Copy constructor called
//     return 0;
// }


/* Dynamic Constructor */
// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     int* ptr;
    
//     // Dynamic Constructor
//     MyClass(int size) {
//         ptr = new int[size];  // Dynamically allocate memory for an array of integers
//         cout << "Dynamic Constructor called! Array of size " << size << " allocated." << endl;
//     }

//     // Destructor to free the dynamically allocated memory
//     ~MyClass() {
//         delete[] ptr;  // Deallocate memory to prevent memory leak
//         cout << "Destructor called! Memory freed!" << endl;
//     }
// };

// int main() {
//     MyClass obj(5);  // Dynamic constructor called, memory for array of 5 integers is allocated
//     return 0;
// }
