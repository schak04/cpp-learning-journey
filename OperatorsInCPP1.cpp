#include <iostream>
using namespace std;

int c = 60;

int main(){
    // int a, b, c;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    // c = a+b;
    // cout<<"The value of local c which is the sum of a and b is " << c << endl;
    // cout<<"The value of global c is "<< ::c << endl;
    
    // float d = 34.4f;
    // long double e = 34.4l;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    // // :: is called the scope resolution operator
    // // 34.4 or a decimal number like this is considered as a double value by default
    // // If we add an 'f' or 'F' at the end, it is considered as a floating point number by the compiler
    // // For example: 34.4f
    // // Similarly 'l' or 'L' for long double
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    
    // float x = 905;
    // float &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    float w = 69.98;
    cout<<"The value of w as a float is "<<w<<endl;
    cout<<"The value of w as an integer is "<<int(w)<<endl;
    cout<<"The value of w as an integer is "<<(int)w<<endl;

    int s = 20;
    float d = 20.89;
    cout<<"s = "<<s<<endl<<"d = "<<d<<endl;
    cout<<"s + d = "<<s+d<<endl;
    cout<<"s + int(d) = "<<s+int(d)<<endl;
    cout<<"s + (int)d = "<<s+(int)d<<endl;

    return 0; 
} 