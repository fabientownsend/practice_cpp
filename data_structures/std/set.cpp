#include <iostream>
#include <set>

using namespace std;

// insert, search and removal
// balance binary search and its operation work in O(log n) time
// the structure unordered_set uses hashing and its operation work in O(1) time on average
// each element are unique

int main() {
  set<int> s;
  s.insert(3);
  s.insert(5);
  s.insert(8);

  cout << s.count(3) << endl; // 1
  cout << s.count(4) << endl; // 0

  s.erase(3);
  s.insert(4);

  cout << s.count(3) << endl; // 0
  cout << s.count(4) << endl; // 1

  set<int> s2 = {2, 5, 6, 8};
  cout << s2.size() << endl; // 4

  for (auto x : s2) {
    cout << x;
  }
  cout << endl;


  set<int> s3;
  s3.insert(5);
  s3.insert(5);
  s3.insert(5);

  cout << s3.size() << endl;

  // multiset allow identical element
  multiset<int> m;
  m.insert(5);
  m.insert(5);
  m.insert(5);

  cout << m.size() << endl; // 3

  m.erase(5);
  cout << m.size() << endl; // 0

  m.insert(5);
  m.insert(5);
  m.insert(5);

  m.erase(m.find(5));
  cout << m.size() << endl; // 2
}
