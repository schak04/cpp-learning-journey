#include <iostream>
using namespace std;

// Header files are of two types:
// 1. System header files
// 2. User-defined header files

// Operators In C++

int main(){
    int n1, n2;
    cout << "n1: ";
    cin >> n1;
    cout << "n2: ";
    cin >> n2;
    // endl works like \n as follows:
    // cout << "First Line" << endl << "Second Line" << endl;
    // --> same as:
    // cout << "First Line\nSecond Line\n";
    // cout << "Third Line\nFourth Line\n";

// Types of Operators

// 1. Arithmetic Operators
    cout << "The value of n1 + n2 is " << n1+n2 << endl;
    cout << "The value of n1 - n2 is " << n1-n2 << endl;
    cout << "The value of n1 * n2 is " << n1*n2 << endl;
    cout << "The value of n1 / n2 is " << n1/n2 << endl;
    cout << "The value of n1++ is " << n1++ << endl;
    cout << "The value of n1-- is " << n1-- << endl;
    cout << "The value of ++n1 is " << ++n1 << endl;
    cout << "The value of --n1 is " << --n1 << endl << endl;

// 2. Assignment Operators: Used to assign a value to a variable
// int a = 4;
// char d = 'd';

// 3. Comparison Operators
    cout << "The value of n1 == n2 is " << (n1 == n2) << endl;
    cout << "The value of n1 != n2 is " << (n1 != n2) << endl;
    cout << "The value of n1 < n2 is " << (n1 < n2) << endl;
    cout << "The value of n1 > n2 is " << (n1 > n2) << endl;
    cout << "The value of n1 <= n2 is " << (n1 <= n2) << endl;
    cout << "The value of n1 >= n2 is " << (n1 >= n2) << endl << endl;
    // '1' means 'true' and '0' means 'false'

// 4. Logical Operators 
    cout << "The value of the logical 'and' (&&) operator when used in ((n1==n2) && (n1<n2)) is " << ((n1==n2) && (n1<n2)) << endl;
    cout << "The value of the logical 'or' (||) operator when used in ((n1==n2) || (n1<n2)) is " << ((n1==n2) || (n1<n2)) << endl;
    cout << "The value of the logical 'not' (!) operator when used in (!(n1==n2)) is " << (!(n1==n2)) << endl << endl;

    return 0;
}