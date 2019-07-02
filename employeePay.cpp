#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
using namespace std;

/*
Author: Kanapickas, P.
Title: Input/output Manipulators
Date: 3 October 2011
Source Location: https://en.cppreference.com/w/cpp/io/manip
*/

int main()
{
	string firstName, lastName;
	float hourly, payTotal;
	int salary, numHours, numWeeks;

	cout << "Enter first hourly employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's hourly wage" << endl;
	cin >> hourly;
	cout << "Enter employee's number of hours worked this month" << endl;
	cin >> numHours;
	cout << "You entered " << firstName << " " << lastName << ", who is making $" << fixed << setprecision(2) << hourly << " per hour and worked " << numHours
		<< " total hours this month." << endl;
	payTotal = hourly * numHours;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this month is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	cin.clear();
	cin.ignore(200, '\n');

	cout << "Enter second hourly employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's hourly wage" << endl;
	cin >> hourly;
	cout << "Enter employee's number of hours worked this month" << endl;
	cin >> numHours;
	cout << "You entered " << firstName << " " << lastName << ", making $" << fixed << setprecision(2) << hourly << " per hour and worked " << numHours
		<< " total hours this month." << endl;
	payTotal = hourly * numHours;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this month is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	cin.clear();
	cin.ignore(200, '\n');

	cout << "Enter third hourly employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's hourly wage" << endl;
	cin >> hourly;
	cout << "Enter employee's number of hours worked this month" << endl;
	cin >> numHours;
	cout << "You entered " << firstName << " " << lastName << ", making $" << fixed << setprecision(2) << hourly << " per hour and worked " << numHours
		<< " total hours this month." << endl;
	payTotal = hourly * numHours;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this month is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	cin.clear();
	cin.ignore(200, '\n');

	cout << "Enter fourth hourly employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's hourly wage" << endl;
	cin >> hourly;
	cout << "Enter employee's number of hours worked this month" << endl;
	cin >> numHours;
	cout << "You entered " << firstName << " " << lastName << ", making $" << fixed << setprecision(2) << hourly << " per hour and worked " << numHours
		<< " total hours this month." << endl;
	payTotal = hourly * numHours;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this month is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	cin.clear();
	cin.ignore(200, '\n');

	cout << "Enter first salaried employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's salary wage per month" << endl;
	cin >> salary;
	cout << "Enter employee's number of weeks worked this month" << endl;
	cin >> numWeeks;
	cout << "You entered " << firstName << " " << lastName << ", making $" << fixed << setprecision(2) << salary << " per year and worked " << numWeeks
		<< " total weeks this month." << endl;
	payTotal = (salary / 52) * numWeeks;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this month is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	cin.clear();
	cin.ignore(200, '\n');

	cout << "Enter second salaried employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's salary wage per month" << endl;
	cin >> salary;
	cout << "Enter employee's number of weeks worked this month" << endl;
	cin >> numWeeks;
	cout << "You entered " << firstName << " " << lastName << ", making $" << fixed << setprecision(2) << salary << " per year and worked " << numWeeks
		<< " total weeks this month." << endl;
	payTotal = (salary / 52) * numWeeks;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this month is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	cin.clear();
	cin.ignore(200, '\n');


	cout << "Press any key to quit" << endl;
	_getch();
	return 0;
}