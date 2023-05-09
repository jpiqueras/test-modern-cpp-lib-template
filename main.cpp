#include <iostream>

#include "my_lib/my_lib.hpp"

int main() {
  Eigen::MatrixXd A(2, 2);
  A << 2, -1, -1, 3;

  LinearSystemSolver solver(A);
  A.setZero();

  Eigen::VectorXd b(2);
  b << 1, 3;

  Eigen::VectorXd x = solver.solve(b);

  std::cout << "x = [" << x[0] << ", " << x[1] << "] \n";
}
