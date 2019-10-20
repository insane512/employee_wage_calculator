// payrate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;









int main()
{
	// lookup employee rate

	double rate;
	cout << "Enter The Employee Rate: ";
	cin >> rate;

 //lookup number of hours per week

	int hours;
	cout << "Enter The Number Of Hours Worked: ";
	cin >> hours;


 //if number is equal to or less than 40 week multiply by rate return total

	double reg_total = rate * hours;

	if (hours <= 40)
	{
		cout << "The Pay Is: " << reg_total << endl;
	}

	
	//if number is over 40 hrs subtract total hrs - 40 then multiply by rate divided by 2 then add reg pay for total
	else if (hours > 40)
	{
		int overtime_hr = hours - 40;
		double overtime_rate = rate / 2;

		cout << "The Pay Is: " << reg_total + (overtime_rate * overtime_hr) << endl;
	}


	
	
 


 
}


