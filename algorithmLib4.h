#pragma once
#pragma warning(disable : 4996)
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
#include "algorithmLib4.h"
#include <iomanip>
#include <cctype>
#include <fstream>
#include <iomanip>
using namespace std;

namespace algo4 {

	struct sDate;

	void SwapDates(sDate& Date1, sDate& Date2);

	// Problem #01/04

			string NumberToText(int Number) {
				if (Number == 0)
				{
					return "";
				}
		
					if (Number == 0) {
						return""; 
					} 
					if (Number >= 1 && Number <= 19) {
						string arr[] = { "", "One","Two","Three",
							"Four","Five","Six","Seven", 
							"Eight","Nine","Ten","Eleven",
							"Twelve","Thirteen","Fourteen",
							"Fifteen","Sixteen","Seventeen",
							"Eighteen","Nineteen" };
						return  arr[Number] + " "; 
					}
					if (Number >= 20 && Number <= 99) { 
						string arr[] = { "","","Twenty","Thirty","Forty",
							"Fifty","Sixty","Seventy",
							"Eighty","Ninety" };
						return  arr[Number / 10] + " " + NumberToText(Number % 10);
					}

					if (Number >= 100 && Number <= 199) { 
						return"One Hundred " + NumberToText(Number % 100); 
					} 
					if (Number >= 200 && Number <= 999) { 
						return   NumberToText(Number / 100) + "Hundreds " + NumberToText(Number % 100); 
					} 
					if (Number >= 1000 && Number <= 1999) { 
						return"One Thousand " + NumberToText(Number % 1000);
					}
					 if (Number >= 2000 && Number <= 999999) {
						 return   NumberToText(Number / 1000) + "Thousands " + NumberToText(Number % 1000); 
					 } if
						 (Number >= 1000000 && Number <= 1999999) { return"One Million " + NumberToText(Number % 1000000); 
					 } 
					 if (Number >= 2000000 && Number <= 999999999) {
						 return   NumberToText(Number / 1000000) + "Millions " + NumberToText(Number % 1000000);
					 } 
					 if (Number >= 1000000000 && Number <= 1999999999) {
						 return"One Billion " + NumberToText(Number % 1000000000);
					 }
					else {
						 return   NumberToText(Number / 1000000000) + "Billions " + NumberToText(Number % 1000000000);
					 }
			}
			int readNumber() {
				int Number;
				cout << "Enter a Number";
				cin >> Number;
				return Number;
			}

	// Problem #02/04

			bool IsLeapYear(short year) {
				if (year % 400 == 0)
				{
					return true;
				}
		
				else if (year % 100 == 0)
				{
					return false;
				}
				else if (year % 4 == 0)
				{
					return true;
				}
				else {
					return false;
				}
			}
			short ReadYear() {
				short year = 0;
				cout << "Please enter the year: ";
				cin >> year;
				return year;
			}

	// Problem #03/04

			bool IsLeapYearOneLineCode(short year) {
				return	(year % 400 == 0 && year % 100 != 0) || (year % 4 == 0);
			}

	// Problem #04/04

			short NumberOfDaysInYear(short year) {
				return IsLeapYear(year) ? 366 : 365;
			}
			short NumberOfHoursInYear(short year) {
				return NumberOfDaysInYear(year) * 24;
			}
			int NumberOfMinutesInYear(short year) {
				return NumberOfHoursInYear(year) * 60;
			}
			int NumberOfSecondsInYear(short year) {
				return NumberOfMinutesInYear(year) * 60;
			}

	// Problem #05/04

			short ReadMonth() {
				short Month = 0;
				cout << "Please enter the Month: ";
				cin >> Month;
				return Month;
			}



			short NumberOfDaysInMonth(short Month) {
				return IsLeapYear(Month) ? 28 : 29;
			}
			short NumberOfHoursInMonth(short Month) {
				return NumberOfDaysInMonth(Month) * 24;
			}
			int NumberOfMinutesInMonth(short Month) {
				return NumberOfHoursInMonth(Month) * 60;
			}
			int NumberOfSecondsInMonth(short Month) {
				return NumberOfMinutesInMonth(Month) * 60;
			}

