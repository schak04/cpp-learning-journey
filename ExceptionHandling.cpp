/*
- Exceptions: Anomalies or unusual errors occuring in a program at runtime
- Types: Synchronous and Asynchronous. In C++, we can only handle synchronous exceptions.
- Steps to handle exceptions:
    1. hit the exception (find the problem)
    2. throw the exception (inform an error has occurred)
    3. catch the exception (receive error info)
    4. handle the exception (take corrective actions)
- Keywords:
    1. try
    2. catch
    3. throw
- The catch block that catches an exception must immediately follow the try block that throws the exception.
- Implicit type conversion doesn't happen to primitive types. 
- If an exception is thrown and not caught anywhere, the program terminates abnormally. 
- In C++, try-catch blocks can be nested. 
- If there are statements after throw, and exception has been thrown, then 
*/

// #include <iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cout << "Enter the values of a and b: ";
//     cin >> a >> b;

//     int x = a - b;
//     cout << "x = a - b = " << x << endl;

//     try {
//         if (x != 0) {
//             cout << "Result (a / x) = " << a / x;
//         }
//         else {
//             throw(x);
//         }
//     }
//     catch(int) {
//         cout << "Exception Caught: x = " << x;
//     }
//     cout << endl;

//     return 0;
// }


/* Using throw outside of try block or invoking function that generates the exception */

// #include <iostream>
// using namespace std;

// void divide(int x, int y, int z) {
//     cout<<"We are inside the function."<<endl;
//     if (x-y!=0) {
//         int R = z/(x-y);
//         cout<<"Result = "<<R<<endl;
//     }
//     else {
//         throw(x-y);
//     }
// }

// int main(){
//     try {
//         cout<<"We are inside the try block."<<endl;
//         divide(10,20,30);
//         divide(10,10,20);
//     }
//     catch(int) {
//         cout<<"Caught the exception."<<endl;
//     }

//     return 0;
// }

/* Multiple Catch Statements */

// #include <iostream>
// using namespace std;

// void Test(int x) {
//     try {
//         if (x==1) {
//             throw x;
//         }
//         else if (x==0) throw 'x';

//         else if (x==-1) throw 1.0;

//         cout<<"End of try block"<<endl;
//     }
//     catch(char) {
//         cout<<"Caught a character"<<endl;
//     }
//     catch(int) {
//         cout<<"Caught an integer"<<endl;
//     }
//     catch(double) {
//         cout<<"Caught a double"<<endl;
//     }
//     cout<<"End of try-catch system"<<endl;
// }

// int main(){
//     cout<<"Testing multiple catches.."<<endl;

//     cout<<"x == 1"<<endl;
//     Test(1);
    
//     cout<<"x == 0"<<endl;
//     Test(0);

//     cout<<"x == -1"<<endl;
//     Test(-1);

//     cout<<"x == 2"<<endl;
//     Test(2);

//     return 0;
// }


/* Generic Catch */

// #include <iostream>
// using namespace std;

// void test(int x) {
//     try {
//         if (x==0) throw x;
//         if (x==-1) throw 'x';
//         if (x==1) throw 1.0f;
//     }
//     catch(int x) {
//         cout<<"Integer value"<<endl;
//     }
//     catch(...) {  // catch all
//         cout<<"Caught an exception"<<endl;
//     }
// }

// int main(){
//     cout<<"Testing generic catch"<<endl;
//     test(-1);
//     test(0);
//     test(1);

//     return 0;
// }


/*  */

// #include <iostream>
// #include <string.h>
// using namespace std;

// class error {
//     int err_code;
//     char *err_desc;
//     public:
//     error(int c, char *d) {
//         err_code = c;
//         err_desc = new char[strlen(d)+1];
//         strcpy(err_desc, d);
//     }
//     void err_display() {
//         cout<<"Error code: "<<err_code<<endl;
//         cout<<"Error desc: "<<err_desc<<endl;
//     }
// };

// int main(){
//     try {
//         error obj(99, "This is an error");
//         throw obj;
//     }
//     catch(error e) {
//         cout<<"Exception caught successfully"<<endl;
//         e.err_display();
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     try {
//         int x, y;
//         cin>>x>>y;
//         if (y!=0) {
//             cout<<"Result: "<<x/y<<endl;
//         }
//         else {
//             throw y;
//         }
//     }
//     catch(int) {
//         cout<<"Hello World"<<endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

class A {
    public:
    A() {
        cout<<"I am a constructor."<<endl;
    }
    ~A() {
        cout<<"I am a destructor."<<endl;
    }
};

int main(){
    try {
        A obj;
        throw "Hello";
    }
    catch(char c) {
        cout<<"Catch block called: "<<c<<endl;
    }

    return 0;
}