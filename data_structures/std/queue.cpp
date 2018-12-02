#include <iostream>
#include <queue>

using namespace std;

// two O(1) opperation, add/remove
// can only access to first element
int main() {
  queue<int> q;

  q.push(3);
  q.push(2);
  q.push(5);

  cout << q.front(); // 3
  q.pop();
  cout << q.front(); // 2
}
