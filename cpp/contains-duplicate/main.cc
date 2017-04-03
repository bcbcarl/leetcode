#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
  bool containsDuplicate(const std::vector<int>& nums);
};

bool Solution::containsDuplicate(const std::vector<int>& nums) {
  std::set<int> s(nums.cbegin(), nums.cend());
  return nums.size() != s.size();
}

void printResult(const std::vector<int>& nums);

int main() {
  const std::vector<int> nums1 = { 1, 2, 3, 4, 5 };
  const std::vector<int> nums2 = { 1, 2, 3, 3, 4, 5 };

  printResult(nums1);
  std::cout << "---" << std::endl;
  printResult(nums2);

  return 0;
}

void printResult(const std::vector<int>& nums) {
  Solution* solution = new Solution();
  std::string result = solution->containsDuplicate(nums)
    ? "True"
    : "False";
  delete solution;

  std::cout << "nums: ";
  for (auto n : nums) {
    std::cout << n << " ";
  }
  std::cout << std::endl;
  std::cout << "containsDuplicate: " << result << std::endl;
}
