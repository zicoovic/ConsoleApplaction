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

			/*short Year = algo4::ReadYear();
			short Month = algo4::ReadMonth();
			short Day = algo4::ReadDay();
			short DaysOrderInYear = NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);
			cout << "\n\nNumber Of Days From the begining of the year is " << DaysOrderInYear << endl;*/


	//Problem #11/04

			/*algo4::sDate Date;
			Date = GetDateFromDayOrderInYear(DaysOrderInYear, Year);
			cout << "Date for [" << DaysOrderInYear << "] is: ";
			cout << Date.Day << "/" << Date.Month << "/" << Date.Year;*/

	//Problem #12/04

			/*algo4::sDate  Date = algo4::ReadFullDate();
			short Days = algo4::ReadDaysToAdd();

			Date = DateAddDays(Days, Date);
			cout << "\nDate After adding [" << Days << "] is: ";
			cout << Date.Day << "/" << Date.Month << "/" << Date.Year;*/
			

	//Problem #13/04

			/*algo4::sDate Date1 = algo4::ReadFullDate();
			cout << "\n\n\n";
			algo4::sDate Date2 = algo4::ReadFullDate();

			if (IsDate1BeforeDate2(Date1, Date2))
			{
				cout << "\n\nYes, Date1 is less than Date2." << endl;
			}
			else {
				cout << "\n\nNo, Date1 is not less than Date2." << endl;
			}*/

	// Problem #14/04

			/*algo4::sDate Date1 = algo4::ReadFullDate();
			cout << "\n\n\n";
			algo4::sDate Date2 = algo4::ReadFullDate();

			if (IsDate1EqualDate2(Date1, Date2))
			{
				cout << "\n\nYes, Date1 is Equal Date2." << endl;
			}
			else {
				cout << "\n\nNo, Date1 is not Equal Date2." << endl;
			}*/

	// Problem #15/04

			/*algo4::sDate Date = algo4::ReadFullDate();*/

		/*	if (IsDayLastInMonth(Date))
				cout << "\n\nYes, Day is Last Day in Month\n\n" ;
			else 
				cout << "\n\nNo, Day is not Last Day in Month\n\n" ;
			

			if (IsLastMonthInYear(Date.Month))
				cout << "Yes, Month is Last Month In Year\n";
			else
				cout << "No, Month is not Last Month In Year\n";*/

	// Problem #16/04

		/*Date = 	IncreaseDateByOneDay(Date);

		cout << "\nDate after adding on day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;*/

	// Problem #17/04

		/*algo4::sDate Date1 = algo4::ReadFullDate();
		cout << "\n";
		algo4::sDate Date2 = algo4::ReadFullDate();
		cout << "\nDiffrence is: " << GetDiffrenceInDay(Date1, Date2) << " Day(s).";
		cout << "\nDiffrence (Including End Day) is: " << GetDiffrenceInDay(Date1, Date2, true) << "Day(s).";*/

	// Problem #18/04
	 
		/*cout << "\nPlease enter your date of birth:\n";

		algo4::sDate Date1 = algo4::ReadFullDate();

		algo4::sDate Date2 = algo4::GetSystemDate();

		cout << "\n Your age is: " << GetDiffrenceInDay(Date1, Date2, true) << "Days(s).";*/

	// Problem #19/04

		/*algo4::sDate Date1 = algo4::ReadFullDate();
		cout << "\n";
		algo4::sDate Date2 = algo4::ReadFullDate();
		cout << "\nDiffrence is: " << GetDiffrenceInDay(Date1, Date2) << " Day(s).";
		cout << "\nDiffrence (Including End Day) is: " << GetDiffrenceInDay(Date1, Date2, true) << "Day(s).";*/

	// Problems #20-32/04

		/*algo4::sDate Date = algo4::ReadFullDate();
					
		cout << "\nDate After: \n";

		Date = algo4::IncreaseDateByOneDay(Date);
		cout << "\n01-Adding one day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByXDays(10, Date);
		cout << "\n02-Adding 10 days is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByOneWeek(Date);
		cout << "\n03-Adding one Week is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByXWeek(10,Date);
		cout << "\n04-Adding 10 Weeks is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByOneMonth(Date);
		cout << "\n05-Adding one Month is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByXMonth(5, Date);
		cout << "\n06-Adding 5 Months is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByOneYear(Date);
		cout << "\n07-Adding one Year is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByXYear(10, Date);
		cout << "\n08-Adding 10 Years is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByXYearFaster(10, Date);
		cout << "\n09-Adding 10 Years (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByOneDecade(Date);
		cout << "\n10-Adding one Decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByXDecade(10, Date);
		cout << "\n11-Adding 10 Decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByXDecadeFaster(10, Date);
		cout << "\n12-Adding 10 Decade (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByOneCentury(Date);
		cout << "\n13-Adding One Century is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::IncreaseDateByOneMillennium(Date);
		cout << "\n13-Adding One Millennium is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;*/

	//Problems #33/46

		/*algo4::sDate Date = algo4::ReadFullDate();

		cout << "\nDate After: \n";

		Date = algo4::DecreaseDateByOneDay(Date);
		cout << "\n01-Subtracting one day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByXDays(10, Date);
		cout << "\n02-Subtracting 10 days is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByOneWeek(Date);
		cout << "\n03-Subtracting one Week is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByXWeek(10, Date);
		cout << "\n04-Subtracting 10 Weeks is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByOneMonth(Date);
		cout << "\n05-Subtracting one Month is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByXMonth(5, Date);
		cout << "\n06-Subtracting 5 Months is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByOneYear(Date);
		cout << "\n07-Subtracting one Year is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByXYear(10, Date);
		cout << "\n08-Subtracting 10 Years is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByXYearFaster(10, Date);
		cout << "\n09-Subtracting 10 Years (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByOneDecade(Date);
		cout << "\n10-Subtracting one Decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByXDecade(10, Date);
		cout << "\n11-Subtracting 10 Decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByXDecadeFaster(10, Date);
		cout << "\n12-Subtracting 10 Decade (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByOneCentury(Date);
		cout << "\n13-Subtracting One Century is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;
		Date = algo4::DecreaseDateByOneMillennium(Date);
		cout << "\n13-Subtracting One Millennium is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;*/
	// Problem #47-53/04
		
		//sDate Date1 = GetSystemDate();

		//cout << "\nToday is " << algo4::DayShortName(DayOfWeekOrder(Date1)) << " , "
		//	<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;

		////----------------------
		//cout << "\nIs it End of Week?\n";
		//if (IsEndOfWeek(Date1))
		//	cout << "Yes it is " << DayShortName(algo4::DayOfWeekOrder(Date1)) << " Saturday, it's of week.";
		//else
		//	cout << "No, " << algo4::DayShortName(algo4::DayOfWeekOrder(Date1)) << " Not end of week.";
		////----------------------
		//cout << "\n\nIs it Weekend?\n ";
		//if (algo4::IsWeekEnd(Date1))
		//	cout << "Yes it is a WeekEnd day.";
		//else
		//	cout << "No it is Not a WeekEnd day.";
		////----------------------
		//cout << "\n\nIs it Business Day?\n ";
		//if (algo4::IsBusinessDay(Date1))
		//	cout << "Yes it is a Business day.";
		//else
		//	cout << "No it is Not a Business day.";
		////----------------------

		//cout << "\n\nDays Until The End Of Week  : " << DaysUntilTheEndOfWeek(Date1) << endl;

		//cout << "\n\nDays Until The End Of Month : " << DaysUntilTheEndOfMonth(Date1) << endl;

		//cout << "\n\nDays Until The End Of Year : " << DaysUntilTheEndOfYear(Date1) << endl;

	// Problem #54/04

		/*cout << "\nVaction Starts: \n";
		algo4::sDate Date1 = algo4::ReadFullDate();
		cout << "\n\nVaction End: \n";
		algo4::sDate Date2 = algo4::ReadFullDate();
		

		cout << "\nVaction From: " << algo4::DayShortName(algo4::DayOfWeekOrder(Date1)) << ","
			<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;
		cout << "\nVaction To: " << algo4::DayShortName(algo4::DayOfWeekOrder(Date2)) << ","
			<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;
		cout << "Actucal vacation Days is " << algo4::CalculateVacationDays(Date1, Date2);*/

	// Problem #55/04
		/*cout << "\nVaction Starts: ";
		algo4::sDate Date1 = algo4::ReadFullDate();
		short vacationDays = algo4::VacationDays();
		algo4::sDate ReturnDate = algo4::CalculateVacationReturnDate(Date1, vacationDays);
		cout << "Return Date: " << algo4::DayShortName(algo4::DayOfWeekOrder(ReturnDate)) << " , " <<
			ReturnDate.Day << "/" << ReturnDate.Month << "/" << ReturnDate.Year << endl;*/
	
	// Problem #56/04

		/*cout << "\nEnter Date1: \n";
		algo4::sDate Date1 = ReadFullDate();
		cout << "\nEnter Date2: \n";
		algo4::sDate Date2 = ReadFullDate();

		if (algo4::IsDate1AfterDate2(Date1, Date2))
			cout << "\nYes, Date1 before Date2" << endl;
		else
			cout << "\nNo, Date1 Not Before Date2" << endl;*/
			

	//Problem #57/04

			/*cout << "\nEnter Date1: \n";
			algo4::sDate Date1 = ReadFullDate();
			cout << "\nEnter Date2: \n";
			algo4::sDate Date2 = ReadFullDate();
			cout << "\nCompare Result: " << algo4::CompareDate(Date1, Date2);*/


	//Problem #58/04
			
			/*cout << "Enter Period 1: " << endl;
			algo4::stPeriod Period1 = algo4::ReadPeriod();
			cout << "\nEnter Period 2: ";
			algo4::stPeriod Period2 = algo4::ReadPeriod();
			if (algo4::IsOverLapPeriod(Period1, Period2))
				cout << "\nYes, Periods OverLap\n";
			else
				cout << "\nNo, Periods do not OverLap\n";*/

	//problem #59/04
			
			/*cout << "Enter Period 1: " << endl;
			algo4::stPeriod Period = algo4::ReadPeriod();
			
			cout << "\nPeriod Length is: " << algo4::PeriodLengthInDays(Period) << endl;
			cout << "\nPeriod Length (Includ end day): " << algo4::PeriodLengthInDays(Period , true);*/
	//Problem #60/04
			/*cout << "Enter Period 1: " << endl;
			algo4::stPeriod Period = algo4::ReadPeriod();
			cout << "\nEnter Date to check: \n";
			algo4::sDate CheckDate = algo4::ReadFullDate();
			if (IsDateInPeriod(CheckDate, Period))
				cout << "\nYes Date is within period\n";
			else
				cout << "\nNo Date is not in period\n";*/
	//Problem #61/04
			/*cout << "Enter Period 1: " << endl;
			algo4::stPeriod Period1 = algo4::ReadPeriod();
			cout << "\nEnter Period 2: ";
			algo4::stPeriod Period2 = algo4::ReadPeriod();
			cout << "OverLap Days count is : " << countOverLapDays(Period1, Period2);*/

	//Problem #62/04
	
			//cout << "Enter Date: \n";
			//algo4::sDate Date = algo4::ReadFullDate();
			///*if (ValidDate(Date) && IsDayLastInMonth(Date))
			//	cout << "\nYes, Date is valid\n";
			//else
			//	cout << "\nNo, Date is not valid\n";*/
			//if (ValidDate(Date))
			//	cout << "\nYes, Date is valid\n";
			//else
			//	cout << "\nNo, Date is not valid\n";
			
	//Problem #63-64/04		

			/*string DateString = ReadStringDate("\nPlease enter Date dd/mm/yyyy ");
			algo4::sDate Date = StringToDate(DateString);
			cout << "\nDay: " << Date.Day;
			cout << "\nMonth: " << Date.Month;
			cout << "\nYear: " << Date.Year << endl;
			cout << "\nYou Entered: " << DateToString(Date);*/
	//Problem #65/04
			string DateString = ReadStringDate("\nPlease enter Date dd/mm/yyyy ");
			algo4::sDate Date = StringToDate(DateString);
			cout << "\n" << FormatDate(Date);
			cout << "\n" << FormatDate(Date, "yyyy/dd/mm");
			cout << "\n" << FormatDate(Date, "mm/dd/yyyy");
			cout << "\n" << FormatDate(Date, "mm-dd-yyyy");
			cout << "\n" << FormatDate(Date, "dd-mm-yyyy");
			cout << "\n" << FormatDate(Date, "Day:dd, Month:mm , Year:yyyy");
			return 0; 
}

