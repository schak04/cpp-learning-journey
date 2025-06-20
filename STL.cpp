/*
STL (Standard Template Library): Library of generic classes and functions. 
- Templates offer us the feature of generic programming with the help of generic
  functions and classes (we can create user-defined functions and class templates). 
- STL contains: 
    - algorithms: sort, search, find, accumulate and transform -> procedures to process data
    - containers: insertion, deletion, accessing -> store data -> use template classes
    - functors: often used in STL algorithms, custom calling criteria, and callback mechanisms
    - iterators: pointer like objects used to represent an element's position in a container
                used for working on a sequence of values -> objects that point to elements in a container
                -> types: input, output, bidirectional, and random-access
                -> support operations like dereferencing, increment, comparison
- The std::advance() function in C++ is used to move an iterator forward or backward by a specific number of positions.
    It is part of the <iterator> header in the Standard Template Library (STL).
    Key Points about std::advance():
        Purpose: Modify the position of an iterator without the need for a loop.
        Header: Defined in <iterator>.
        Usage: Works with all types of iterators, including random-access iterators (e.g., vector iterators),
        bidirectional iterators (e.g., list iterators), and forward iterators.
- The auto keyword in C++ is used for type inference, allowing the compiler to deduce the type of a variable
    automatically based on the value it is assigned. It simplifies code and reduces verbosity, especially when
    dealing with complex or long type names.

- Summary of vector vs list function usage in C++:
    1. **Vectors (and similar containers like deque, array):**
        - Use free functions from <algorithm> with iterators.
        - Example: std::sort(vec.begin(), vec.end());
    2. **Lists (and other sequence containers like forward_list):**
        - Use member functions for operations specific to the container.
        - Example: lst.sort();
    Key Difference:
        - Vectors use general-purpose algorithms with iterators.
        - Lists provide optimized member functions for linked list operations.
*/


/* Demonstrating vectors in C++ */
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 4, 5};
//     v.push_back(6);  // Add an element
//     v.pop_back();    // Remove the last element
//     for (int x : v)
//         cout << x << " ";  // Output: 1 2 3 4 5
//     return 0;
// }


/* Demonstrating lists in C++ */
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l = {10, 20, 30, 40};
//     l.push_front(5);  // Add to the front
//     l.push_back(50);  // Add to the end
//     l.remove(20);     // Remove element
//     for (int x : l)
//         cout << x << " ";  // Output: 5 10 30 40 50
//     return 0;
// }


/* Demonstrating common vector functions in C++ */
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {10, 20, 30, 40};

//     // Insert at the beginning
//     v.insert(v.begin(), 5);  // Insert 5 at index 0

//     // Insert at a specific position
//     v.insert(v.begin() + 2, 15);  // Insert 15 at index 2

//     // Insert at the end
//     v.push_back(50);  // Add 50 at the end

//     // Erase an element at a specific position
//     v.erase(v.begin() + 3);  // Remove element at index 3 (30)

//     // Erase the last element
//     v.pop_back();  // Remove the last element (50)

//     // Display elements
//     cout << "Vector elements: ";
//     for (int x : v)
//         cout << x << " ";  // Output: 5 10 15 40
//     cout << endl;

//     // Size and capacity
//     cout << "Size: " << v.size() << endl;  // Output: Size: 4
//     cout << "Capacity: " << v.capacity() << endl;

//     return 0;
// }


/* Demonstrating common list functions in C++ */
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l = {10, 20, 30, 40};

//     // Insert at the beginning
//     l.push_front(5);  // Add 5 to the front

//     // Insert at a specific position (using an iterator)
//     auto it = l.begin();
//     advance(it, 2);   // Move iterator to the 2nd position
//     l.insert(it, 15); // Insert 15 at the 2nd position

//     // Insert at the end
//     l.push_back(50);  // Add 50 to the end

//     // Erase an element at a specific position
//     it = l.begin();
//     advance(it, 3);   // Move iterator to the 3rd position
//     l.erase(it);      // Remove the element at position 3 (30)

//     // Erase the last element
//     l.pop_back();  // Remove the last element (50)

//     // Display elements
//     cout << "List elements: ";
//     for (int x : l)
//         cout << x << " ";  // Output: 5 10 15 40
//     cout << endl;

//     // Size
//     cout << "Size: " << l.size() << endl;  // Output: Size: 4

//     return 0;
// }


/* Demonstrating find() algorithm in C++ */
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 4, 5};
//     auto it = find(v.begin(), v.end(), 3);  // Search for 3
//     if (it != v.end())
//         cout << "Element found: " << *it;  // Output: Element found: 3
//     else
//         cout << "Element not found!";
//     return 0;
// }


/* Demonstrating count() algorithm in C++ */
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 2, 2, 4};
//     int count_2 = count(v.begin(), v.end(), 2);  // Count occurrences of 2
//     cout << "Number of 2s: " << count_2;  // Output: Number of 2s: 3
//     return 0;
// }


/* Demonstrating replace() algorithm in C++ */
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 4, 2};
//     replace(v.begin(), v.end(), 2, 99);  // Replace all 2s with 99
//     for (int x : v)
//         cout << x << " ";  // Output: 1 99 3 4 99
//     return 0;
// }


