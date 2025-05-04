/*
Templates:
    A template is a simple yet very powerful tool in C++, used for generic programming. 
    The simple idea is to pass the data type as a parameter so that
    we don’t need to write the same code for different data types.
- Types of templates:
    1. Class Templates (Generic Classes)
    2. Function Templates (Generic Functions)
- A template function may be overloaded using another template function or an ordinary function with the same name.
- Function overloading is used when multiple functions do similar operations, while templates
  are used when multiple functions do the same operations for different data types.

- Class templates with Inheritance:
    Syntax:
        template <typename T> 
        class Base {
            T value;
            public: 
            Base(T val) : value(val) {}
            T getValue() {
                return value;
            }
        };
        class Derived : public Base<int> {
            public: 
            Derived(int val) : Base(val) {}
        };

*/


/*-------- Function Templates --------*/


// #include <iostream>
// using namespace std;

// template<class T>
// T square(T num) {
//     return num*num;
// }

// int main() {
//     int num1 = 3;
//     cout<<"Square of "<<num1<<" = "<<square<int>(num1)<<endl;
//     float num2 = 5.6;
//     cout<<"Square of "<<num2<<" = "<<square<float>(num2)<<endl;
//     double num3 = 123.456;
//     cout<<"Square of "<<num3<<" = "<<square<float>(num3)<<endl;
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// #define MAX 5

// template<class Type>
// Type sum(Type A[]) {
//     Type Total = 0;
//     for (int i = 0; i<MAX; i++) {
//         Total += A[i];
//     }
//     return Total;
// }
// template<class Type>
// void read(Type A[]) {
//     for (int i = 0; i<MAX; i++) {
//         cin>>A[i];
//     }
// }

// int main() {
//     int Array[MAX];
//     float Array1[MAX];
//     cout<<"Enter the integer array elements: ";
//     read<int>(Array);
//     cout<<"Sum of elements = "<<sum<int>(Array)<<endl;
//     cout<<"Enter the float array elements: ";
//     read<float>(Array1);
//     cout<<"Sum of elements = "<<sum<float>(Array1);
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// template <class T>
// void swapp(T &a, T &b) {
//     T temp = a;
//     a = b;
//     b = temp;
// }

// template <class T1, class T2>
// float average(T1 a, T2 b) {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// int main() {
//     int x, y;
//     cout<<"Enter the values of x and y (both int): "; 
//     cin>>x>>y;
//     cout<<"The average of "<<x<<" and "<<y<<" is "<<average(x, y)<<endl;
//     int u; float v;
//     cout<<"Enter the values of u (int) and v (float): "; 
//     cin>>u>>v;
//     cout<<"The average of "<<u<<" and "<<v<<" is "<<average(u, v)<<endl;
    
//     int a, b;
//     cout<<"Enter a (int): ";
//     cin>>a;
//     cout<<"Enter b (int): ";
//     cin>>b;
//     cout<<"a = "<<a<<" and b = "<<b<<endl;
//     cout<<"Swapping values of a and b..."<<endl;
//     swapp(a, b);
//     cout<<"a = "<<a<<" and b = "<<b<<endl;

//     return 0;
// }


/* Function template with multiple parameters */

// #include <iostream>
// using namespace std;

// template<class T1, class T2>
// void multiply(T1 num1, T2 num2) {
//     cout<<num1*num2;
// }

// int main() {
//     int num1 = 3;
//     float num2 = 4.5;
//     cout<<"Product of num1 and num2 = ";
//     multiply<int, float>(num1, num2);
//     cout<<endl;

//     multiply<int, int>(2.2);
//     float num3 = 7.8;
//     int num4 = 3;
//     cout<<"Product of num3 and num4 = ";
//     multiply<float, int>(num3, num4);
//     cout<<endl;
//     multiply<float, float>(2.3, 4.5);
    
//     return 0;
// }


/* Template Function Overloading -> exact match takes the highest priority */

// #include <iostream>
// using namespace std;

// template<class T>
// void display(T x) {
//     cout<<"Template display: "<<x<<"\n";
// }
// template<class T1, class T2, class T3>
// void display(T1 x, T2 y, T3 z) {
//     cout<<"Template display: "<<x<<" "<<y<<" "<<z<<"\n";
// }
// void display(int x) {
//     cout<<"Explicit display: "<<x<<"\n";
// }
// void display(char y) {
//     cout<<"Explicit display: "<<y<<"\n";
// }

// int main() {
//     display(100);
//     display(56.78);
//     display('a');
//     display(5.98, 'b', 89);
    
//     return 0;
// }


/*-------- Class Templates --------*/


/* Max of two */

// #include <iostream>
// using namespace std;

// template <class T>
// class abc {
//     T a, b;
//     public:
//     abc(T x, T y) {
//         a = x;
//         b = y;
//     }
//     T max1() {
//         return (a>b?a:b);
//     }
// };

