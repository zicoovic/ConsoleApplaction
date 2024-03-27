#pragma once

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
#include <iomanip>
#include <cctype>
#include <fstream>
#include <iomanip>
using namespace std;

namespace algo4 {

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
				cout << "Please enter the Day: ";
				cin >> Day;
				return Day;
			}
			short DayNameOfWeekOrder(short Day, short Month, short Year) {
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
				int current = DayNameOfWeekOrder(1, Month, Year);
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
}