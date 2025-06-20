#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // const is used to create read-only variables
    // const -> constants -> can't be changed
    // const float pi = 3.14;
    // -> The value of pi here can't be changed later in the program

    int a = 10, b = 204, c = 3056;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    // right justified ^

    return 0;
}