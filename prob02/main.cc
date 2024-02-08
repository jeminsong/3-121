// Ethan Bui
// CPSC 121L-02
// 1/31/2024
// ethanbui888@csu.fullerton.edu
// @ethanbui888
//
// Lab 2-1
// If it is a pair programming lab please specify partner below.
// Partner: @jeminsong

#include <iomanip>
#include <iostream>

#include "salary.h"
using namespace std;
int main() {
  double hourly_wages = 0;
  double hours_worked = 0;
  cout << "Hourly wage: ";
  cin >> hourly_wages;
  cout << "Hours worked: ";
  cin >> hours_worked;
  double salary = ComputeSalary(hourly_wages, hours_worked);
  if (hourly_wages < 0) {
    cout << "Invalid input";
    return -1;
  }
  if (hours_worked < 0) {
    cout << "Invalid input";
    return -1;
  }
  std::cout << std::fixed << std::setprecision(2) << "Total Salary Owed: $"
            << salary;
  return 0;
}