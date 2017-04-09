#include <iostream>

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x): val(x), next(nullptr) {}
};

class Solution {
public:
  ListNode* reverseList(ListNode* head);
private:
  void push_front(const int& val);
  ListNode* result_;
};

ListNode* Solution::reverseList(ListNode* head) {
  if (head == nullptr || head->next == nullptr) {
    return head;
  }
  ListNode* current = head;
  while(current != nullptr) {
    Solution::push_front(current->val);
    current = current->next;
  }
  return Solution::result_;
}

void Solution::push_front(const int& val) {
  ListNode* newNode = new ListNode(val);
  newNode->next = result_;
  result_ = newNode;
}

void printList(ListNode* list);

void deleteList(ListNode* list);

int main() {
  ListNode* list;
  list = new ListNode(2);
  list->next = new ListNode(4);
  list->next->next = new ListNode(3);
  printList(list);

  Solution solution;
  ListNode* result = solution.reverseList(list);
  printList(result);

  deleteList(list);
  deleteList(result);

  return 0;
}

void printList(ListNode* list) {
  while (list) {
    std::cout << list->val << " ";
    list = list->next;
  }
  std::cout << std::endl;
}

void deleteList(ListNode* list) {
  ListNode* current;
  while (list) {
    current = list;
    list = current->next;
    delete current;
  }
}
