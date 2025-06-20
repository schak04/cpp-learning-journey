/*
ifstream -> to read from a file
ofstream -> to create/open and write to a file
To work with files, we first need to open them.
In C++ we can open files using ifstream and ofstream classes.
We can also use the open() function to open a file.
Once we're done workin with a file, we gotta close it using the close() function.

To check a file for errors, we can:
- Check the file object using an 'if' condition
- Use the is_open() function
- Use the fail() function
We can use the file object to take user input(>>) or show output(<<) [similar to how we use 'cin>>' and 'cout<<']

Instead of using ifstream and ofstream, we can also directly use the 'fstream' class for all file operations.
The constructor for fstream allows you to specify the file name and the mode for file operations.
ios::in -> opens the file to read (default for ifstream)
ios::out -> opens the file to write (default for ofstream)
ios::app -> opens the file and appends new content to it at the end

The std::stringstream class in C++ is used to perform input and output operations on strings, just like how we use
file streams (ifstream/ofstream) for files.
stringstream allows you to treat a string like a stream (similar to reading/writing from/to files), which is useful
for constructing or parsing strings.

C++ provides the fstream class with the seekg() for input and seekp() for output methods to move the file pointer to a specific position.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ofstream infile("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\K23TQ.txt");
    // infile<<"I am studying file handling in C++";
    // infile.close();

    // ofstream multTable("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\Multiplication_Table.txt");
    // cout<<"Enter the number whose multiplication table you want to be printed: ";
    // int num;
    // cin>>num;
    // for (int i=1; i<=10; i++) {
    //     multTable<<num<<" x "<<i<<" = "<<num*i<<endl;
    // }
    // multTable.close();

    // ofstream outfile("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\sample.txt");
    // outfile<<"Hello World";
    // outfile.close();
    // string s;
    // ifstream infile("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\sample.txt");
    // getline(infile, s);
    // cout<<s;
    // infile.close();
    // cout<<"\nProgram ran successfully!";

    // ofstream fout;
    // fout.open("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\country.txt");
    // fout<<"India"<<endl;
    // fout<<"Britain"<<endl;
    // fout<<"America"<<endl;
    // fout.close();
    // fout.open("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\capital.txt");
    // fout<<"Delhi"<<endl;
    // fout<<"London"<<endl;
    // fout<<"Washington"<<endl;
    // fout.close();
    
    // const
    // int n=80;
    // char s[n];
    // ifstream fin;
    // fin.open("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\country.txt");
    // while (fin) {
    //     fin.getline(s, n);
    //     cout<<s<<endl;
    // }
    // fin.close();
    // fin.open("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\capital.txt");
    // while (fin) {
    //     fin.getline(s, n);
    //     cout<<s<<endl;
    // }
    // fin.close();
    // fout.open("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\country.txt", ios::app);
    // fout<<"Japan"<<endl;
    // fout.open("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\capital.txt", ios::app);
    // fout<<"Tokyo"<<endl;
    // cout<<"!Done";

    // char s[30];
    // ofstream fileout;
    // ifstream filein;
    // fileout.open("C:\\Users\\schak\\Documents\\Career and Studies\\XYZ\\File Handling CPP\\data", ios::app);
    // fileout<<"Hello World!"<<endl;
    // fileout.close();
    // filein.open("data", ios::in);
    // filein.getline(s,30);
    // cout<<s;    

    return 0;
}