// int main() {
//     abc<int>obj(10, 20);
//     cout<<"Max: "<<obj.max1()<<endl;
//     abc<float>obj1(10.2, 34.7);
//     cout<<"Max: "<<obj1.max1()<<endl;
//     abc<char>obj2('A', 'a');
//     cout<<"Max: "<<obj2.max1()<<endl;
    
//     return 0;
// }


/* Sum of array (int and float) elements */

// #include <iostream>
// using namespace std;

// template <class T>
// class abc {
//     T* a;
//     int size;
//     public:
//     abc() {
//         cout<<"Enter the size of array: ";
//         cin>>size;
//         a = new T[size];
//         cout<<"Enter the array elements: ";
//         for (int i = 0; i<size; i++) {
//             cin>>a[i];
//         }
//     }
//     T sum1() {
//         T sum = 0;
//         for (int i = 0; i<size; i++) {
//             sum = sum + a[i];
//         }
//             return sum;
//     }
// };

// int main() {
//     abc<int>obj1;
//     cout<<"Sum of integer array elements: "<<obj1.sum1()<<endl;
//     abc<float>obj2;
//     cout<<"Sum of float array elements: "<<obj2.sum1()<<endl;    
    
//     return 0;
// }


/* Class Template with Multiple Parameters */

// #include <iostream>
// using namespace std;

// template<class T1, class T2>
// class myClass{
//     public:
//         T1 data1;
//         T2 data2;
//         myClass(T1 a,T2 b){
//             data1 = a;
//             data2 = b;
//         }
//     void display(){
//         cout<<this->data1<<" "<<this->data2;
//     }
// };

// int main()
// {
//     myClass<int, char> obj(1, 'c');
//     obj.display();
// }


/* Passing non-type parameters to templates */

// #include <iostream>
// using namespace std;

// template<class T, int size>
// class A {
//     public:
//     T arr[size];
//     void insert1() {
//         int i = 1;
//         for (int j = 0; j<size; j++) {
//             arr[j] = i;
//             i++;
//         }
//     }
//     void display() {
//         for (int i = 0; i<size; i++) {
//             cout<<arr[i]<<" ";
//         }
//     }
// };

// int main() {
//     A<int, 10>t1;
//     t1.insert1();
//     t1.display();

//     return 0;
// }


/* Class Templates with Inheritance (Single-Level) */

// #include <iostream>
// using namespace std;

// template<class A>
// class alpha {
//     protected:
//     A a;
//     public:
//     void check() {
//         cout<<"Hello"<<endl;
//     }
// };

// template <class C, class B>        // If you inherit from a class, the template parameter for the base class should 
// class beta: public alpha<C> {      // generally be placed first (before the parameters for the derived class).
//     private:
//     B b;
//     public:
//     void get() {
//         cin>>alpha<C>::a>>b;
//     }
//     void display() {
//         cout<<"a: "<<alpha<C>::a<<endl;
//         cout<<"b: "<<b<<endl;
//         alpha<C>::check();
//     }
// };

// int main() {
//     beta<int, float>b1;
//     beta<float, int>b2;
//     cout<<"Enter a(int) and b(float): ";
//     b1.get();
//     b1.display();
//     cout<<"Enter a(float) and b(int): ";
//     b2.get();
//     b2.display();
    
//     return 0;
// }


/* Dot product of two vectors of any type using template */

// #include <iostream>
// using namespace std;
 
// template <class T>
// class vector
// {
//     public:
//         T *arr;
//         int size;
//         vector(int m) {
//             size = m;
//             arr = new T[size];
//         }
//     T dotProduct(vector &v){
//         T d=0;
//         for (int i = 0; i < size; i++)
//         {
//             d+=this->arr[i]*v.arr[i];
//         }
//         return d;
//     }
// };
 
// int main()
// {
//     vector<float> v1(3); //vector 1 with a float data type
//     v1.arr[0] = 1.4;
//     v1.arr[1] = 3.3;
//     v1.arr[2] = 0.1;
//     vector<float> v2(3); //vector 2 with a float data type
//     v2.arr[0]=0.1;
//     v2.arr[1]=1.90;
//     v2.arr[2]=4.1;
//     float a = v1.dotProduct(v2);
//     cout<<a<<endl;
//     return 0;
// }


/* Class Templates with Default Parameters */

// #include <iostream>
// using namespace std;

// template <class T1=int, class T2=float, class T3=string>
// class Sapto {
//     public:
//     T1 a;
//     T2 b;
//     T3 c;
//     Sapto(T1 x, T2 y, T3 z) {
//         a = x;
//         b = y;
//         c = z;
//     }
//     void display() {
//         cout<<"\nThe value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//         cout<<"The value of c is "<<c<<endl;
//         cout<<endl;
//     }
// };

// int main() {
//     Sapto<> s(20, 6.4, "Awake");
//     s.display();
//     Sapto<float, string, int> sapto(6.4, "Asleep", 20);
//     sapto.display();

//     return 0;
// }