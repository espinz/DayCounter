/***
  Student: Francisco Espinoza
  Course: CSCI-272 Problem Solving 2
  Assignment: 1
  Due Date: 01/28/2018
  File: dayTypeImp.cpp

  ***/

#include "dayType.h"

dayType::dayType() {
	weekdays day;

	counter;
	chosen_day;

	array_days[1] = day.Sun;
	array_days[2] = day.Mon;
	array_days[3] = day.Tue;
	array_days[4] = day.Wed;
	array_days[5] = day.Thu;
	array_days[6] = day.Fri;
	array_days[7] = day.Sat;
}

void dayType::choose_the_day(int& chosen_day) {
	cout 
		<< "\nPick today's day of the week: \n";
	cout 
		<< "1) Sunday\n"
		<< "2) Monday\n"
		<< "3) Tuesday\n"
		<< "4) Wednesday\n"
		<< "5) Thursday\n"
		<< "6) Friday\n"
		<< "7) Saturday\n"
		<< "0) Exit\n"
		<< "Please pick a number from 1-7 or 0 to exit: ";

	cin >> chosen_day;
	if (chosen_day == 0 || chosen_day > 7)
		return;

	cout << "\nYou Entered: " + array_days[chosen_day];

	if (chosen_day == 1) {
		previous_day = chosen_day + 6;
		next_day = chosen_day + 1;
	}
	else if (chosen_day == 7) {
		previous_day = chosen_day - 1;
		next_day = chosen_day - 6;
	}
	else
	{
		previous_day = chosen_day - 1;
		next_day = chosen_day + 1;
	}

	cout << "The previous day was: " + array_days[previous_day];
	cout << "The next day is: " + array_days[next_day];
}

void dayType::count_the_weekday(int chosen_day) {
	if (chosen_day == 0 || chosen_day > 7)
		return;

	cout << "\nHow many days from "
		+ current_day
		+ "would you like to advance? ";

	cin >> counter;

	chosen_day += counter;

	while (chosen_day > 7)
		chosen_day = chosen_day - 7;
	cout << "That would be " + array_days[chosen_day];
}