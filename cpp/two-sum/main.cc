#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> twoSum(const std::vector<int>& nums, const int& target);
};

std::vector<int> Solution::twoSum(const std::vector<int>& nums, const int& target) {
  std::vector<int> indices;
  indices.reserve(2);
  const int nums_size = nums.size();
  for (int i = 0; i < nums_size; ++i) {
    for (int j = i + 1; j < nums_size; ++j) {
      if (nums.at(i) + nums.at(j) == target) {
        indices.push_back(i);
        indices.push_back(j);
        break;
      }
    }
    if (indices.size() == 2) {
      break;
    }
  }
  return indices;
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
