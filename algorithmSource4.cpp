#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <cstdlib>
#include "algorithmLib2.h"
#include "MyLib.h"
#include "ProjectTwoLib.h"
#include "ProjectThreeLib.h"
#include "algorithmLib3.h"
#include "algorithmLib4.h"
#include <iomanip>
#include <cctype>
#include <fstream>
#include <iomanip>
using namespace std;
using namespace algo3;
using namespace algo4;





int main() {


	//  Problem #01/04

			/*int Number = algo4::readNumber();
			cout << algo4::NumberToText(Number);*/

	// Problem #02/04

			/*short year = algo4::ReadYear();
			if (algo4::IsLeapYear(year))
			{
				cout << "\nYes, Year[" << year << "] is a leap year.\n";
			}
			else {
				cout << "\nNo, Year[" << year << "] is Not a leap year.\n";
			}*/

	// Problem #03/04

			// After we make all function
			/*short year = algo4::ReadYear();
			if (algo4::IsLeapYearOneLineCode(year))
			{
				cout << "\nYes, Year[" << year << "] is a leap year.\n";
			}
			else {
				cout << "\nNo, Year[" << year << "] is Not a leap year.\n";
			}*/
	// Problem #04#05/04
			/*short year = algo4::ReadYear();
			cout << "Number of Days in year [" << year << "] is: " << algo4::NumberOfDaysInYear(year) << endl;
			cout << "Number of Hours in year [" << year << "] is: " << algo4::NumberOfHoursInYear(year) << endl;
			cout << "Number of Mintues in year [" << year << "] is: " << algo4::NumberOfMinutesInYear(year) << endl;
			cout << "Number of Seconds in year [" << year << "] is: " << algo4::NumberOfSecondsInYear(year) << endl;*/
	//Problem #06/04
			
			//short year = algo4::ReadYear();
			//short month = algo4::ReadMonth();

			/*cout << "Number of Day in month [" << month << "] is: " << algo4::NumberOfDaysInAMonth(month , year) << endl;*/
	//Problem #07/04
			/*short Day = algo4::ReadDay();

			cout << "\nDate      :" << Day << "/" << month << "/" << year;
			cout << "\nDay order :" << algo4::DayNameOfWeekOrder(Day, month, year);
			cout << "\nDay Name  :" << algo4::DayShortName(algo4::DayNameOfWeekOrder(Day, month, year));*/

	//Problem #08/04
			//PrintMonthCalendar(month, year);
			
	//Problem #09/04
			//PrintYearCalender(year);
			
	//Problem #10/04
			short Year = algo4::ReadYear();
			short Month = algo4::ReadMonth();
			short Day = algo4::ReadDay();
			short DaysOrderInYear = NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);
			cout << "\n\nNumber Of Days From the begining of the year is " << DaysOrderInYear << endl;
	//Problem #11/04
			algo4::sDate Date;
			Date = GetDateFromDayOrderInYear(DaysOrderInYear, Year);
			cout << "Date for [" << DaysOrderInYear << "] is: ";
			cout << Date.Day << "/" << Date.Month << "/" << Date.Year;

			return 0;
}