//#pragma once
//
//#include <iostream>
//
//using namespace std;
//
//namespace MyLib {
//	void Test() {
//		cout << "Hi From My Library" << endl;
//
//		int number = 5;
//
//		 (number <= 4) ? "hi" : "bye";
//	}
//
//	int ReadNumber() {
//		int Number;
//		cout << "\n Please enter a number?\n";
//		cin >> Number;
//
//		while (cin.fail())
//		{
//			cin.clear();
//			cin.ignore(numeric_limits <streamsize>::max(), '\n');
//			cout << "Invalid Number, Enter a vaild one" << endl;
//
//			cin >> Number;
//		}
//
//
//		return Number;
//
//	}
//
//
//}