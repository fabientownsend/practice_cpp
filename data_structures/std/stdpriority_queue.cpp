#include <iostream>
#include <queue>


using namespace std;

// supported operations are:
// insert. Depending the implemention, retrieval/remove either the max/mix element
// insert and removal tale O(log n)
// retrieval take O(1
//
// proprity queu usually use a heap structure which is simplier
// than balanced binary tree which is unsed in a ordered set
//
// by default c++ order the el in decreasing order
int main() {
  priority_queue<int> p;
  p.push(3);
  p.push(5);
  p.push(7);
  p.push(2);

  cout << p.top() << endl; // 7
  p.pop();
  cout << p.top() << endl; // 5
  p.pop();
  p.push(6);
  cout << p.top() << endl; // 6
  p.pop();

  // can invert the order this way
  // priority_queue<int, vector<int>, greater<int>> q;
}
