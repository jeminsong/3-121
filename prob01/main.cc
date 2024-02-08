// Jemin Song
// CPSC 121L-02
// 2/7/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 3-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <string>

#include "time_converter.h"

int main() {
  int military_time = 0;
  std::cout << "Please enter the time in military time: ";
  std::cin >> military_time;

  std::string regular_time = MilitaryToRegularTime(military_time);

  std::cout << "The equivalent regular time is: " << regular_time << "\n";
  return 0;
}
