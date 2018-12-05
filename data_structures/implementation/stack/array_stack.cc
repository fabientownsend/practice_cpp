#include <iostream>

class StackArray {
  int stack[10];
  int head = 0;

  public:
    void push(int value) {
      stack[head] = value;
      head++;
    }

    int pop() {
      int value = stack[head];
      head--;
      return value;
    }
};

int main() {
  int numberOfInput = 5;
  int number;
  StackArray stack;

  for (int i = 0; i < numberOfInput; i++) {
    std::cout << "Push: ";
    std::cin >> number;
    stack.push(number);
  }

  for (int i = 0; i < numberOfInput; i++) {
    std::cout << "Pop: " << stack.pop() << std::endl;
  }

  return 0;
}
