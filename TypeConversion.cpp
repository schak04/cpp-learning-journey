#include <iostream>
using namespace std;

// int main(){
//     float x=2.5;
//     cout<<x<<endl;
//     int y;
//     y = int(x);
//     cout<<y;
//     return 0;
// }


class Time {
    int hrs;
public:
    Time(int t) {
        hrs = t / 60; // Convert minutes to hours
    }

    // Conversion operator to allow implicit conversion to int
    operator int() const {
        return hrs;
    }
};

int main() {
    Time t(130); // 130 minutes
    int hours = t; // Implicit conversion from Time to int

    cout << "Hours: " << hours << endl; // Output: 2

    return 0;
}


// class Student {
//     private:
//     int rollno;
//     float fees;
//     public:
//     Student(int a, float m) {
//         rollno = a;
//         fees = m;
//     }
//     operator int() {
//         return rollno;
//     }
//     operator float() {
//         return fees;
//     }
// };

// int main() {
//     int j;
//     float f;
//     Student st(5, 4200.50);
//     j = st;
//     f = st;

//     cout<<"Value of j: "<<j<<"\n";
//     cout<<"Value of f: "<<f<<"\n";

//     return 0;
// }