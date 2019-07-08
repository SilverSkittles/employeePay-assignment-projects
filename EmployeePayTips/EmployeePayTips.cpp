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

double hourlyGrossPay = 0;
double salaryGrossPay = 0;
double companyGross = 0;
char response;

int main()
{
	ifstream inFile;
	ofstream outFile;

	string firstName, lastName;
	double hourly, payTotal, salary, tips;
	int numHours, numWeeks;




	outFile.open("empInfo2.txt");
	cout << "Enter first hourly employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's hourly wage" << endl;
	cin >> hourly;
	cout << "Enter employee's tips for this week" << endl;
	cin >> tips;
	cout << "Enter employee's number of hours worked this week" << endl;
	cin >> numHours;
	cout << "You entered " << firstName << " " << lastName << ", who is making $" << fixed << setprecision(2) << hourly << " per hour and worked " << numHours
		<< " total hours this week." << endl;

	if (numHours == 0)
	{
		payTotal = 0.00;
	}
	else
	{
		payTotal = (hourly * numHours) + ((numHours - 40) * hourly * 1.5) + tips;
	}

	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this week is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	outFile << firstName << " " << lastName << " " << numHours << " " << hourly << " " << payTotal << " " << tips << endl;
	outFile.close();
	inFile.open("empInfo2.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay2.out");

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << " " << setw(20) << setfill(' ') <<
		right << "Weekly pay: $" << setw(9) << setfill('*') << hourly * numHours << " " << "Gross pay: " << payTotal << " " << "Tips: $" << tips << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	hourlyGrossPay = payTotal - tips;
	companyGross = companyGross + hourlyGrossPay;


	cin.clear();
	cin.ignore(200, '\n');




	outFile.open("empInfo2.txt", outFile.app);
	cout << "Enter second hourly employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's hourly wage" << endl;
	cin >> hourly;
	cout << "Enter employee's tips for this week" << endl;
	cin >> tips;
	cout << "Enter employee's number of hours worked this week" << endl;
	cin >> numHours;
	cout << "You entered " << firstName << " " << lastName << ", who is making $" << fixed << setprecision(2) << hourly << " per hour and worked " << numHours
		<< " total hours this week." << endl;

	if (numHours == 0)
	{
		payTotal = 0.00;
	}
	else
	{
		payTotal = (hourly * numHours) + ((numHours - 40) * hourly * 1.5) + tips;
	}
	cout << endl;

	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this week is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	outFile << firstName << " " << lastName << " " << numHours << " " << hourly << " " << payTotal << " " << tips << endl;
	outFile.close();
	inFile.open("empInfo2.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay2.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << " " << setw(20) << setfill(' ') <<
		right << "Weekly pay: $" << setw(9) << setfill('*') << hourly * numHours << " " << "Gross pay: " << payTotal << " " << "Tips: $" << tips << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	hourlyGrossPay = hourlyGrossPay + payTotal - tips;
	companyGross = companyGross + hourlyGrossPay;

	cin.clear();
	cin.ignore(200, '\n');



	cout << "Enter third hourly employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's hourly wage" << endl;
	cin >> hourly;
	cout << "Enter employee's tips for this week" << endl;
	cin >> tips;
	cout << "Enter employee's number of hours worked this week" << endl;
	cin >> numHours;
	cout << "You entered " << firstName << " " << lastName << ", who is making $" << fixed << setprecision(2) << hourly << " per hour and worked " << numHours
		<< " total hours this week." << endl;

	if (numHours == 0)
	{
		payTotal = 0.00;
	}
	else
	{
		payTotal = (hourly * numHours) + ((numHours - 40) * hourly * 1.5) + tips;
	}
	cout << endl;

	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this week is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	outFile << firstName << " " << lastName << " " << numHours << " " << hourly << " " << payTotal << " " << tips << endl;
	outFile.close();
	inFile.open("empInfo2.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay2.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << " " << setw(20) << setfill(' ') <<
		right << "Weekly pay: $" << setw(9) << setfill('*') << hourly * numHours << " " << "Gross pay: " << payTotal << " " << "Tips: $" << tips << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	hourlyGrossPay = hourlyGrossPay + payTotal - tips;
	companyGross = companyGross + hourlyGrossPay;

	cin.clear();
	cin.ignore(200, '\n');



	outFile.open("empInfo2.txt", outFile.app);
	cout << "Enter fourth hourly employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's hourly wage" << endl;
	cin >> hourly;
	cout << "Enter employee's tips for this week" << endl;
	cin >> tips;
	cout << "Enter employee's number of hours worked this week" << endl;
	cin >> numHours;
	cout << "You entered " << firstName << " " << lastName << ", who is making $" << fixed << setprecision(2) << hourly << " per hour and worked " << numHours
		<< " total hours this week." << endl;

	if (numHours == 0)
	{
		payTotal = 0.00;
	}
	else
	{
		payTotal = (hourly * numHours) + ((numHours - 40) * hourly * 1.5) + tips;
	}
	cout << endl;

	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this week is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	outFile << firstName << " " << lastName << " " << numHours << " " << hourly << " " << payTotal << " " << tips << endl;
	outFile.close();
	inFile.open("empInfo2.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay2.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << " " << setw(20) << setfill(' ') <<
		right << "Weekly pay: $" << setw(9) << setfill('*') << hourly * numHours << " " << "Gross pay: " << payTotal << " " << "Tips: $" << tips << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	hourlyGrossPay = hourlyGrossPay + payTotal - tips;
	companyGross = companyGross + hourlyGrossPay;

	cin.clear();
	cin.ignore(200, '\n');



	outFile.open("empInfo2.txt", outFile.app);
	cout << "Enter first salaried employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's salary wage per year" << endl;
	cin >> salary;
	cout << "Enter employee's tips for this week" << endl;
	cin >> tips;
	cout << "Did " << firstName << " work this week? Y/N" << endl;
	cin >> response;

	if (response == 'Y' || response == 'y')
	{
		numWeeks = 1;
		payTotal = ((salary / 52) * numWeeks) + tips;
		
	}
	else if (response == 'N' || response == 'n')
	{
		payTotal = 0.00;
		
	}
	else
	{
		cout << "Invalid response.";
	}
	cout << endl;
	
	cout << "You entered " << firstName << " " << lastName << ", making $" << fixed << setprecision(2) << salary << " per year " << endl;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this week is: $" << fixed << setprecision(2) << payTotal << endl << endl;

	outFile << firstName << " " << lastName << " " << salary << " " << payTotal << " " << tips << endl;
	outFile.close();
	inFile.open("empInfo2.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay2.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << " " << setw(20) << setfill(' ') <<
		right << "Weekly pay: $" << setw(9) << setfill('*') << salary / 52 << "Gross pay this week: " << payTotal << "Tips: $" << tips << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	salaryGrossPay = payTotal - tips;
	companyGross = companyGross + salaryGrossPay;

	cin.clear();
	cin.ignore(200, '\n');



	outFile.open("empInfo2.txt", outFile.app);
	cout << "Enter second salaried employee's first name" << endl;
	cin >> firstName;
	cout << "Enter employee's last name" << endl;
	cin >> lastName;
	cout << "Enter employee's salary wage per year" << endl;
	cin >> salary;
	cout << "Enter employee's tips for this week" << endl;
	cin >> tips;
	cout << "Did " << firstName << " work this week? Y/N" << endl;
	cin >> response;

	if (response == 'Y' || response == 'y')
	{
		numWeeks = 1;
		payTotal = ((salary / 52) * numWeeks) + tips;

	}
	else if (response == 'N' || response == 'n')
	{
		payTotal = 0.00;

	}
	else
	{
		cout << "Invalid response.";
	}
	cout << endl;

	cout << "You entered " << firstName << " " << lastName << ", making $" << fixed << setprecision(2) << salary << " per year " << endl;
	cout << "If the information you entered is correct, the total gross pay for " << firstName << " " << lastName << " for this week is: $" << fixed << setprecision(2) << payTotal << endl << endl;


	outFile << firstName << " " << lastName << " " << salary << " " << payTotal << " " << tips << endl;
	outFile.close();
	inFile.open("empInfo2.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. The program terminates." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay2.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Employee name: " << firstName << " " << lastName << " " << setw(20) << setfill(' ') <<
		right << "Weekly pay: $" << setw(9) << setfill('*') << salary / 52 << " " << "Gross pay this week: " << payTotal << " " << "Tips: $" << tips << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	salaryGrossPay = salaryGrossPay + payTotal - tips;
	companyGross = companyGross + salaryGrossPay;


	cin.clear();
	cin.ignore(200, '\n');




	outFile.open("empInfo2.txt", outFile.app);
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
	inFile.open("empInfo2.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. Terminating program." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay2.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Owner's name: " << firstName << " " << lastName << " " << setw(20) << setfill(' ') <<
		right << "Weekly pay: $" << setw(10) << setfill('*') << salary / 52 << " " << endl << right << " Owner's Salary:      $" << setw(10) << salary << endl << endl << endl << endl << endl;

	inFile.close();
	outFile.close();

	companyGross = companyGross + (salary/52);


	cin.clear();
	cin.ignore(200, '\n');

	outFile.open("empInfo2.txt", outFile.app);
	outFile << hourlyGrossPay << " " << salaryGrossPay << " " << companyGross << endl;
	outFile.close();

	inFile.open("empInfo2.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. Terminating program." << endl;
		_getch();
		return 1;
	}

	outFile.open("empPay2.out", outFile.app);

	outFile << fixed << showpoint << setprecision(2) << left << "Gross houry wage expenses for this week: " << hourlyGrossPay << setw(20) << endl << "Gross Salary wage expenses for this week: "
		<< salaryGrossPay << endl << "Total gross expenses for this week: " << companyGross << endl;

	inFile.close();
	outFile.close();


	cout << "Press any key to quit." << endl;
	_getch();
	return 0;
}