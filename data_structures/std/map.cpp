#include <iostream>
#include <map>

using namespace std;

// map use balanced binary tree
// Access element take O(log n)
// unordered_map which use hashing and access element take O(1) time
int main() {
  map<string, int> m;

  m["monkey"] = 4;
  m["banana"] = 3;
  m["harpsichord"] = 9;

  cout << m["banana"] << endl; // displays 3

  cout << m["willInitValueToZerro"] << endl; // displays 0

  cout << m.count("banana") << endl; // 1
  cout << m.count("pomme") << endl; // 0

  if (m.count("banana")) {
    // does exist
  }

  for (auto x : m) {
    cout << x.first << " " << x.second << endl; // displays key and value
  }
}
