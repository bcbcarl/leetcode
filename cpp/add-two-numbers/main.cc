#include <iostream>

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x): val(x), next(nullptr) {}
};

class Solution {
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
private:
  void push_front(const int& val);
  void reverse();
  ListNode* result_;
};

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode* n1 = l1;
  ListNode* n2 = l2;

  int a = 0;
  int b = 0;
  int sum = 0;
  int carry = 0;

  while (n1 || n2) {
    a = 0;
    b = 0;

    if (n1) {
      a = n1->val;
      n1 = n1->next;
    }

    if (n2) {
      b = n2->val;
      n2 = n2->next;
    }

    sum = a + b + carry;
    carry = (sum > 9) ? 1 : 0;

    Solution::push_front(sum % 10);
  }

  if (carry) {
    Solution::push_front(carry);
  }

  Solution::reverse();

  return result_;
}

void Solution::push_front(const int& val) {
  ListNode* newNode = new ListNode(val);
  newNode->next = result_;
  result_ = newNode;
}

void Solution::reverse() {
  if (result_ == nullptr || result_->next == nullptr) {
    return;
  }

  ListNode* current = result_;
  ListNode* prev = nullptr;
  ListNode* next = nullptr;

  while(current != nullptr) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  result_ = prev;
}

void printList(ListNode* list);

void deleteList(ListNode* list);

int main() {
  ListNode* list1;
  list1 = new ListNode(2);
  list1->next = new ListNode(4);
  list1->next->next = new ListNode(3);
  printList(list1);

  ListNode* list2;
  list2 = new ListNode(5);
  list2->next = new ListNode(6);
  list2->next->next = new ListNode(4);
  printList(list2);

  Solution solution;
  ListNode* result = solution.addTwoNumbers(list1, list2);
  printList(result);

  deleteList(list1);
  deleteList(list2);
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
