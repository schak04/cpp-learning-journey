/*
================================= STL CONTAINER DEMOS ===================================

C++ STL provides many powerful containers. This file demonstrates usage of:
- array
- vector
- deque
- list
- forward_list
- stack
- queue
- set
- unordered_set
- map
- unordered_map

Each block below is self-contained. Uncomment the relevant section in `main()` to test.

==========================================================================================
*/

#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
using namespace std;

/* ARRAY */
void arrayExample() {
    array<int, 5> arr = {1, 2, 3, 4, 5};
    cout << "Array: ";
    for (int i : arr) cout << i << " ";
    cout << "\nSize: " << arr.size() << ", First: " << arr.front() << ", Last: " << arr.back() << endl;
}

/* VECTOR */
void vectorExample() {
    vector<int> v = {10, 20, 30};
    v.push_back(40);
    v.pop_back();
    cout << "Vector: ";
    for (int i : v) cout << i << " ";
    cout << "\nSize: " << v.size() << ", Capacity: " << v.capacity() << endl;
}

/* DEQUE */
void dequeExample() {
    deque<int> dq = {2, 4, 6};
    dq.push_front(1);
    dq.push_back(8);
    dq.pop_front();
    cout << "Deque: ";
    for (int i : dq) cout << i << " ";
    cout << endl;
}

/* LIST */
void listExample() {
    list<int> l = {10, 20, 30};
    l.push_front(5);
    l.push_back(35);
    l.remove(20);
    cout << "List: ";
    for (int i : l) cout << i << " ";
    cout << endl;
}

/* FORWARD_LIST */
void forwardListExample() {
    forward_list<int> fl = {10, 20, 30};
    fl.push_front(5);
    fl.remove(20);
    cout << "Forward List: ";
    for (int i : fl) cout << i << " ";
    cout << endl;
}

/* STACK */
void stackExample() {
    stack<int> st;
    st.push(1); st.push(2); st.push(3);
    cout << "Top of stack: " << st.top() << endl;
    st.pop();
    cout << "After pop, top: " << st.top() << endl;
}

/* QUEUE */
void queueExample() {
    queue<int> q;
    q.push(10); q.push(20); q.push(30);
    cout << "Front of queue: " << q.front() << ", Back: " << q.back() << endl;
    q.pop();
    cout << "After pop, front: " << q.front() << endl;
}

/* SET */
void setExample() {
    set<int> s = {5, 2, 9, 1, 5};
    s.insert(3);
    cout << "Set: ";
    for (int i : s) cout << i << " ";
    cout << endl;
}

/* UNORDERED_SET */
void unorderedSetExample() {
    unordered_set<int> us = {5, 2, 9, 1, 5};
    us.insert(3);
    cout << "Unordered Set: ";
    for (int i : us) cout << i << " ";
    cout << endl;
}

/* MAP */
void mapExample() {
    map<string, int> m;
    m["apple"] = 5;
    m["banana"] = 2;
    cout << "Map:\n";
    for (auto [key, val] : m) cout << key << ": " << val << endl;
}

/* UNORDERED_MAP */
void unorderedMapExample() {
    unordered_map<string, int> um;
    um["dog"] = 3;
    um["cat"] = 1;
    cout << "Unordered Map:\n";
    for (auto [k, v] : um) cout << k << ": " << v << endl;
}

/* MAIN */
int main() {

    // arrayExample();
    // vectorExample();
    // dequeExample();
    // listExample();
    // forwardListExample();
    // stackExample();
    // queueExample();
    // setExample();
    // unorderedSetExample();
    // mapExample();
    // unorderedMapExample();

    return 0;
}
