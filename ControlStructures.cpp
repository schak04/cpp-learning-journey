#include <iostream>
using namespace std;

// C++ Control Structures are of 3 types:
// 1. Sequence structures
// 2. Selection structures
// 3. Loop structures

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    // if(age<0){
    //     cout<<"You aren't born yet!\nHow did you even type your age?!!";
    // }
    // else if(age>=0 && age<18){
    //     cout<<"You can't come to the party, kiddo";
    // }
    // else if (age==18){
    //     cout<<"You can come to the party. No drinking though!";
    // }
    // else if(age>18 && age<=40){
    //     cout<<"You are welcome to the party!";
    // }
    // else{
    //     cout<<"You're kinda old for partying and stuff - don't ya think?";
    // }

    switch (age)
    {
    case 18:
        cout<<"You're 18"<<endl;
        break;
    case 25:
        cout<<"You're 25"<<endl;
        break;
    case 30:
        cout<<"You're 30"<<endl;
        break;

    default:
        cout<<"No special cases matched"<<endl;
        break;
    }
    cout<<"Done with switch case";
    return 0;
}
