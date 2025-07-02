/*
Custom Comparator for priority_queue:
This program demonstrates how to use a custom comparator to implement a min-heap using C++'s priority_queue.
- By default, priority_queue is a max-heap.
- We define a comparator to make it behave like a min-heap.
- Items with lower 'priority' values have higher priority.
*/

#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

class Item {
public:
    int priority;
    string description;

    Item(int p, string d) : priority(p), description(d) {}
};

/* Custom comparator for min-heap (lower priority value = higher importance or priority) */
struct CompareItem {
    /*
    Comparator function object for priority queue:
    - This operator() defines the comparison logic between two Item objects.
    - It returns true if the priority of 'a' is greater than the priority of 'b',
      which causes the priority_queue to behave as a min-heap (i.e., the Item with
      the smallest priority will be at the top of the queue).
    - a -> the first Item to compare
    - b -> the second Item to compare
    - return true if 'a' should come after 'b' in the min-heap, false otherwise.
    */
    /*
    Why a struct for a comparator?
      The C++ STL’s priority_queue uses a comparator to decide the order of elements.
      By default, it creates a max-heap (largest element at the top).
      To make a min-heap (smallest element at the top), we need to create a custom comparator.
      A struct is used here to define a custom comparison logic for Task objects.
    Why bool as the return type?
      The comparator must return true or false to indicate the ordering between two elements.
      If it returns true, it means the first element should come after the second in the heap
      (i.e., it has lower priority in the queue).
    What is operator()?
      In C++, operator() is a special function called the function call operator.
      When we define it in a struct or class, we make objects of that type "callable".
      It allows the struct to be used like a function.
      When we pass CompareTask to priority_queue, it will call this operator to compare two Task objects.
    Why const Task& a, const Task& b as parameters?
      const means the function promises not to modify the Task objects.
      & (reference) avoids copying the objects, which is more efficient, especially for large objects.
    Why const at the end of the signature? Could we have added it before or after 'bool'?
      This means the operator function itself does not modify any member variables of the CompareTask struct.
      It’s a good practice for comparator objects, which should be stateless.
      The const qualifier in the function signature must come after the parameter list, not before or after 'bool'.
      The correct syntax is: bool operator()(...) const { ... }
      Placing 'const' before or after 'bool' would cause a syntax error in C++.
    Why a.priority > b.priority?
      In a min-heap, the element with the smallest value should be at the top.
      If a.priority is greater than b.priority, then a should come after b in the heap.
      Since lower numbers mean higher priority (e.g., 1 is highest), this logic ensures that tasks with
      the lowest priority number are at the top of the queue.
    This is how a.priority > b.priority makes a min-heap:
      The C++ priority_queue by default creates a max-heap: the largest element (according to the comparator) is always at the top.
      The comparator is used like this:
      If comp(a, b) is true, then a is considered to have lower priority than b and will be placed after b in the heap.
      But, my comparator:
        bool operator()(const Item& a, const Item& b) const { 
            return a.priority > b.priority; // Min-heap
        }
      If a.priority is greater than b.priority, this returns true.
        That means:
        If a has priority 3 and b has priority 1, then 3 > 1 is true, so a is considered "less important" than b
        and will be placed after b in the heap. As a result, the smallest priority value
        (which is the highest priority in your system) will always be at the top of the heap.
      Why does this work?
        The heap uses the comparator to keep the "largest" (according to the comparator) at the top.
        By making the comparator return true when a.priority > b.priority, you are telling the heap
        that a lower number is "greater" in terms of priority. So, the task with the lowest priority number
        (highest priority) will always be at the top.
    */
    bool operator()(const Item& a, const Item& b) const { 
        return a.priority > b.priority; // Min-heap
    }
};

int main() {
    // Declare a min-heap of Item using custom comparator
    /*
    About the template parameters passed to priority_queue within the angle brackets:

    Task:
      The type of elements stored in the queue (here, your custom Task class).

    vector<Task>:
      The container used to store the elements internally.
      By default, priority_queue uses a vector, but you could use another container (like deque).
      Here, you’re being explicit: use a vector of Task.

    CompareTask:
      The comparison functor (object with operator()) that determines the order of elements.
      By default, priority_queue uses std::less<T>, which creates a max-heap.
      You want a min-heap, so you provide your own comparator.

    Why do you need to specify all three?
      The default priority_queue is for built-in types (like int) and uses std::less<int>.
      For custom types (like Task), the compiler doesn’t know how to compare them, so you must provide a comparator.
      You also need to specify the container type if you’re providing a custom comparator.
    */
    priority_queue<Item, vector<Item>, CompareItem> itemQueue;

    // Add some items
    itemQueue.push(Item(3, "Whey Protein"));
    itemQueue.push(Item(1, "Eggs"));
    itemQueue.push(Item(5, "Dumbbells"));
    itemQueue.push(Item(2, "Cables"));

    // Display items in order of priority
    cout << "Items in order of priority:\n";
    while (!itemQueue.empty()) {
        Item i = itemQueue.top();
        cout << "- " << i.description << " (Priority: " << i.priority << ")\n";
        itemQueue.pop();
    }

    return 0;
}
