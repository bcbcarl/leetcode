#include <iostream>
#include <string>

class Solution {
public:
  std::string reverseString(const std::string& s);
};

std::string Solution::reverseString(const std::string& s) {
  return std::string(s.crbegin(), s.crend());
}

int main() {
  Solution* solution = new Solution();

  const std::string s = "hello";
  const auto result = solution->reverseString(s);
  delete solution;

  std::cout << result << std::endl;

  return 0;
}
