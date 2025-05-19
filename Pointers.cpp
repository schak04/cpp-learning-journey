// & --> reference operator --> read as “address of”
// * --> dereference operator --> read as “value pointed by” or "value at"
// reference variable = alias for another variable
// it contains the address of a variable (like a pointer), but we don't need to dereference it (unlike a pointer)
// must be initialized when it is declared 

/* Pointers and Pointer Arithmetic */
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 10;
//     int y = 20;
//     int z = 30;

//     int *p1, *p2, *p3;
//     p1 = &x;
//     p2 = &y;
//     p3 = &z;

//     int s = p1 - p2;
//     cout << "Difference between pointers: " << s << endl;

//     return 0;
// }


/* Pointer Arithmetic with Arrays */
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *p1 = &arr[0];
//     int *p2 = &arr[3];

//     int diff = p2 - p1;
//     cout << "Difference between two pointers: " << diff << endl;

//     return 0;
// }


/* Dangling Pointer */
// #include <iostream>
// using namespace std;

// int main() {
//     int *ptr;
//     {
//         int v = 23;
//         ptr = &v;
//         cout << "Value (inside block): " << *ptr << "\n";
//         cout << "Address (inside block): " << ptr << "\n";
//     }
//     // Here, ptr is now a dangling pointer
//     cout << "Address (outside block): " << ptr << endl;
//     ptr = NULL; // Solution to dangling pointer

//     return 0;
// }


/* Using `this` Pointer */
// #include <iostream>
// using namespace std;

// class X {
// private:
//     int a;

// public:
//     void Set_a(int a) {
//         this->a = a;
//     }
//     void Print_a() {
//         cout << "a = " << a << endl;
//     }
// };

// int main() {
//     X obj;
//     obj.Set_a(5);
//     obj.Print_a();

//     return 0;
// }


/* Accessing Class Members Using Pointers */
// #include <iostream>
// using namespace std;

// class A {
//     int x;

// public:
//     void getdata() {
//         cout << "Enter a value for x: ";
//         cin >> x;
//     }
//     void showdata() {
//         cout << "The entered value is " << x << endl;
//     }
// };

// int main() {
//     A obj1;
//     A *ptr = &obj1;

//     ptr->getdata();
//     ptr->showdata();

//     return 0;
// }


/* Using Member Function Pointers */
// #include <iostream>
// using namespace std;

// class X {
// public:
//     int a;
//     void f(int b) {
//         cout << "The value of b is " << b << endl;
//     }
// };

// int main() {
//     int X::*ptri = &X::a;
//     void (X::*ptrf)(int) = &X::f;

//     X obj;
//     obj.*ptri = 10;

//     cout << "The value of a is " << obj.*ptri << endl;
//     (obj.*ptrf)(20);

//     return 0;
// }


/* Void Pointer */
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 10;
//     char ch = 'A';
//     void *gp;

//     gp = &x;
//     cout << "Integer value via void pointer: " << *(int *)gp << endl;

//     gp = &ch;
//     cout << "Character value via void pointer: " << *(char *)gp << endl;

//     return 0;
// }


/* Pointer to Pointer Example */
// #include <iostream>
// using namespace std;

// int main() {
//     int a, *p, **ptp;

//     cout << "Enter the value of a: ";
//     cin >> a;

//     p = &a;
//     ptp = &p;

//     cout << "Address of variable a using p: " << p << endl;
//     cout << "Value of variable a using p: " << *p << endl;

//     *p = *p + 20;
//     cout << "Modified value of variable a: " << *p << endl;

//     cout << "Address of pointer p using ptp: " << ptp << endl;

//     return 0;
// }


/* Array Pointer Arithmetic */
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *ptr = arr;

//     cout << "Accessing elements using pointer arithmetic:\n";
//     for (int i = 0; i < 5; i++) {
//         cout << "Element " << i << ": " << *(ptr + i) << endl;
//     }

//     return 0;
// }


/* Pointer Declaration without Initialization */
// #include <iostream>
// using namespace std;

// int main() {
//     int *arr;

//     cout << "Uninitialized pointer address: " << arr << endl;

//     return 0;
// }


/* Reference Variable Example */
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5;
//     int &b = a;

//     a = a + 2;
//     cout << "Value of a: " << a << endl;
//     cout << "Value of b (reference to a): " << b << endl;

//     return 0;
// }