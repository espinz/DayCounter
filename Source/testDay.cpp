/***
  Student: Francisco Espinoza
  Course: CSCI-272 Problem Solving 2
  Assignment: 1
  Due Date: 01/28/2018
  File: testDay.cpp

***/
#include "dayType.h"

int main() {
	// Crashes with long values and letters.
	dayType Day;

	while (Day.chosen_day != 0 && Day.chosen_day < 8) {
		Day.choose_the_day(Day.chosen_day);
		Day.count_the_weekday(Day.chosen_day);
	}
	return 0;
}