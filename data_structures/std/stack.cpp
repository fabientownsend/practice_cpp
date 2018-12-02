#include <iostream>
#include <stack>

using namespace std;

// the stack provide two O(1) opperation
// add and remove
// it's only possible to access to the element of the top
// of the stack

int main() {
  stack<int> s;

  s.push(3);
  s.push(2);
  s.push(5);

  cout << s.top(); // 5
  s.pop();
  cout << s.top(); // 2
}
