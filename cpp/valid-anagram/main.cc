#include <iostream>
#include <string>

class Solution {
public:
  bool isAnagram(const std::string& s, const std::string& t);
};

bool Solution::isAnagram(const std::string& s, const std::string& t) {
  std::string ss = s;
  std::sort(ss.begin(), ss.end());

  std::string st = t;
  std::sort(st.begin(), st.end());

  return (ss == st);
}

void printResult(const std::string& s, const std::string& t);

int main() {
  printResult("anagram", "nagaram");
  printResult("rat", "car");
  return 0;
}

void printResult(const std::string& s, const std::string& t) {
  Solution* solution = new Solution();

  const auto result = solution->isAnagram(s, t)
    ? "true"
    : "false";

  delete solution;

  std::cout << "s = \"" << s << "\", t = \"" << t << "\", return " << result << std::endl;
}
