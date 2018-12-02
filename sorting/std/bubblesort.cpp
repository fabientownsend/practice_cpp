#include <iostream>

using namespace std;

int main() {
  int array[] = {1, 3, 8, 2, 9, 2, 5, 6};

  for (int i = 0; i < 8; i++) {
    cout << array[i];
  }

  cout << endl;

  for (int i = 0; i < 8; i++) {
    for (int j = 1; j < 8; j++) {
      if (array[j - 1] > array[j]) {
        swap(array[j - 1], array[j]);
      }
    }
  }

  for (int i = 0; i < 8; i++) {
    for (int y = 1; y < 8; y++) {
      if (array[y - 1] > array[y]) {
        int temp = array[y - 1];
        array[y - 1] = array[y];
        array[y] = temp;
      }
    }
  }

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8 - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }

  for (int i = 0; i < 8; i++) {
    for (int j = i; j < 8 - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }

  for (int i = 0; i < 8; i++) {
    cout << array[i];
  }
}
