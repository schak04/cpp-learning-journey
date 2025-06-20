#include <iostream>

using namespace std;
int main()
{
    // /*Loops in C++:
    // There are three types of loops in C++:
    //     1. for loop
    //     2. while Loop
    //     3. do-while Loop
    // */

    // /*For loop in C++*/
    // // int i=1;
    // // cout<<i;
    // // i++;

    // // Syntax for for loop
    // // for(initialization; condition; updation)
    // // {
    // //     loop body(C++ code);
    // // }

    // // for (int i = 1; i <= 40; i++)
    // // {
    // //     /* code */
    // //     cout<<i<<endl;
    // // }

    // // Example of infinite for loop
    // // for (int i = 1; 34 <= 40; i++)
    // // {
    // //     /* code */
    // //     cout<<i<<endl;
    // // }

    // /*While loop in C++*/
    // // Syntax:
    // // while(condition)
    // // {
    // //     C++ statements;
    // // }

    // //  Printing 1 to 40 using while loop
    // // int i=1;
    // // while(i<=40){
    // //     cout<<i<<endl;
    // //     i++;
    // // }

    // // Example of infinite while loop
    // // int i = 1;
    // // while (true)
    // // {
    // //     cout << i << endl;
    // //     i++;
    // // }

    // /* do While loop in C++*/
    //     // Syntax:
    //     // do
    //     // {
    //     //     C++ statements;
    //     // }while(condition);
    //
    // //  Printing 1 to 40 using while loop
    // // int i=1;
    // // do{
    // //     cout<<i<<endl;
    // //     i++;
    // // }while(false);


    /* Practice */

    // for (int i = 1; i <= 100; i++) // to print 1 to 100
    // {
    //     cout << i << endl; // endl --> new line for every number
    // }

    // int i = 1; // while loop requires initialization outside the loop before we start it
    // while (i <= 100) // while loop to print 1 to 100
    // {
    //     cout << i << endl; // endl --> new line for every number
    //     i++; // increments i by 1 every time so that the loop progresses towards termination
    // } // loop ends when the condition becomes false, i.e. i>100

    // while (true) // infinite while loop for the ultimate truth to be printed infinitely many times
    // {
    //     cout << "Sapto is a handsome, charming, sexy and cool young man. \n";
    // }

    // int i = 1;
    // while (false) // wouldn't be executed cuz condition is false
    // {
    //     cout << i << endl;
    //     i++;
    // }
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (false); // would be executed once because of the do but not any more cuz condition false

    /* Multiplication Table of 6 */

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << "6 * " << i << " = " << 6*i << endl;
    // }

    return 0;
}
