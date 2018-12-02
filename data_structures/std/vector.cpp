#include <iostream>
#include <vector>

using namespace std;

// a vector is a dynamic array
int main() {
  vector<int> v;
  v.push_back(3);
  v.push_back(5);
  v.push_back(8);

  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
  }

  cout << endl;

  for (auto x : v) {
    cout << x;
  }

  cout << endl;

  // second way to create array with element
  vector<int> w = {1, 2, 3, 4};

  // show last element
  cout << w.back() << endl;

  for (auto x : w) {
    cout << x;
  }
  cout << endl;

  // remove last element
  w.pop_back();
  for (auto x : w) {
    cout << x;
  }
  cout << endl;

  // init the size of array
  vector<int> z(10);
  cout << "size of the array: " << z.size() << endl;

  // initial array with value
  vector<int> t(10, 0);
  for (auto x : t) {
    cout << x;
  }
  cout << endl;
}
