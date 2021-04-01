/***
  Student: Francisco Espinoza
  Course: CSCI-272 Problem Solving 2
  Assignment: 1
  Chapter 10 - Exercise 5

  Design and implement a class dayType that implements the day of the week in a program.
  The class dayType should store the day, such as Sun for Sunday. The program should be
  able to perform the following operations on an object of type dayType:
  a. Set the day.
  b. Print the day.
  c. Return the day.
  d. Return the next day.
  e. Return the previous day.
  f. Calculate and return the day by adding certain days to the current day.
	 For example, if the current day is Monday and we add 4 days, the day to be returned is Friday.
	 Similarly, if today is Tuesday and we add 13 days, the day to be returned is Monday.
  g. Add the appropriate constructors.

  Due Date: 01/28/2018
  File: dayType.h

***/
#include <iostream>
#include <string>

using namespace std;

class dayType {
public:
	dayType();
	int chosen_day;

	void choose_the_day(int& chosen_day);
	void count_the_weekday(int chosen_day);

private:
	int counter;
	int next_day;
	int previous_day;

	string current_day;
	string array_days[9];

};

struct weekdays
{
	const string Sun = "Sunday. \n";
	const string Mon = "Monday. \n";
	const string Tue = "Tuesday. \n";
	const string Wed = "Wednesday. \n";
	const string Thu = "Thursday. \n";
	const string Fri = "Friday. \n";
	const string Sat = "Saturday. \n";
};

struct Nodes
{

};