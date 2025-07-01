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
    bool operator()(const Item& a, const Item& b) const { 
        return a.priority > b.priority; // Min-heap
    }
};

int main() {
    // Declare a min-heap of Item using custom comparator
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