	// Problem #06/04

			short NumberOfDaysInAMonth(short Month, short year) {
				if (Month < 1 || Month > 12)
					return 0;
				int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
				return (Month == 2) ? (IsLeapYear(year) ? 29 : 28) : NumberOfDays[Month - 1];
			}

	// Problem #07/04

			short ReadDay() {
				short Day = 0;
				cout << "\nPlease enter the Day: ";
				cin >> Day;
				return Day;
			}
			short DayOfWeekOrder(short Day, short Month, short Year) {
				short a, y, m;
				a = (14 - Month) / 12;
				y = Year - a;
				m = Month + (12 * a) - 2;
				//Gregorian:
				//0:sunday, 1:Monday, 2:tuesday...etc

				return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
			}
			string DayShortName(short DayOfWeekOrder) {
				string arrDayNames[] = { "Sun" , "Mon" , "Tue" , "Wed" , "Thu" , "Fri" , "Sat" };

				return arrDayNames[DayOfWeekOrder];
			}

	// Problem #08/04

			string MonthShortName(short MonthNumber) {
				string Months[12] = {
					"Jan","Feb","Mar",
					"Apr","May" ,"Jun",
					"Jul","Aug","Sep",
					"Oct","Nov","Dec",
				};

				return (Months[MonthNumber - 1]);
			}
			void PrintMonthCalendar(short Month , short Year) {
				int NumberOfDays;
				// Index Of The Day from 0 to 6
				int current = DayOfWeekOrder(1, Month, Year);
				NumberOfDays = NumberOfDaysInAMonth(Month , Year);

				//Print the Current month name
				printf("\n _______________%s_______________\n\n", MonthShortName(Month).c_str());

				//Print the columns
				printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

				//Print appropriate Spaces

				int i;

				for ( i = 0; i < current; i++)
					printf("     ");
				
				for (int j = 1; j <= NumberOfDays; j++)
				{
					printf("%5d", j);

					if (++i == 7)
					{
						i = 0;
						printf("\n");
					}
				}
				printf("\n _________________________________\n\n");
			}

	// Problem #09/04

			void PrintYearCalender(short Year) {
				printf("\n _________________________________\n\n");
				printf("        Calendar - %d\n", Year);
				printf("\n _________________________________\n");

				for (int i = 1; i <= 12; i++)
				{
					PrintMonthCalendar(i, Year);
				}
				return;
			}

	// Problem #10/04

			short NumberOfDaysFromTheBeginingOfTheYear( short Day,short Month, short Year) {
				short TotalDays = 0;

				for (int i = 1; i <= Month  -1; i++)
				{
					TotalDays += NumberOfDaysInAMonth(i, Year);
				}

				TotalDays += Day;

				return TotalDays;
			}
			
	// Problem #11/04

			struct sDate
			{
				short Day;
				short Month;
				short Year;
			};

			sDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year) {
				sDate Date;
				short RemainingDays = DateOrderInYear;
				short MonthDays = 0;

				Date.Year = Year;
				Date.Day = 1;

				while (true)
				{
					MonthDays = NumberOfDaysInAMonth(Date.Month, Year);

					if (RemainingDays > MonthDays)
					{
						RemainingDays -= MonthDays;
						Date.Month++;
					}
					else
					{
						Date.Day = RemainingDays;
						break;
					}
				}

				return Date;
			}

	// Problem #12/04

			sDate ReadFullDate() {
				sDate Date;
				Date.Day = ReadDay();
				Date.Month = ReadMonth();
				Date.Year = ReadYear();

				return Date; 
			}

			short ReadDaysToAdd() {
				short Days;
				cout << "\nHow many days to add: ";
				cin >> Days;
				return Days;
			}

			sDate DateAddDays(short Days, sDate Date) {
				short RemainingDays = Days + NumberOfDaysFromTheBeginingOfTheYear(Date.Day, Date.Month, Date.Year);
				short MonthDays = 0;
				Date.Month = 1;
				while (true)
				{
					MonthDays = NumberOfDaysInAMonth(Date.Month, Date.Year);

					if (RemainingDays > MonthDays)
					{
						RemainingDays -= MonthDays;
						Date.Month++;

						if (Date.Month > 12)
						{
							Date.Month = 1;
							Date.Year++;
						}
					}
					else
					{
						Date.Day = RemainingDays;
						break;
					}
				}

				return Date;
			}

	// Problem #13/04
			
			bool IsDate1BeforeDate2(sDate Date1, sDate Date2) {
				return (Date1.Year < Date2.Year) ? true : (( Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
			}

	// Problem #14/04

			bool IsDate1EqualDate2(sDate Date1, sDate Date2) {
				return Date1.Year == Date2.Year && Date1.Month == Date2.Month && Date1.Day == Date2.Day;
			}

	// Problem #15/04

			bool IsDayLastInMonth(sDate Date) {

				return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));

				
			}

			bool IsLastMonthInYear(short Month) {
				return (Month == 12);
			}

	// Problem #16/04

			sDate IncreaseDateByOneDay(sDate Date) {
				if (IsDayLastInMonth(Date))
				{
					if (IsLastMonthInYear(Date.Month)) {
						Date.Month = 1;
						Date.Day = 1;
						Date.Year++;
					}
					else {
						Date.Day = 1;
						Date.Month++;
					}
				}
				else
				{
					Date.Day++;
				}

				return Date;
			}

	// Problem #17/04

			int GetDiffrenceInDay(sDate Date1, sDate Date2, bool IncludDay = false) {
				int Days = 0;
				short sawpFlagValue = 1;

				if (!IsDate1BeforeDate2(Date1 , Date2))
				{
					//Swap Dates 
					SwapDates(Date1, Date2);
					sawpFlagValue = -1;
				}

				while (IsDate1BeforeDate2(Date1,Date2))
				{
					Days++;
					Date1 = IncreaseDateByOneDay(Date1);
				}

				return IncludDay ? ++Days * sawpFlagValue  : Days * sawpFlagValue;
			}

	// Problem #18/04

			sDate GetSystemDate() {
				sDate Date;
				time_t t = time(0);
				tm* now = localtime(&t);

				Date.Year = now->tm_year + 1900;
				Date.Month = now->tm_mon + 1;
				Date.Day = now->tm_mday;

				return Date;
			}

	// Problem #19/04

			void SwapDates(sDate &Date1, sDate &Date2) {
				sDate TempDate;

				TempDate.Year = Date1.Year;
				TempDate.Month = Date1.Month;
				TempDate.Day = Date1.Day;

				Date1.Year = Date2.Year;
				Date1.Month = Date2.Month;
				Date1.Day = Date2.Day;

				Date2.Year = TempDate.Year;
				Date2.Month = TempDate.Month;
				Date2.Day = TempDate.Day;
			}

	// Problem #20-32/04

			sDate IncreaseDateByXDays(short Days ,sDate Date) {
				for (short i = 1; i <= Days; i++)
				{
					Date = IncreaseDateByOneDay(Date);
				}

				return Date;
			}

			sDate IncreaseDateByOneWeek( sDate Date) {
				for (short i = 1; i <= 7; i++)
				{
					Date = IncreaseDateByOneDay(Date);
				}

				return Date;
			}

			sDate IncreaseDateByXWeek(short weeks, sDate Date) {
				for (short i = 1; i <= weeks; i++)
				{
					Date = IncreaseDateByOneWeek(Date);
				}

				return Date;
			}

			sDate IncreaseDateByOneMonth(sDate Date) {
				if (Date.Month == 12)
				{
					Date.Month = 1;
					Date.Year++;
				}
				else {
					Date.Month++;
				}
			
				short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month , Date.Year);

				if (Date.Day > NumberOfDaysInCurrentMonth)
				{
					Date.Day = NumberOfDaysInCurrentMonth;
				}

				return Date;
			}


			sDate IncreaseDateByXMonth(short Months, sDate Date) {
				for (short i = 1; i <= Months; i++)
				{
					Date = IncreaseDateByOneMonth(Date);
				}

				return Date;
			}

			sDate IncreaseDateByOneYear(sDate Date) {
				Date.Year++;
				return Date;
			}

			sDate IncreaseDateByXYear(short Years, sDate Date) {
				for (short i = 1; i <= Years; i++)
				{
					Date = IncreaseDateByOneYear(Date);
				}

				return Date;
			}

			sDate IncreaseDateByXYearFaster(short Years, sDate Date) {
				Date.Year += Years;
				return Date;
			}

			sDate IncreaseDateByOneDecade(sDate Date) {
				Date.Year += 10;
				return Date;
			}

			sDate IncreaseDateByXDecade(short Decade, sDate Date) {
				for (short i = 1; i <= Decade * 10; i++)
				{
					Date = IncreaseDateByOneYear(Date);
				}

				return Date;
			}

			sDate IncreaseDateByXDecadeFaster(short Decade, sDate Date) {
				Date.Year += Decade * 10;

				return Date;
			}

			sDate IncreaseDateByOneCentury(sDate Date) {
				Date.Year += 100;

				return Date;
			}

			sDate IncreaseDateByOneMillennium( sDate Date) {
				Date.Year += 1000;

				return Date;
			}

	// Problem #33-46/04

			bool IsFirstMonthInYear(short Month) {
				return (Month == 1);
			}

			sDate DecreaseDateByOneDay(sDate Date) {
				if (Date.Day == 1)
				{
					if (Date.Month == 1) {
						Date.Month = 12;
						Date.Day = 31;
						Date.Year--;
					}
					else {
						Date.Month--;
						Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
						
					}
				}
				else
				{
					Date.Day--;
				}

				return Date;
			}

			sDate DecreaseDateByXDays(short Days, sDate Date) {
				for (short i = 1; i <= Days; i++)
				{
					Date = DecreaseDateByOneDay(Date);
				}

				return Date;
			}

			sDate DecreaseDateByOneWeek(sDate Date) {
				for (short i = 1; i <= 7; i++)
				{
					Date = DecreaseDateByOneDay(Date);
				}

				return Date;
			}

			sDate DecreaseDateByXWeek(short weeks, sDate Date) {
				for (short i = 1; i <= weeks; i++)
				{
					Date = DecreaseDateByOneWeek(Date);
				}

				return Date;
			}

			sDate DecreaseDateByOneMonth(sDate Date) {
				if (Date.Month == 1)
				{
					Date.Month = 12;
					Date.Year--;
				}
				else {
					Date.Month--;
				}

				short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

				if (Date.Day > NumberOfDaysInCurrentMonth)
				{
					Date.Day = NumberOfDaysInCurrentMonth;
				}

				return Date;
			}


			sDate DecreaseDateByXMonth(short Months, sDate Date) {
				for (short i = 1; i <= Months; i++)
				{
					Date = DecreaseDateByOneMonth(Date);
				}

				return Date;
			}

			sDate DecreaseDateByOneYear(sDate Date) {
				Date.Year--;
				return Date;
			}

			sDate DecreaseDateByXYear(short Years, sDate Date) {
				for (short i = 1; i <= Years; i++)
				{
					Date = DecreaseDateByOneYear(Date);
				}

				return Date;
			}

			sDate DecreaseDateByXYearFaster(short Years, sDate Date) {
				Date.Year -= Years;
				return Date;
			}

			sDate DecreaseDateByOneDecade(sDate Date) {
				Date.Year -= 10;
				return Date;
			}

			sDate DecreaseDateByXDecade(short Decade, sDate Date) {
				for (short i = 1; i <= Decade * 10; i++)
				{
					Date = DecreaseDateByOneYear(Date);
				}

				return Date;
			}

			sDate DecreaseDateByXDecadeFaster(short Decade, sDate Date) {
				Date.Year -= Decade * 10;

				return Date;
			}

			sDate DecreaseDateByOneCentury(sDate Date) {
				Date.Year -= 100;

				return Date;
			}

			sDate DecreaseDateByOneMillennium(sDate Date) {
				Date.Year -= 1000;

				return Date;
			}

	// Problem #47-53/04

			short DayOfWeekOrder (sDate Date) {
				return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
			}
		
			bool IsEndOfWeek(sDate Date) {
				return DayOfWeekOrder(Date) == 6;
			}
		
			bool IsWeekEnd(sDate Date) {
				short DayIndex = DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
				return (DayIndex == 5 || DayIndex == 6);
			}
		
			bool IsBusinessDay(sDate Date) {
				
				return !IsWeekEnd(Date);
			}
		
			short DaysUntilTheEndOfWeek(sDate Date) {
				return 6 - DayOfWeekOrder(Date);
			}
			
			short DaysUntilTheEndOfMonth(sDate Date) {
				sDate EndOfMonthDate;
				EndOfMonthDate.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
				EndOfMonthDate.Month = Date.Month;
				EndOfMonthDate.Year = Date.Year;

				return GetDiffrenceInDay(Date, EndOfMonthDate, true);

			}
			
			short DaysUntilTheEndOfYear(sDate Date) {
				sDate EndOfYearDate;
				EndOfYearDate.Day = 31;
				EndOfYearDate.Month = 12;
				EndOfYearDate.Year = Date.Year;

				return GetDiffrenceInDay(Date, EndOfYearDate, true);
				
			}

	// Problem #54/04

			short  CalculateVacationDays(sDate DateFrom , sDate DateTo ) {

				short DaysCount = 0;

				while (IsDate1BeforeDate2(DateFrom , DateTo))
				{
					if (IsBusinessDay(DateFrom))
						DaysCount++;
					DateFrom = IncreaseDateByOneDay(DateFrom);
				}

				return DaysCount;

			}
	// Problem #55/04
			
			short VacationDays() {
				short Days;
				cout << "Please Enter vacation days: ";
				cin >> Days;
				return Days;

			}


			sDate CalculateVacationReturnDate(sDate DateFrom, short VacationDays) {
				short weekEndCounter = 0;

				while (IsWeekEnd(DateFrom))
				{
					DateFrom = IncreaseDateByOneDay(DateFrom);
				}

				for (short i = 1; i <= VacationDays + weekEndCounter; i++)
				{
					if (IsWeekEnd(DateFrom))
						weekEndCounter++;

					DateFrom = IncreaseDateByOneDay(DateFrom);
				}

				while (IsWeekEnd(DateFrom))
				{
					DateFrom = IncreaseDateByOneDay(DateFrom);
				}

				return DateFrom;
			}

	// Problem #56/04

			bool IsDate1AfterDate2(sDate Date1, sDate Date2) {
				return (!IsDate1BeforeDate2(Date1, Date2)) && !IsDate1EqualDate2(Date1, Date2);
			}

	// Problem #57/04

			enum eDateCompare
			{
				before = -1,
				Equal = 0,
				after = 1,
			};

			eDateCompare CompareDate(sDate Date1, sDate Date2) {

				if (IsDate1BeforeDate2(Date1, Date2))
					return eDateCompare::before;
				if (IsDate1EqualDate2(Date1, Date2))
					return eDateCompare::Equal;

				return eDateCompare::after;
			
			}

	// Problem #58/04

			struct stPeriod
			{
				sDate StartDate;
				sDate endDate;
			}; 

			


			stPeriod ReadPeriod() {
				stPeriod Period;

				cout << "\nEnter start Date:\n";
				Period.StartDate = ReadFullDate();
				cout << "\nEnter end Date:\n";
				Period.endDate = ReadFullDate();

				return Period;
			}



			bool IsOverLapPeriod(stPeriod Date1 , stPeriod Date2) {
				
				if (CompareDate(Date1.endDate, Date2.StartDate) == eDateCompare::before
					|| CompareDate(Date2.StartDate, Date2.endDate) == eDateCompare::after
					)
					return false;
				else
					return true;

			
			}

	//Problem #59/04

			int PeriodLengthInDays(stPeriod Period , bool IncludEndDate = false) {
				//return GetDiffrenceInDay(Period.StartDate , Period.endDate , IncludEndDate);

				return GetDiffrenceInDay(Period.StartDate , Period.endDate , IncludEndDate);
			}

	//Problem #60/04

			bool IsDateInPeriod(sDate Date , stPeriod Period) {
				return !(CompareDate(Date, Period.StartDate) == eDateCompare::before ||
					CompareDate(Date, Period.endDate) == eDateCompare::after
					);
			}

	//Problem #61/04

			int countOverLapDays(stPeriod Period1 , stPeriod Period2) {
				int Period1Length = PeriodLengthInDays(Period1, true);
				int Period2Length = PeriodLengthInDays(Period2, true);
				int OverLapCounter = 0;
				
				if (!IsOverLapPeriod(Period1, Period2))
					return 0;

				if (Period1Length  < Period2Length)
				{
					while (IsDate1BeforeDate2(Period1.StartDate, Period1.endDate))
					{
						if (IsDateInPeriod(Period1.StartDate , Period2))
							OverLapCounter++;

						Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
						
					}
				}
				else
				{
					while (IsDate1BeforeDate2(Period2.StartDate , Period2.endDate))
					{
						if (IsDateInPeriod(Period2.StartDate , Period1))
							OverLapCounter++;

						Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);

					
					}
				}
				return OverLapCounter;
			}

	//Problem #62/04

			bool ValidDate(sDate Date) {

				if (Date.Day < 1 || Date.Day > 31)
					return false;
				if (Date.Month < 1 || Date.Month > 12)
					return false;
				if (Date.Month == 2)
				{
					if (IsLeapYear(Date.Year))
					{
						if (Date.Day > 29)
						{
							return false;
						}
						else {
							if (Date.Day > 28)
							{
								return false;
							}
						}
					}
				}

				short DaysInMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

				if (Date.Day > DaysInMonth)
					return false;

				return true;

				
				
				//return (Date.Day >= 1 && Date.Day <= 31) && (Date.Month >= 1 && Date.Month <= 12);
			}

	//Problem #63-65/04

			string ReadStringDate(string message) {
				string DateString;
				cout << message;
				getline(cin >> ws, DateString);
				return DateString;
			 }

			sDate StringToDate(string DateString) {
				sDate Date;
				vector <string> vDate;
				vDate = algo3::SplitString(DateString , "/");
				Date.Day = stoi(vDate[0]);
				Date.Month = stoi(vDate[1]);
				Date.Year = stoi(vDate[2]);

				return Date;
			}

			string DateToString(sDate Date) {
				return to_string(Date.Day) + "/" + to_string(Date.Month) +  "/" + to_string(Date.Year);
			}

	//Problem #65/04



			string FormatDate(sDate Date, string DateFormat = "dd/mm/yyyy") {
				string FormattedDateString = "";
				FormattedDateString = algo3::ReplaceWordInString(DateFormat, "dd", to_string(Date.Day));
				FormattedDateString =  algo3::ReplaceWordInString(FormattedDateString, "mm", to_string(Date.Month));
				FormattedDateString = algo3::ReplaceWordInString(FormattedDateString, "yyyy", to_string(Date.Year));

				return FormattedDateString;
			}

}

