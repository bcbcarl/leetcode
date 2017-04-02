#include <iostream>
#include <stdexcept>

class Solution {
public:
  int mySqrt(const int& x);
private:
  double x_n(const double& x_square, const int& n);
  inline double f(const double& x, const double& x_square);
  inline double d_f(const double& x);
};

int Solution::mySqrt(const int& x) {
  if (x < 0) {
    throw std::invalid_argument("X should not be smaller than 0.");
  }
  if (x == 0) {
    return 0;
  }
  const int n = 20;
  return int(x_n(x, n));
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

int main() {
  Solution* solution = new Solution();
  const int x = 612;
  std::cout << solution->mySqrt(x) << std::endl;
  delete solution;
  return 0;
}
