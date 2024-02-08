
//#include <iostream>
//#include <cmath>
//#include <string>
//#include <algorithm>
//#include <array>
//#include <vector>
//#include <cstdlib>
//#include "MyLib.h"
//#include <iomanip>
//#include <cctype>
//#include <fstream>
//#include "ProjectOneLib.h"
//using namespace std;


//int MyPower(int Base, int Power) {
//	if (Power == 0)
//		return 1;
//	else
//		return (Base * MyPower(Base, Power - 1));
//}

//void ReadNumber(vector <int> &vNumber) {
//	char Check = 'Y';
//	int Numbers;
//	do
//	{
//		cout << "Please Enter a number";
//		cin >> Numbers;
//		vNumber.push_back(Numbers);
//
//		cout << "Do you want to add a new Number Y or N" << endl;
//		cin >> Check;
//
//	} while (Check == 'y' || Check == 'Y');
//
//
//	
//	
// }
//
//void addNumberToVector(vector <int> &Nums) 
//{
//	cout << "The Numbers in vector are: " << endl;
//		for (int i : Nums) {
//			cout << i << endl;
//		}
//		cout << endl;
//}
//
//struct StEmployees
//{
//	string firstName;
//	string lastName;
//	int age;
//	int salary;
//};
//
//void AskUser(vector<StEmployees> &vEmployees) {
//
//	char CheckChar = 'y';
//	StEmployees Employees;
//
//
//	while (CheckChar == 'y' || CheckChar == 'Y')
//	{
//		cout << "First name   ";
//		cin >> Employees.firstName;
//		cout << "Last name   ";
//		cin >> Employees.lastName;
//		cout << "age   ";
//		cin >> Employees.age;
//		cout << "Salary   ";
//		cin >> Employees.salary;
//		vEmployees.push_back(Employees);
//		cout << "Do you want to enter more employees? (Y/N): ";
//		cin >> CheckChar;
//	};
//
//};
//
//
//void PrintUsers(vector<StEmployees> &vEmployees) {
//	for (StEmployees &Employees : vEmployees) {
//		cout << "First Name:  " << Employees.firstName << endl;
//		cout << "Last Name:  " << Employees.lastName << endl;
//		cout << "age:  " << Employees.age << endl;
//		cout << "salary  " << Employees.salary << endl;
//	}
//}
//
//
//void LoadDataFromFileToVector(string fileName , vector <string> &FileContent) {
//	fstream myFile;
//
//	myFile.open("MyFile.text", ios::in);
//
//	if (myFile.is_open())
//	{
//		string Line;
//		while (getline(myFile, Line))
//		{
//			FileContent.push_back(Line);
//		}
//
//
//		myFile.close();
//	}
//
//}
//
//void SaveVectorToFile(string FileName , vector <string> FileContent) {
//	fstream myFile;
//
//	myFile.open("MyFile.text", ios::out | ios::app);
//
//	if (myFile.is_open())
//	{
//		for (string &Line : FileContent) {
//			if (Line != "")
//				myFile << Line << endl;
//		}
//
//		myFile.close();
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	//  Lesson #09 - Ternary Operator: Short Hand IF
//
//	/*int N = 1;
//	int Page = 10;
//	printf("The Page Number = %d of %d \n", N , Page);
//	printf("The result of %d + %d = %d", N, Page, N + Page);
//	cout << setw(9)*/
//	//int Number;
//	//cout << "Please write a number to check if it's positive or negatibve" << endl;
//	//cin >> Number;
//	//cout << (Number == 0 ?  "It's zero" : (Number < 0 ? "It's Negative" : "It's Positive")) << endl;
//
//	// Lesson #11 - Validate Number
//
//	//cout << MyLib::ReadNumber() << endl;
//
//	 // Lesson #12 - Bitwise AND operator convert to binary 
//
//	//cout << "Result: " << (12 & 25) << endl;
//
//	//   Lesson #13 - Bitwise OR operator convert to binary 
//
//	//co ut << "Result: " << (12 | 25) << endl;
//	
//	
//	/*int Rows[3][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12},
//	};*/
//
//	/*int x[10][10];
//
//	for (int i = 0; i < 10 ; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			x[i][j] = (i + 1) * (j + 1);
//		}
//	}*/
//
//	/*for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			printf("%0*d ", 2, x[i][j]);
//		}
//		cout << endl;
//	}*/
//	//vector <int>  Nums;
//	//
//	//ReadNumber(Nums);
//	//addNumberToVector(Nums);
//
//
//
//
//	/*vector <StEmployees> vEmplyees;
//
//	StEmployees Emplyees;
//	Emplyees.firstName = "Ahmed";
//	Emplyees.lastName = "salama";
//	Emplyees.age = 30;
//	Emplyees.salary = 15000;
//	vEmplyees.push_back(Emplyees);
//
//	Emplyees.firstName = "ashraf";
//	Emplyees.lastName = "Badr";
//	Emplyees.age = 40;
//	Emplyees.salary = 25000;
//	vEmplyees.push_back(Emplyees);
//
//	Emplyees.firstName = "islam";
//	Emplyees.lastName = "qanway";
//	Emplyees.age = 44;
//	Emplyees.salary = 20000;
//	vEmplyees.push_back(Emplyees);
//
//	for (StEmployees& Emply : vEmplyees) {
//		cout << "First name: " << Emply.firstName << endl;
//		cout << "Last name: " << Emply.lastName << endl;
//		cout << "age: " << Emply.age << endl;
//		cout << "Salary: " << Emply.salary << endl << endl << "\t------\n\n";
//	}*/
//
//	/*vector <StEmployees> Employees;
//
//	 
//	AskUser(Employees);
//	PrintUsers(Employees);*/
//
//	/*int* ptr;
//	float* ptr2;
//
//	ptr = new int;
//	ptr2 = new float;
//
//	*ptr = 20;
//	*ptr2 = 45.44f;
//
//	cout << *ptr << endl;
//	cout << *ptr2 << endl;
//
//	delete ptr;
//	delete ptr2;*/
//
//
//	/*int num;
//
//	cout << "Please Enter a number of student" << endl;
//
//	cin >> num;
//
//	float* ptr;
//
//	ptr = new float[num];
//
//	cout << "Plese enter grades of students." << endl;
//
//	for (int i = 0; i < num; i++)
//	{
//		cout << "Students" << i + 1 << ": ";
//
//		cin >> *(ptr + i);
//	}
//
//	cout << "\nDisplaying grades of students." << endl;
//
//	for (int i = 0; i < num; i++)
//	{
//		cout << "Students" << i + 1 << ": " << *(ptr + i) << endl;
//	}
//
//	delete[] ptr;*/
//
//	/*string st1 = "My Name is I'm a new programmer";	
//
//	cout << st1 << endl;
//
//	st1.insert(10, " Abdelrhman ");
//	cout << st1 << endl;
//
//	st1.append(" Inshallah i will be better");
//	cout << st1 << endl;
//
//	
//	cout << st1.at(11) << endl;
//
//	
//	cout << st1.length() << endl;
//
//	
//	cout << st1.substr(0, 21) << endl;
//
//	st1.push_back('X');
//	cout << st1 << endl;
//
//	st1.pop_back();
//	cout << st1 << endl;
//
//	
//	cout << st1.find("Abdelrhman") << endl;
//
//	if (st1.find("abdelrhman") == st1.npos)
//	{
//		cout << "M3lish 7owel tany" << endl;
//	}
//
//	st1.clear();
//	cout << st1 << endl;
//
//	char x;
//	char w; 
//
//	x = 'a';
//	w = 'A';
//
//	x = toupper(x);
//	w = tolower(w);
//
//	cout << "Convert x to A: " << x << endl;
//	cout << "Convert W to a: " << w << endl;
//
//	cout << "Is w Lower: " << islower(w) << endl;
//	cout << "Is x Upper: " << isupper(x) << endl;*/
//		
//vector <string> vFileContent;
//vector <string> vContentAdd = {"say" , "Hi" , "Or" , "Bye"};
//
//SaveVectorToFile("MyFile.txt", vContentAdd);
//
//	LoadDataFromFileToVector("MyFile.txt", vFileContent);
//
//	for (string& Line : vFileContent) {
//		cout << Line << endl;
//	 }
//
//	return 0;
//}
