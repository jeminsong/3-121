// Ethan Bui
// CPSC 121L-02
// 1/31/2024
// ethanbui888@csu.fullerton.edu
// @ethanbui888
//
// Lab 2-1
// If it is a pair programming lab please specify partner below.
// Partner: @jeminsong
double ComputeSalary(double wages, double hours) {
  double salary = 0;
  if (hours <= 40) {
    salary = hours * wages;
  } else if ((hours > 40) && (hours <= 65)) {
    salary = (wages * 40) + (hours - 40) * (wages * 1.5);
  } else {
    salary = (wages * 40) + ((wages * 1.5) * 25) + ((hours - 65) * (wages * 2));
  }
  return salary;
}