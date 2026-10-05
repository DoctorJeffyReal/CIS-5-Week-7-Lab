#include <iostream>

// Lab 7 — Jesus
// CIS 5 Week 07 · Two arrays

int main() {
  const int N = 5;
  int quiz[N] = {88, 92, 70, 95, 81};
  int lab[N] = {70, 70, 70, 70, 70};

  std::cout << "Quiz\n";
  int quizSum = 0;
  int quizHi = quiz[0];
  for (int i = 0; i < N; ++i) {
    std::cout << "[" << i << "] " << quiz[i] << '\n';
    quizSum += quiz[i];
    if (quiz[i] > quizHi) {
      quizHi = quiz[i];
    }
  }
  std::cout << "Sum: " << quizSum << '\n';
  std::cout << "High: " << quizHi << '\n';

  std::cout << "\nLab\n";
  int labSum = 0;
  int labHi = lab[0];
  for (int i = 0; i < N; ++i) {
    std::cout << "[" << i << "] " << lab[i] << '\n';
    labSum += lab[i];
    if (lab[i] > labHi) {
      labHi = lab[i];
    }
  }
  std::cout << "Sum: " << labSum << '\n';
  std::cout << "High: " << labHi << '\n';

  return 0;
}