/* Demonstrating sort() algorithm in C++ */
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> v = {5, 3, 1, 4, 2};
//     sort(v.begin(), v.end());  // Sort in ascending order
//     // reverse(v.begin(), v.end());  // Make it descending
//     for (int x : v)
//         cout << x << " ";  // Output: 1 2 3 4 5
//     return 0;
// }


/* Demonstrating reverse() algorithm in C++ */
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 4, 5};
//     reverse(v.begin(), v.end());  // Reverse the order
//     for (int x : v)
//         cout << x << " ";  // Output: 5 4 3 2 1
//     return 0;
// }


/* Demonstrating iterators in C++ */
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {10, 20, 30, 40};
//     vector<int>::iterator it;
//     for (it = v.begin(); it != v.end(); ++it) {
//         cout << *it << " ";  // Output: 10 20 30 40
//     }
//     return 0;
// }


/* sorting elements in a vector */

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     vector<int> vec = {34, 6, 7, 3, 90, 1};
//     cout<<"Unsorted: ";
//     for (int i : vec) {
//         cout<<i<<" ";
//     }
//     cout<<"\nSorting..."<<endl;
//     sort(vec.begin(), vec.end());
//     cout<<"Sorted: ";
//     for (int i : vec) {
//         cout<<i<<" ";
//     }
    
//     return 0;
// }


/* copying */

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> source = {1, 2, 3, 4, 5};
//     vector<int> destination(5);
//     copy(source.begin(), source.end(), destination.begin());
//     for (int i : destination) {
//         cout<<i<<" ";
//     }

//     return 0;
// }


/* swapping */

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> v1 = {1, 2, 3};
//     vector<int> v2 = {4, 5, 6};
//     cout<<"Before swapping: "<<endl;
//     cout<<"v1: ";
//     for (int i : v1) {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"v2: ";
//     for (int i : v2) {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     swap(v1, v2);
//     cout<<"After swapping: "<<endl;
//     cout<<"v1: ";
//     for (int i : v1) {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"v2: ";
//     for (int i : v2) {
//         cout<<i<<" ";
//     }
//     cout<<endl;
    
//     return 0;
// }


/* insertion */

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     cout<<"Before insertion of 6: ";
//     for (int i : vec) {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     vec.push_back(6);
//     cout<<"After insertion of 6: ";
//     for (int i : vec) {
//         cout<<i<<" ";
//     }
    
//     return 0;
// }


/* functor Doubler that doubles each element of the vector when used with std::for_each */

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Doubler {
//     public:
//     void operator() (int& n) const {
//         n*=2;
//     }
// };

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     for_each(vec.begin(), vec.end(), Doubler());
//     for (int i : vec) {
//         cout<<i<<" ";
//     }
    
//     return 0;
// }


/* using an iterator to traverse a vector */

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     for (auto i = vec.begin(); i != vec.end(); i++) {
//         cout<<*i<<" ";
//     }
    
//     return 0;
// }


/* a simple vector program */

// #include<iostream>
// #include<vector>
// using namespace std;

// template <typename T>
// void display(vector<T> &v){
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     /*
//     Ways to create a vector:
//     vector<int> vec1; //zero length integer vector
//     vector<char> vec2(4); // 4-element character vector
//     vector<char> vec3(vec2); // 4-element character vector from vec2
//     vector<int> vec4(6, 13); // 6-element vector of 13s
//     cout<<vec4.size(); // prints the size of vec4
//     */

//     vector<int> vec1;
//     int element, size;
//     cout<<"Enter the size of your vector: ";
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"Enter an element to add to this vector: ";
//         cin>>element;
//         vec1.push_back(element);
//     }

//     // cout<<"Before the insertion of 566: ";
//     display(vec1);  
    
//     // vector<int> :: iterator iter = vec1.begin();
//     // vec1.insert(iter,566);

//     // cout<<"After the insertion of 566: ";
//     // display(vec1);  

//     return 0;
// }


/* lists */

// #include <bits/stdc++.h>
// using namespace std;

// void display(list<int> &l)
// {
//     list<int>::iterator p;
//     for (p = l.begin(); p != l.end(); p++)
//     {
//         cout << *p << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     list<int> list1;
//     list<int> list2(5);
//     for (int i = 0; i < 3; i++)
//     {
//         list2.push_back(i);
//     }
//     cout << "Displaying list1: ";
//     display(list1);
//     list<int>::iterator p;
//     for (p = list2.begin(); p != list2.end(); p++)
//     {
//         *p = 1;
//     }
//     cout << "Displaying list2: ";
//     display(list2);
//     cout << "Pushing elements at front: ";
//     list1.push_front(100);
//     display(list1);
//     cout << "Popping elements from front: ";
//     list2.pop_front();
//     display(list2);
//     cout << "Sorting first list: ";
//     list1.sort();
//     cout << "Sorting second list: ";
//     list2.sort();
//     display(list2);
//     cout << "Merging list: ";
//     list1.merge(list2);
//     display(list1);
//     cout << endl
//          << endl;
//     list1.reverse();
//     cout << "Reversing list: ";
//     display(list1);
// }
