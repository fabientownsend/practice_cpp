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

    Node getNext() {
      return *next;
    }

    void nextNode(Node *n) {
      next = n;
    }
};

template <typename T> class NodeWithTemplate {
  T value = NULL;
  NodeWithTemplate *next = nullptr;

  public:
    NodeWithTemplate(T v) {
      value = v;
    }

    T getValue() {
      return value;
    }

    NodeWithTemplate getNext() {
      return *next;
    }

    void nextNode(NodeWithTemplate *n) {
      next = n;
    }
};

int main() {
  // Node without template
  Node firstNodeWihtoutTemplate(1);
  Node secondNodeWithoutTemplate(2);

  firstNodeWihtoutTemplate.nextNode(&secondNodeWithoutTemplate);

  std::cout << firstNodeWihtoutTemplate.getValue() << std::endl;
  std::cout << firstNodeWihtoutTemplate.getNext().getValue() << std::endl;


  // Node with template
  NodeWithTemplate<std::string> firstNode("hello");
  NodeWithTemplate<std::string> secondNode("world");

  firstNode.nextNode(&secondNode);

  std::cout << firstNode.getValue() << std::endl;
  std::cout << firstNode.getNext().getValue() << std::endl;
}
