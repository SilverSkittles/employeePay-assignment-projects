#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <fstream>
using namespace std;

/*
Author: Cubbi, M.
Title: std::basic_fstream
Date: 23 February 2017
Source Location: https://en.cppreference.com/w/cpp/io/basic_fstream
*/


int main()
{
	ifstream inFile;
	ofstream outFile;

	string firstName, lastName;
	double hourly, payTotal, salary;
	int numHours, numWeeks;
	
	


	outFile.open("empInfo.txt");
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

	outFile << firstName << " " << lastName << " " << numHours << " " << hourly << endl;
	outFile.close();
	inFile.open("empInfo.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay.out");

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << setw(20) << setfill(' ') <<
		right << "Monthly pay: $" << setw(9) << setfill('*') << numHours * hourly << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	cin.clear();
	cin.ignore(200, '\n');




	outFile.open("empInfo.txt", outFile.app);
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


	outFile << firstName << " " << lastName << " " << numHours << " " << hourly << endl;
	outFile.close();
	inFile.open("empInfo.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << setw(20) << setfill(' ') <<
		right << "Monthly pay: $" << setw(9) << setfill('*') << numHours * hourly << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	cin.clear();
	cin.ignore(200, '\n');



	outFile.open("empInfo.txt", outFile.app);
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


	outFile << firstName << " " << lastName << " " << numHours << " " << hourly << endl;
	outFile.close();
	inFile.open("empInfo.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << setw(20) << setfill(' ') <<
		right << "Monthly pay: $" << setw(9) << setfill('*') << numHours * hourly << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	cin.clear();
	cin.ignore(200, '\n');



	outFile.open("empInfo.txt", outFile.app);
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

	outFile << firstName << " " << lastName << " " << numHours << " " << hourly << endl;
	outFile.close();
	inFile.open("empInfo.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << setw(20) << setfill(' ') <<
		right << "Monthly pay: $" << setw(9) << setfill('*') << numHours * hourly << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	cin.clear();
	cin.ignore(200, '\n');



	outFile.open("empInfo.txt", outFile.app);
	cout << "Enter first salaried employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's salary wage per year" << endl;
	cin >> salary;
	cout << "Enter employee's number of weeks worked this month" << endl;
	cin >> numWeeks;
	cout << "You entered " << firstName << " " << lastName << ", making $" << fixed << setprecision(2) << salary << " per year and worked " << numWeeks
		<< " total weeks this month." << endl;
	payTotal = (salary / 52) * numWeeks;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this month is: $" << fixed << setprecision(2) << payTotal << endl << endl;


	outFile << firstName << " " << lastName << " " << numWeeks << " " << salary << endl;
	outFile.close();
	inFile.open("empInfo.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << setw(20) << setfill(' ') <<
		right << "Monthly pay: $" << setw(9) << setfill('*') << (salary / 52) * numWeeks << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	cin.clear();
	cin.ignore(200, '\n');



	outFile.open("empInfo.txt", outFile.app);
	cout << "Enter second salaried employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's salary wage per year" << endl;
	cin >> salary;
	cout << "Enter employee's number of weeks worked this month" << endl;
	cin >> numWeeks;
	cout << "You entered " << firstName << " " << lastName << ", making $" << fixed << setprecision(2) << salary << " per year and worked " << numWeeks
		<< " total weeks this month." << endl;
	payTotal = (salary / 52) * numWeeks;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this month is: $" << fixed << setprecision(2) << payTotal << endl << endl;


	outFile << firstName << " " << lastName << " " << numWeeks << " " << salary << endl;
	outFile.close();
	inFile.open("empInfo.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << setw(20) << setfill(' ') <<
		right << "Monthly pay: $" << setw(9) << setfill('*') << (salary / 52) * numWeeks << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();


	cin.clear();
	cin.ignore(200, '\n');




	outFile.open("empInfo.txt", outFile.app);
	cout << "Enter owner's first name" << endl;
	cin >> firstName;
	cout << "Enter owner's last name" << endl;
	cin >> lastName;
	cout << "Enter owner's salary wage per year" << endl;
	cin >> salary;
	cout << "Enter owner's number of weeks worked this month" << endl;
	cin >> numWeeks;
	cout << "You entered " << firstName << " " << lastName << ", making $" << fixed << setprecision(2) << salary << " per year and worked " << numWeeks
		<< " total weeks this month." << endl;
	payTotal = (salary / 52) * numWeeks;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this month is: $" << fixed << setprecision(2) << payTotal << endl << endl;
	
	outFile << firstName << " " << lastName << " " << numWeeks << " " << salary << endl;
	outFile.close();
	inFile.open("empInfo.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. Terminating program." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Owner's name: " << firstName << " " << lastName <<  setw(20) << setfill(' ') <<
		right << "Monthly pay: $" << setw(10) << setfill('*') << salary / 12 << endl << right << " Owner's Salary:      $" << setw(10) << salary <<  endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();


	cin.clear();
	cin.ignore(200, '\n');


	cout << "Press any key to quit." << endl;
	_getch();
	return 0;
}