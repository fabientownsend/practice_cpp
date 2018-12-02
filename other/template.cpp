#include <iostream>

template <typename T> class Node {
  T value = NULL;
  Node *next = nullptr;

  public:
    Node(T v) {
      value = v;
    }

    T getValue() {
      return value;
    }

    Node getNext() {
      return *next;
    }

    void nextNode(Node *n) {
      next = n;
    }
};

template <typename T> class LinkeList {
  Node<T> head = NULL;
  Node<T> tail = NULL;

  public:
    LinkeList(T value) {
      Node<T> fistNode(value);
      head = fistNode;
      tail = fistNode;
    }

    void add(T value) {
      Node<T> newNode(value);
      tail.nextNode(&newNode);
      tail = newNode;
    }

    T last() {
      return tail.getValue();
    }
};


int main() {
  // Node
  Node<std::string> firstNode("hello");
  Node<std::string> secondNode("world");

  firstNode.nextNode(&secondNode);

  std::cout << firstNode.getValue() << std::endl;
  std::cout << firstNode.getNext().getValue() << std::endl;


  // LinkedList
  LinkeList<int> newLinkedList(1);
  newLinkedList.add(2);
  newLinkedList.add(5);
  newLinkedList.add(8);

  std::cout << newLinkedList.last() << std::endl;
  return 0;
}
