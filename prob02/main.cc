// Jemin Song
// CPSC 121L-02
// 2/7/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 2-1
// If it is a pair programming lab please specify partner below.
// Partner: @ethanbui888

#include <iomanip>
#include <iostream>

#include "salary.h"
using namespace std;
int main() {
  double hourly_wages = 0;
  double hours_worked = 0;
  While (true) {
      cout << "Hourly wage: ";
      cin >> hourly_wages;
      if (hourly_wages < 0) {
          cout << "Negative hourly wage is invalid.\n";
          continue;
      }
      break;
  }
  While (true) {
      cout << "Hours worked: ";
      cin >> hours_worked;
      if (hours_worked < 0) {
          cout << "Negative hours worked is invalid.\n";
          continue;
      }
      break;
  }

  double salary = ComputeSalary(hourly_wages, hours_worked);

  cout << std::fixed << std::setprecision(2) << "Total Salary Owed: $"
            << salary;
  return 0;
}
