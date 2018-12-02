#include <iostream>
#include <string>

using namespace std;

// each element use one bit of memory
// if n element are stored in an int array it will be 32n bits
// in a bitset it would be n bits of memory
int main() {
  bitset<10> c;
  c[1] = 1;
  c[3] = 1;
  c[4] = 1;
  c[7] = 1;

  cout << c[3] << endl; // 1
  cout << c[5] << endl; // 0
  
  bitset<10> s(string("0010011010")); // from right to left
  cout << s[3] << endl; // 1
  cout << s[5] << endl; // 0
  cout << s.count() << endl; // 4, nb of one

  bitset<10> a(string("0010110110"));
  bitset<10> b(string("1011011000"));
  cout << (a&b) << "\n"; // 0010010000
  cout << (a|b) << "\n"; // 1011111110
  cout << (a^b) << "\n"; // 1001101110
}
