#include <vector>
#include <iostream>

typedef std::vector<int> vi;

int main () {
  int size = 4;
  int arr[] = {4, 3, 1, 4};

  int a = 0;
  int b = size - 1;
  int x = 5;

  while (a <= b) {
    int k = (a + b) / 2;
    if (arr[k] == x) {
      std::cout << arr[k] << std::endl;
    }

    if (x > arr[k]) {
      a = k + 1;
    } else {
      b = k - 1;
    }
  }

}
