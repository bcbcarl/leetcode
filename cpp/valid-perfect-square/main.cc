#include <iostream>
#include <stdexcept>

class Solution {
public:
  bool isPerfectSquare(const int& num);
private:
  double x_n(const double& x_square, const int& n);
  inline double f(const double& x, const double& x_square);
  inline double d_f(const double& x);
};

bool Solution::isPerfectSquare(const int& num) {
  if (num < 0) {
    throw std::invalid_argument("NUM should not be smaller than 0.");
  }
  if (num == 0) {
    return 0;
  }
  const int n = 20;
  const int sqrt_x = int(x_n(num, n));
  return (sqrt_x * sqrt_x == num);
}

double Solution::x_n(const double& x_square, const int& n) {
  if (n < 0) {
    throw std::invalid_argument("N should not be smaller than 0.");
  }
  if (n == 0) {
    return x_square / 2;
  }
  const double x_prev = x_n(x_square, n - 1);
  return x_prev - f(x_prev, x_square) / d_f(x_prev);
}

inline double Solution::f(const double& x, const double& x_square) {
  return x * x - x_square;
}

inline double Solution::d_f(const double& x) {
  return 2 * x;
}

void printResult(const int& num);

int main() {
  printResult(16);
  std::cout << "---" << std::endl;
  printResult(14);
  return 0;
}

void printResult(const int& num) {
  Solution* solution = new Solution();

  const std::string result = solution->isPerfectSquare(num)
    ? "True"
    : "False";

  delete solution;

  std::cout << "Input: " << num << std::endl;
  std::cout << "Returns: " << result << std::endl;
}
