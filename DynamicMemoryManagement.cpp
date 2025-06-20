/*
Dynamic Memory Management in C++:

Allocation syntax:
    dataType *ptrName = new dataType; -> for one memory location
    dataType *ptrName = new dataType[size]; -> for array of memory locations
Deallocation syntax:
    delete ptrName; -> for one memory location
    delete[] ptrName -> for array of memory locations
*/


// #include <iostream>
// using namespace std;

// int main() {
//     int *p = nullptr;
//     p = new int;
//     // if (!p) {
//     //     cout<<"Memory allocation failure!"<<endl;
//     //     exit(1);
//     // }
//     if (p==nullptr) {
//         cout<<"Memory allocation failure!"<<endl;
//         exit(1);
//     }
//     else {
//         cout<<"Memory allocated!"<<endl;
//         *p = 12;
//         cout<<"Integer value stored is: "<<*p<<endl;
//         delete p;
//         cout<<"Memory deallocated!"<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     float *p = nullptr;
//     float *r = nullptr;
//     float *t = nullptr;
//     float *si = nullptr;
//     p = new float;
//     r = new float;
//     t = new float;
//     si = new float;
//     if (p==nullptr || r==nullptr || t==nullptr || si == nullptr) {
//         cout<<"Memory allocation failure";
//         exit(1);
//     }
//     cout<<"Enter principle, rate and time: ";
//     cin>>*p>>*r>>*t;
//     *si=(0.01)*(*p)*(*r)*(*t);
//     cout<<"Simple interest is: "<<*si;
//     delete p;
//     delete r;
//     delete t;
//     delete si;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int* p = new int(29);
//     cout<<"Value of p: "<<*p<<endl;

//     float* r = new float(75.25);
//     cout<<"Value of r: "<<*r<<endl;

//     int n = 5;
//     int* q = new int[n]{1, 2, 3, 4, 5};
//     cout<<"Values in array: ";
//     for (int i=0; i<n; ++i) {
//         cout<<q[i]<<" ";
//     }

//     delete p;
//     delete r;
//     delete[] q;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int *arr;
//     int size;

//     cout<<"Enter the size of integer array: ";
//     cin>>size;
//     cout<<"Creating an array of size: "<<size<<endl;

//     arr = new int[size];
//     if (arr==nullptr) {
//         cout<<"Memory allocation failure"<<endl;
//         exit(1);
//     }
//     else {
//         cout<<"Memory allocation successful"<<endl;
//         cout<<"Enter the array elements: ";
//         for (int i=0; i<size; i++) {
//             cin>>*(arr+i);
//         }
//         cout<<"Entered elements are: ";
//         for (int i=0; i<size; i++) {
//             cout<<*(arr+i)<<" ";
//         }
//     }

//     delete[] arr;
//     cout<<"\nMemory deallocated.";

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int size;
//     double sum = 0.0;
//     cout<<"Enter the size of the array: ";
//     cin>>size;
//     double *arr = new double[size];
//     cout<<"Enter the elements of the array: ";
//     for (int i=0; i<size; i++) {
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     cout<<"Sum of the elements of the array: "<<sum<<endl;
//     double avg = sum/(size);
//     cout<<"Average of the elements of the array: "<<avg<<endl;

//     delete[] arr;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Array {
//     int *arr;
//     int size;
//     public:
//     void getData(int n) {
//         size = n;
//         arr = new int[size];
//         cout<<"Enter the elements of the array: ";
//         for (int i=0; i<size; i++) {
//             cin>>arr[i];
//         }
//     }
//     int getSum() {
//         int sum = 0;
//         for (int i=0; i<size; i++) {
//             sum+=arr[i];
//         }
//         return sum;
//     }
//     void displayData() {
//         cout<<"Array: ";
//         for (int i=0; i<size; i++) {
//             cout<<arr[i]<<" ";
//         }
//         cout<<"\nSum of elements = "<<getSum()<<endl;
//     }
//     ~Array() {
//         delete[] arr;
//         cout<<"Memory deallocated."<<endl;
//     }
// };

// int main() {
//     Array a;
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     a.getData(n);
//     a.displayData();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Employee {
//     int id;
//     float salary;
//     public:
//     void input() {
//         cout<<"Enter ID: ";
//         cin>>id;
//         cout<<"Enter salary: ";
//         cin>>salary;
//     }
//     void display() {
//         cout<<id<<" "<<salary;
//     }
// };

// int main() {
//     int n;
//     cout<<"Enter number of employees: ";
//     cin>>n;
//     Employee *p = new Employee[n];
//     Employee *d = p;
//     Employee *flag = p;
//     if (p==nullptr) {
//         cout<<"Memory allocation failure";
//         exit(1);
//     }
//     for (int i=0; i<n; i++) {
//         p->input();
//         p++;
//     }
//     for (int i=0; i<n; i++) {
//         d->display();
//         d++;
//     }

//     delete[] flag;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Sample {
//     public:
//     Sample() {
//         cout<<"Constructor called"<<endl;
//     }
//     ~Sample() {
//         cout<<"Destructor called"<<endl;
//     }
// };

// int main() {
//     int n;
//     cin>>n;
//     Sample *obj1 = new Sample[n];
//     delete[] obj1;

//     return 0;
// }

