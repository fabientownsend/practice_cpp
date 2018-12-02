#include <iostream>
#include <deque>

using namespace std;

// dequeu is a dynamic array
// it provites push_back and pop_back like vector
// it addsa push_front and pop_front
// the implementation is more complex and for this reason
// slower than vector
// still, both adding and removing are O(1)
int main() {
  deque<int> d;

  d.push_back(5); // [5]
  d.push_back(2); // [5, 2]
  d.push_front(3); // [3, 5, 2]
  d.pop_back(); // [3, 5]
  d.pop_front(); // [5]
}
