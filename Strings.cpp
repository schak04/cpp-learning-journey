// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
    // string s1("man");
    // string s2 = "hi";
    // string s3;
    // s3=s1;
    // cout<<"s3 = "<<s3<<endl;

    // s3="neither "+s1+" nor";
    // s3+=s2;
    // cout<<"s3 = "<<s3<<endl;
    // s1.swap(s2);
    // cout<<s1<<" nor "<<s2<<endl;


    // string s1("12345");
    // string s2("abcde");
    // cout<<s1<<" "<<s2<<endl;

    // s1.insert(4, s2);
    // cout<<s1<<endl;

    // s1.erase(4, 5);
    // cout<<s1<<endl;

    // s2.replace(1, 3, s1);
    // cout<<s2<<endl;


    // string s1("12345");
    // string s2("abcde");

    // s1.append(s2);
    // cout<<s1<<endl;

    // s1.append(s2, 1, 2);
    // cout<<s1;


    // string str = "Welcome";
    // cout<<"Size = "<<str.size()<<endl;
    // cout<<"Length = "<<str.length()<<endl;
    // cout<<"Max Size = "<<str.max_size()<<endl;
    // cout<<"Empty: "<<(str.empty()? "Yes" : "No")<<endl;


    // string str = "Hello, World!";
    // string sub = str.substr(0, 5); // sub == "Hello"
    // cout<<sub;


    // string str1 = "Hello, ";
    // string str2 = "World!";
    
    // str1 += str2;
    // cout << str1 << endl; // Output: Hello, World!
    
    // // Finding a substring
    // size_t found = str1.find("World");
    // if (found != string::npos) {
    //     cout << "Found 'World' at index: " << found << endl;
    // }
    
    // string str1 = "Hello, Universe!";
    // string user_substring;

    // // Get the substring from the user
    // cout << "Enter a substring to search for: ";
    // getline(cin, user_substring);

    // // Search for the user-defined substring
    // size_t found = str1.find(user_substring);

    // // Check if the substring was found
    // if (found != string::npos) {
    //     cout << "Found '" << user_substring << "' at index: " << found << endl;
    // } else {
    //     cout << "'" << user_substring << "' not found!" << endl;
    // }


    // return 0;
// }


/* Appending to a String */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello";
//     str.append(" World");  // Append " World" to the string
//     cout << "After append: " << str << endl;  // Output: Hello World
//     return 0;
// }


/* Assigning a New Value to a String */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     str.assign("Hello, C++!");  // Assign a new string to `str`
//     cout << "Assigned string: " << str << endl;  // Output: Hello, C++!
//     return 0;
// }


/* Inserting into a String */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello!";
//     str.insert(5, " C++");  // Insert " C++" at position 5
//     cout << "After insert: " << str << endl;  // Output: Hello C++!
//     return 0;
// }


/* Erasing a Portion of the String */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello C++!";
//     str.erase(5, 5);  // Erase 5 characters starting from index 5
//     cout << "After erase: " << str << endl;  // Output: Hello!
//     return 0;
// }


/* Replacing Part of the String */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello World";
//     str.replace(6, 5, "C++");  // Replace "World" with "C++"
//     cout << "After replace: " << str << endl;  // Output: Hello C++
//     return 0;
// }


/* Resizing a String */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello";
//     str.resize(10, '*');  // Resize to 10 characters, filling with '*' if shorter
//     cout << "After resize: " << str << endl;  // Output: Hello*****
//     return 0;
// }


/* Clearing the String */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello";
//     str.clear();  // Clear the contents of the string
//     cout << "After clear: " << str << endl;  // Output: (empty string)
//     return 0;
// }


/* Pushing Back a Character */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello";
//     str.push_back('!');  // Add '!' to the end of the string
//     cout << "After push_back: " << str << endl;  // Output: Hello!
//     return 0;
// }


/* Popping Back a Character */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello!";
//     str.pop_back();  // Remove the last character ('!')
//     cout << "After pop_back: " << str << endl;  // Output: Hello
//     return 0;
// }


/* Finding a Substring */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello, C++!";
//     size_t found = str.find("C++");  // Find the position of "C++"
//     if (found != string::npos) {
//         cout << "'C++' found at index: " << found << endl;  // Output: 7
//     } else {
//         cout << "'C++' not found!" << endl;
//     }
//     return 0;
// }


/* Comparing Two Strings */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str1 = "Hello";
//     string str2 = "World";
    
//     int result = str1.compare(str2);  // Compare str1 with str2
//     if (result == 0) {
//         cout << "Both strings are equal." << endl;
//     } else if (result < 0) {
//         cout << "str1 is less than str2." << endl;
//     } else {
//         cout << "str1 is greater than str2." << endl;
//     }
//     return 0;
// }


/* Substring Function */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Hello C++!";
//     string sub = str.substr(6, 3);  // Extract substring starting at index 6 with length 3
//     cout << "Substring: " << sub << endl;  // Output: C++
//     return 0;
// }


/* Converting String to Integer */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "123";
//     int num = stoi(str);  // Convert string to integer
//     cout << "Converted number: " << num << endl;  // Output: 123
//     return 0;
// }


/* Converting Integer to String */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int num = 456;
//     string str = to_string(num);  // Convert integer to string
//     cout << "Converted string: " << str << endl;  // Output: 456
//     return 0;
// }


/*
String Streams:
    stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams.
    stringstream can be helpful in different types of parsing.
    The following operators/functions are commonly used here:
    Operator >> Extracts formatted data.
    Operator << Inserts formatted data.
    Method str() Gets the contents of underlying string device object.
    Method str(string) Sets the contents of underlying string device object.
    Its header file is sstream.
    It is part of the C++ Standard Library and requires including the <sstream> header. 
*/

