/*
String Streams:
    std::stringstream is a C++ stream class from the <sstream> header that lets you treat
    strings like streams (similar to cin/cout but working on strings instead of console I/O).
    So instead of reading from or writing to the keyboard/screen, you're reading from or writing to a std::string.
    It is especially useful for parsing strings, converting between data types, and formatting string content.
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    int num; char comma;
    while (ss>>num) {
        result.push_back(num);
        ss>>comma;
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}