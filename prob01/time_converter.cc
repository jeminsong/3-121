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

std::string MilitaryToRegularTime(int military_time) {
  std::string regular_time;
  int hours = military_time / 100;
  int minutes = military_time % 100;
  std::string am_pm = (hours < 12) ? "am" : "pm";
  if (hours > 12) {
    hours -= 12;
  } else if (hours == 0) {
    hours = 12;
  }
  regular_time = std::to_string(hours) + ":" + ((minutes < 10) ? "0" : "") +
                 std::to_string(minutes) + " " + am_pm;
  return regular_time;
}