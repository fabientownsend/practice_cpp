#include <iostream>

class Node {
  int value;
  Node *next = nullptr;

  public:
    Node(int v) {
      value = v;
    }

    int getValue() {
      return value;
    }

    void setNext(Node *n) {
      next = n;
    }

    Node* getNext() {
      return next;
    }
};

class LinkedListStack {
  int count = 0;
  Node *head = nullptr;

  public:
    void push(int value) {
      Node *newNode = new Node(value);
      newNode->setNext(head);
      head = newNode;
      count++;
    }

    int pop() {
      count--;
      int valueToReturn = head->getValue();
      head = head->getNext();
      return valueToReturn;
    }

    int size() {
      return count;
    }

    bool empty() {
      return count == 0;
    }
};

int main() {
  LinkedListStack stack;
  int numberOfInput = 5;
  int number;
  std::cout << "Size: LinkedListStack: " << stack.size() << std::endl;

  for (int i = 0; i < numberOfInput; i++) {
    std::cout << "Push: ";
    std::cin >> number;
    stack.push(number);
  }

  std::cout << "Size: LinkedListStack: " << stack.size() << std::endl;

  for (int i = 0; i < numberOfInput; i++) {
    std::cout << "Pop: " << stack.pop() << std::endl;
  }

  std::cout << "Size: LinkedListStack: " << stack.size() << std::endl;
  return 0;
}
