#include <iostream>

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x): val(x), next(nullptr) {}
};

class Solution {
public:
  void deleteNode(ListNode* node);
};

void Solution::deleteNode(ListNode* node) {
  *node = *node->next;
}

int main() {
  ListNode node1(5);
  ListNode node2(3);
  ListNode node3(2);

  node1.next = &node2;
  node2.next = &node3;
  node3.next = nullptr;

  std::cout << "Before: " << node1.val << ", " << node2.val << ", " << node3.val << std::endl;

  Solution* solution = new Solution();
  solution->deleteNode(&node2);
  delete solution;

  std::cout << "After: " << node1.val << ", " << node2.val << std::endl;

  return 0;
}
