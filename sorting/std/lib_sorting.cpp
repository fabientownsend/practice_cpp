#include <vector>
#include <iostream>

typedef std::vector<int> vi;

#define B() begin()
#define E() end()

int main () {
  vi v = {5, 4, 6, 8};
  std::sort(v.B(), v.E());

  for (int i = 0; i < 4; i++) {
    std::cout << v[i];
  }

  std::cout << "\n";

  std::sort(v.rbegin(), v.rend()); // revert

  for (int i = 0; i < 4; i++) {
    std::cout << v[i];
  }

  std::cout << "\n";

  int size = 4;
  int a[] = {4, 3, 1, 4};

  for (int i = 0; i < 4; i++) {
    std::cout << a[i];
  }

  std::cout << "\n";

  std::sort(a, a+size);

  for (int i = 0; i < 4; i++) {
    std::cout << a[i];
  }

  std::cout << "\n";
  std::string s = "mondey";
  std::cout << s << std::endl;
  std::cout << "\n";
  std::sort(s.B(), s.E());
  std::cout << s << std::endl;

  return 0;
}
