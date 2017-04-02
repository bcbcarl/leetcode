#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> twoSum(const std::vector<int>& numbers, const int& target);
};

std::vector<int> Solution::twoSum(const std::vector<int>& numbers, const int& target) {
  const int nums_size = numbers.size();
  int i = 0;
  int j = nums_size - 1;
  int sum = numbers.at(i) + numbers.at(j);
  while (sum != target) {
    (sum < target) ? i++ : j--;
    sum = numbers.at(i) + numbers.at(j);
  }
  return std::vector<int>({ i + 1, j + 1 });
}

int main() {
  Solution* solution = new Solution();

  const std::vector<int> nums = { 2, 7, 11, 15 };
  const int target = 9;
  const auto result = solution->twoSum(nums, target);
  delete solution;

  for ( auto x : result) {
    std::cout << x << " ";
  }
  std::cout << std::endl;

  return 0;
}
