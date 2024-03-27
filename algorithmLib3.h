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

namespace algo3 {
	// problem #1/03
//Problem for action
// problem for working laptop

	void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
		for (short i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				arr[i][j] = ProjectTwo::RandomNumber(1, 100);
			}
		}
	}

	void PrintMatrix(int arr[3][3], short Rows, short Cols) {
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{

				printf(" %0*d  ", 2, arr[i][j]);

			}
			cout << "\n";
		}
	}

	// problem 2/03

	int RowSum(int arr[3][3], short RowNumber, short Cols) {

		int sum = 0;
		for (short j = 0; j <= Cols - 1; j++)
		{
			sum += arr[RowNumber][j];
		}

		return sum;
	}

	void PrintEachRowSum(int arr[3][3], short Rows, short Cols) {
		cout << "-----------------" << endl;
		for (int i = 0; i < Rows; i++)
		{
			cout << " Row " << i + 1 << " Sum = " << RowSum(arr, i, Cols) << endl;
		}
	}

	// problem 3/03

	void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols) {
		for (int i = 0; i < Rows; i++)
		{
			arrSum[i] = RowSum(arr, i, Cols);
		}
	}

	void PrintRowsSumArray(int arr[3], short Rows) {
		cout << "\nThe Following are the sum of each row in the matrix:\n";

		for (int i = 0; i < Rows; i++)
		{
			cout << " Row " << i + 1 << " Sum = " << arr[i] << endl;
		}
	}

	// Problem #4/03

	int ColSum(int arr[3][3], short Rows, short ColNumber) {

		int sum = 0;
		for (short j = 0; j <= Rows - 1; j++)
		{
			sum += arr[j][ColNumber];
		}

		return sum;
	}

	void PrintEachColSum(int arr[3][3], short Rows, short Cols) {
		cout << "-----------------" << endl;
		for (int i = 0; i < Cols; i++)
		{
			cout << " Col " << i + 1 << " Sum = " << ColSum(arr, Rows, i) << endl;
		}
	}

	//Problem #5/03

	void SumMatrixColsInArray(int arr[3][3], int arrSum[3], short Cols, short Rows) {
		for (int i = 0; i < Cols; i++)
		{
			arrSum[i] = ColSum(arr, Rows, i);
		}
	}

	void PrintColsSumArray(int arr[3], short Cols) {
		cout << "\nThe Following are the sum of each Cols in the matrix:\n";

		for (int i = 0; i < Cols; i++)
		{
			cout << " Row " << i + 1 << " Sum = " << arr[i] << endl;
		}
	}

	//Problem #6/03

	void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols) {
		short counter = 0;
		for (short i = 0; i < Rows; i++)
		{

			for (int j = 0; j < Cols; j++)
			{
				counter++;

				arr[i][j] = counter;
			}
		}
	}

	//Problem #7/03

	void TransposeMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols) {
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				arrTransposed[i][j] = arr[j][i];
			}

		}
	}

	void PrintArrTranspose(int arr[3][3], short Rows, short Cols) {
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				cout << setw(3) << arr[j][i] << "    ";
			}
			cout << "\n";
		}
	}

	// Problem #08/03

	void MultMatrixes(int Matrix1[3][3], int Matrix2[3][3], int MatrixResult[3][3], short Rows, short Cols) {


		for (short i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				MatrixResult[i][j] = Matrix1[i][j] * Matrix2[i][j];
			}
		}


	}

	// Problem #09/03

	void PrintMiddleRowOfMatrix(int arr[3][3], int Rows, int Cols) {
		short MiddleRow = Rows / 2;

		for (int i = 0; i < Cols; i++)
		{
			printf(" %0*d  ", 2, arr[MiddleRow][i]);
		}
		cout << "\n";
	}

	void PrintMiddleColsOfMatrix(int arr[3][3], int Rows, int Cols) {
		short MiddleCols = Cols / 2;

		for (int i = 0; i < Rows; i++)
		{
			printf(" %0*d  ", 2, arr[i][MiddleCols]);
		}
		cout << "\n";
	}


	//Problem #10/03
	int SumAllMatrix(int arr[3][3], short Rows, short Cols) {

		int sum = 0;
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				sum += arr[j][i];
			}

		}
		return sum;
	}

	//Problem #11/03
	//MySolution
	void CompareMatrix(int arrMatrix1[3][3], int arrMatrix2[3][3], short Rows, short Cols) {
		if (arrMatrix1 == arrMatrix2) {
			cout << "\n\n" << "***Yes : Matrix's are equal***" << endl;
		}
		else {
			cout << "\n\n" << "***No: Matrix's are not equal***" << endl;
		}
	}

	bool AreEqualMatrices(int arrMatrix1[3][3], int arrMatrix2[3][3], short Rows, short Cols) {
		return (SumAllMatrix(arrMatrix1, Rows, Cols) == SumAllMatrix(arrMatrix2, Rows, Cols));
	}

	// Problem #12/03

	bool AreTypicalMatrices(int arrMatrix1[3][3], int arrMatrix2[3][3], short Rows, short Cols) {
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				if (arrMatrix1[i][j] != arrMatrix2[i][j])
				{
					return false;
				}
			}
		}
	}

	// Problem #13/03

	bool IsIdentityMatrix(int Matrix1[3][3], int Rows, int Cols) {
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				if (i == j && Matrix1[i][j] != 1)
				{
					return false;
				}
				else if (i != j && Matrix1[i][j] != 0) {
					return false;
				}
			}
		}
	}

	//Problem #14/03

	bool IsScalarMatrix(int Matrix1[3][3], int Rows, int Cols) {

		int FirstDiagElement = Matrix1[0][0];
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				if (i == j && Matrix1[i][j] != FirstDiagElement)
				{
					return false;
				}
				else if (i != j && Matrix1[i][j] != 0) {
					return false;
				}
			}
		}

		return true;
	}

	//Problem #15/03

	int CountNumberInMatrix(int Matrix1[3][3], int Number, int Rows, int Cols) {
		int  counter = 0;

		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				if (Matrix1[i][j] == Number)
				{
					counter++;
				}
			}
		}
		return counter;

	}

	//Problem #16/03

	bool IsSparseMatrix(int Matrix1[3][3], int Rows, int Cols) {
		short MatrixSize = Rows * Cols;
		return (CountNumberInMatrix(Matrix1, 0, Rows, Cols) >= (MatrixSize / 2));
	}

	//Problem #17/03

	bool CheckNumber(int Matrix1[3][3], int Number, int Rows, int Cols) {
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				if (Number == Matrix1[i][j])
				{
					return true;
				}
			}
		}
		return false;
	}

	//Problem #18/03


	void PrintIntersectedMatrix(int arr1[3][3], int arr2[3][3], short Rows, short Cols) {
		int Number;
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				Number = arr1[i][j];

				if (CheckNumber(arr2, Number, Rows, Cols)) {
					cout << setw(3) << Number << "    ";
				}
			}

		}
	}

	//Problem #19/03

	int PrintMinNumberInMatrix(int Matrix1[3][3], int Rows, int Cols) {

		int MinNumber = Matrix1[0][0];
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				MinNumber = min(MinNumber, Matrix1[i][j]);

				// if (Matrix1[i][j] < MinNumber)
				// {
				// 	MinNumber = Matrix1[i][j];
				// }

			}

		}
		return MinNumber;
	}

	int PrintMaxNumberInMatrix(int Matrix1[3][3], int Rows, int Cols) {

		int MaxNumber = Matrix1[0][0];
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{

				MaxNumber = max(MaxNumber, Matrix1[i][j]);
				// if (Matrix1[i][j] > MaxNumber)
				// {
				// 	MaxNumber = Matrix1[i][j];
				// }

			}

		}
		return MaxNumber;
	}

	//Problem #20/03

	bool palindromeMatrix(int Matrix[3][3], int Rows, int Cols) {
		for (int i = 0; i < Rows; i++) {
			for (int j = 0; j < Cols / 2; j++)
			{
				if (Matrix[i][j] != Matrix[i][Cols - 1 - j]) {
					return false;
				}
			}
		}

		return true;
	}

	//Problem #21/03

	void PrintFibonacciUsingLoop(short Number) {
		int FebNumber = 0;
		int prev2 = 0, prev1 = 1;
		cout << "1   ";
		for (short i = 2; i <= Number; i++)
		{
			FebNumber = prev1 + prev2;
			cout << FebNumber << "     ";
			prev2 = prev1;
			prev1 = FebNumber;
		}
	}

	//Problem #22/03

	void PrintFibonacciUsingRecursion(short Number, int prev1, int prev2) {
		int febNumber = 0;

		if (Number > 0)
		{
			febNumber = prev2 + prev1;
			prev2 = prev1;
			prev1 = febNumber;
			cout << febNumber << "    ";
			PrintFibonacciUsingRecursion(Number - 1, prev1, prev2);
		}
	}

	//Problem #23/03

	string ReadString() {
		string Write;
		cout << "Please Enter Your String\n";
		getline(cin, Write);
		return Write;
	}

	void PrintFirstLetterOfEachWord(string s1) {
		bool isFirstLetter = true;
		cout << "\nFirst Letters of this string:  \n";
		for (short i = 0; i < s1.length(); i++)
		{
			if (s1[i] != ' ' && isFirstLetter)
			{
				cout << toupper(s1[i]) << endl;
			}
			isFirstLetter = (s1[i] == ' ' ? true : false);
		}
	}

	//Problem #25/03

	string UpperFirstLetterOfEachWord(string s1) {

		bool isFirstLetter = true;
		for (short i = 0; i < s1.length(); i++)
		{
			if (s1[i] != ' ' && isFirstLetter)
			{
				s1[i] = toupper(s1[i]);
			}
			isFirstLetter = (s1[i] == ' ' ? true : false);
		}

		return s1;
	}

	//Problem #25/03

	string LowerFirstLetterOfEachWord(string s1) {

		bool isFirstLetter = true;
		for (short i = 0; i < s1.length(); i++)
		{
			if (s1[i] != ' ' && isFirstLetter)
			{
				s1[i] = tolower(s1[i]);
			}
			isFirstLetter = (s1[i] == ' ' ? true : false);
		}

		return s1;
	}

	//Problem #26/03
	string UpperAllString(string s1) {
		for (short i = 0; i < s1.length(); i++)
		{
			s1[i] = toupper(s1[i]);
		}
		return s1;
	}

	string LowerAllString(string s1) {
		for (short i = 0; i < s1.length(); i++)
		{
			s1[i] = tolower(s1[i]);
		}
		return s1;
	}

	// Problem 27/03

	char ReadChar() {
		char Char;
		cout << "Please write the character" << endl;
		cin >> Char;
		return Char;
	}

	char UpperLowerLetterOfChar(char s1) {
		return isupper(s1) ? tolower(s1) : toupper(s1);
	}

	//Problem #28/03

	string LowerAllString1(string s1) {
		for (short i = 0; i < s1.length(); i++)
		{
			isupper(s1[i]) ? s1[i] = tolower(s1[i]) : toupper(s1[i]);
		}
		return s1;
	}


	string InvertAllStringLettersCase(string s1) {
		for (short i = 0; i < s1.length(); i++)
		{
			s1[i] = UpperLowerLetterOfChar(s1[i]);
		}
		return s1;
	}

	//Problem #29/03

	/*void CountString(string s1) {
		int LengthCounter = 0, CapitalLetterCounter = 0, SmallLetterCounter = 0;
		for (short i = 0; i < s1.length(); i++)
		{
			if (isupper(s1[i]))
			{
				CapitalLetterCounter++;
			}
			else if (islower(s1[i]))
			{
				SmallLetterCounter++;
			}
		}
		cout << "\nstring Length = " << s1.length();
		cout << "\nCapital Letters Count = " << CapitalLetterCounter;
		cout << "\nSmall Letters count = " << SmallLetterCounter;
	}*/

	int CountCapitalLetters(string S1) {
		int CapitalLetterCounter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (isupper(S1[i]))
			{
				CapitalLetterCounter++;
			}
		}
		return CapitalLetterCounter;
	}

	int CountSmallLetters(string S1) {
		int smallLetterCounter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (islower(S1[i]))
			{
				smallLetterCounter++;
			}
		}
		return smallLetterCounter;
	}


	//Problem #30/03  ++ //Problem #32/03


	short countLetter(char Letter, string s1, bool MatchCase = true) {
		short counter = 0;

		for (short i = 0; i < s1.length(); i++)
		{
			if (MatchCase)
			{
				if (s1[i] == Letter)
					counter++;
			}
			else {
				if (tolower(s1[i]) == tolower(Letter))
					counter++;
			}
		}
		return counter;
	}

	//Problem #32/03



	bool CheckVowel(vector <char> vowel, char Letter) {
		for (int i = 0; i < vowel.size(); i++)
		{
			if (tolower(Letter) == vowel[i])
			{
				return true;
			}
		}
		return false;
	}

	//Problem #33/03

	short CheckVowelInString(vector <char> vowel, string Letter) {
		short counter = 0;
		for (int i = 0; i < Letter.length(); i++)
		{

			char lowercaseLetter = tolower(Letter[i]); // Convert current letter to lowercase
			for (char v : vowel) {
				if (tolower(v) == lowercaseLetter) {
					counter++;
				}
			}
		}
		return counter;
	}

	//Problem #34/03

	void PrintVowelsInString(vector <char> vowel, string Letter) {
		cout << "\nVowels in string are: ";
		for (short i = 0; i < Letter.length(); i++)
		{
			if (CheckVowel(vowel, Letter[i]))
			{
				cout << Letter[i] << "    ";
			}
		}

	}

	//Problem #35/03

	/*void PrntString(string s1) {
		cout << s1 << endl;
		for (short i = 0; i < s1.length(); i++)
		{
			if (s1[i] = ' ') {
				cout << endl;
			}
		}
	}*/

	void PrintWordsInString(string s1) {
		string delim = " ";
		cout << "\nYour String Words are:  \n\n";
		short pos = 0;
		string sword;

		while ((pos = s1.find(delim)) != std::string::npos)
		{
			sword = s1.substr(0, pos);
			if (sword != "")
			{
				cout << sword << endl;
			}

			s1.erase(0, pos + delim.length());
		}

		if (s1 != "")
		{
			cout << s1 << endl;
		}
	}

	//Problem #36/03

	short CountEachWordsInString(string s1) {
		string delim = " ";
		short pos = 0;
		string sword;
		short counter = 0;
		while ((pos = s1.find(delim)) != std::string::npos)
		{
			sword = s1.substr(0, pos);
			if (sword != "")
			{
				counter++;
			}

			s1.erase(0, pos + delim.length());
		}

		if (s1 != "")
		{
			counter++;
		}

		return counter;
	}

	//Problem #37/03

	vector <string> SplitString(string s1, string Delim) {
		vector<string> vString;
		short pos = 0;
		string sword;

		while ((pos = s1.find(Delim)) != std::string::npos)
		{
			sword = s1.substr(0, pos);
			if (sword != "")
			{
				vString.push_back(sword);
			}

			s1.erase(0, pos + Delim.length());
		}

		if (s1 != "")
		{
			vString.push_back(s1);
		}

		return vString;
	}

	//Problem #38/03

	string TrimLeft(string S1) {
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(1, S1.length() - i);
			}
		}

		return "";
	}


	string TrimRight(string S1) {
		for (short i = S1.length() - 1; i >= 0; i--)
		{
			if (S1[i] != ' ') {
				return S1.substr(0, i + 1);
			}
		}

		return "";
	}

	string Trim(string S1) {
		return (TrimLeft(TrimRight(S1)));
	}

	//Problem #39/03

	string JoinString(vector <string> join, string Delim) {
		string S1;
		for (string& s : join) {
			S1 = S1 + s + Delim;
		}

		return S1.substr(0, S1.length() - Delim.length());
	}

	//Problem #40/03

	string JoinString(string join[], short Length, string Delim) {
		string S1;

		for (short i = 0; i < Length; i++)
		{
			S1 = S1 + join[i] + Delim;
		}

		return S1.substr(0, S1.length() - Delim.length());
	}

	//Problem #41/03

	string ReverseWordsInString(string s1) {
		vector <string> vString;
		string s2 = " ";

		vString = SplitString(s1, " ");

		vector <string>::iterator iter = vString.end();

		while (iter != vString.begin())
		{
			--iter;

			s2 += *iter + " ";
		}

		s2 = s2.substr(0, s2.length() - 1);

		return s2;
	}

	//Problem #42/03

	string ReplaceWordInString(string S1, string StringReplace, string ReplaceTo) {

		short pos = S1.find(StringReplace);
		while (pos != std::string::npos)
		{
			S1 = S1.replace(pos, StringReplace.length(), ReplaceTo);
			pos = S1.find(StringReplace);
		}

		return S1;
	}

	//Problem #43/03

	string ReplaceCustomString(string S1, string StringToReplace, string ReplaceTo, bool MatchCase = true) {

		vector <string> vString = SplitString(S1, " ");
		for (string& s : vString)
		{
			if (MatchCase)
			{
				if (s == StringToReplace)
				{
					s = ReplaceTo;
				}
			}
			else {
				if (LowerAllString(s) == LowerAllString(StringToReplace)) {
					s = ReplaceTo;
				}
			}
		}

		return JoinString(vString, " ");
	}

	//Problem #44/03

	bool isPunct(char c) {
		return (c >= 33 && c <= 47);
	}

	string RemovePunctuations(string S1) {
		std::string s2 = "";

		for (char c : S1) {
			if (!isPunct(c)) {
				s2 += c;
			}
		}

		return s2;
	}

	// This part is very important because we will use it in project

	//Problem #45/03
	
	//void ConvertLinetoRecord();
	struct Client
	{
		string AccountNumber;
		string PinCode;
		string Name;
		string Phone;
		double AccountBalance;
		bool MarkForDelete = false;
	};


	Client ConvertLinetoRecord(string Line, string Seperator = "#/#") {
		Client client;
		vector<string> vClientData;
		vClientData = SplitString(Line, Seperator);
		client.AccountNumber = vClientData[0];
		client.PinCode = vClientData[1];
		client.Name = vClientData[2];
		client.Phone = vClientData[3];
		client.AccountBalance = stod(vClientData[4]);//cast string to double

		return client;
	}

	bool ClientExistsByAccountNumber(string AccountNumber, string FileName)
	{

		vector <algo3::Client> vClients;
		fstream MyFile;
		MyFile.open(FileName, ios::in);//read Mode

		if (MyFile.is_open())
		{
			string Line;
			algo3::Client Client;

			while (getline(MyFile, Line))
			{
				Client = ConvertLinetoRecord(Line);
				if (Client.AccountNumber == AccountNumber)
				{
					MyFile.close();
					return true;
				}
				vClients.push_back(Client);
			}

			MyFile.close();

		}
		return false;
	}

	Client ReadClientData() {

		Client client;

		cout << "\nPlease Enter Account Number: ";
		// we use WS to clear all whitespace character
		getline(cin >> ws, client.AccountNumber);

		while (ClientExistsByAccountNumber(client.AccountNumber, "Clients.txt"))
		{
			cout << "\nClient With [" << client.AccountNumber << "] already exists, Enter Another account number" << endl;
			getline(cin >> ws, client.AccountNumber);
		}
		
		cout << "\nPlease enter Pin Code: ";
		getline(cin, client.PinCode);
		cout << "\nPlease enter your Name: ";
		getline(cin, client.Name);
		cout << "\nPlease write your phone number: ";
		getline(cin, client.Phone);
		cout << "\nPlease enter your Account Balance: ";
		cin >> client.AccountBalance;

		return client;
	}

	string ConvertRecordToLine(Client client, string seperator = "#/#") {
		string clientRecord = "";

		clientRecord += client.AccountNumber + seperator;
		clientRecord += client.Name + seperator;
		clientRecord += client.PinCode + seperator;
		clientRecord += client.Phone + seperator;
		clientRecord += to_string(client.AccountBalance);

		return clientRecord;
	}

	//Problem #46/03




	void PrintClientRecord(Client client) {
		cout << "| " << setw(15) << left << client.AccountNumber;
		cout << "| " << setw(10) << left << client.PinCode;
		cout << "| " << setw(40) << left << client.Name;
		cout << "| " << setw(12) << left << client.Phone;
		cout << "| " << setw(12) << left << client.AccountBalance;
	}

	void PrintClientCard(Client client) {
		cout << "\nThe following are the client details:\n";
		cout << "\nAccout Number: " << client.AccountNumber;
		cout << "\nPin Code     : " << client.PinCode;
		cout << "\nName         : " << client.Name;
		cout << "\nPhone        : " << client.Phone;
		cout << "\nAccount Balance: " << client.AccountBalance;
	}

	//Problem #47/03
	const string ClientsFileName = "Clients.txt";
	void AddDataLineToFile(string FileName, string stDataLine) {
		fstream MyFile;

		MyFile.open(FileName, ios::out | ios::app);

		if (MyFile.is_open())
		{
			MyFile << stDataLine << endl;

			MyFile.close();
		}
	}

	void AddNewClient() {
		Client client;
		client = ReadClientData();
		AddDataLineToFile(ClientsFileName, ConvertRecordToLine(client));
	}
	void AddClients() {
		char AddMore = 'Y';
		do
		{
			system("cls");
			cout << "Adding New Client:\n\n";

			AddNewClient();
			cout << "\nClient Added Successfully, do you want to Add More client? ";
			cin >> AddMore;

		} while (toupper(AddMore) == 'Y');
	}

	//Problem #48/03

	vector<Client> LoadClientsDataFromFile(string FileName) {
		vector <Client> vClients;
		fstream MyFile;
		MyFile.open(FileName, ios::in); // read Mode
		if (MyFile.is_open()) {
			string Line;
			Client client;
			while (getline(MyFile, Line)) {
				client = ConvertLinetoRecord(Line);
				vClients.push_back(client);
			}
			MyFile.close();
		}
		return vClients;
	}



	/*void PrintClientRecord(const Client& client) {
		cout << "| " << setw(15) << left << client.AccountNumber;
		cout << "| " << setw(10) << left << client.PinCode;
		cout << "| " << setw(40) << left << client.Name;
		cout << "| " << setw(12) << left << client.Phone;
		cout << "| " << setw(12) << left << client.AccountBalance << "|\n";
	}*/

	void PrintAllClientsData(const vector<Client>& vClients) {
		cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).\n";
		cout << "______________________________________________________________________________________\n";
		cout << "| " << left << setw(15) << "Account Number";
		cout << "| " << left << setw(10) << "Pin Code";
		cout << "| " << left << setw(40) << "Client Name";
		cout << "| " << left << setw(12) << "Phone";
		cout << "| " << left << setw(12) << "Balance |\n";
		cout << "______________________________________________________________________________________\n";

		for (const Client& client : vClients) {
			PrintClientRecord(client);
		}

		cout << "______________________________________________________________________________________\n";
	}

	//Problem #49/03

	string ReadClientAccountNumber() {
		string FindNumber = "";
		cout << "Please enter Account Number: ";
		cin >> FindNumber;
		return FindNumber;
	}

	bool FindClientByAccountNumber(string accountNumber, vector <Client> clients, Client& client) {

		vector <Client> vClients = LoadClientsDataFromFile(ClientsFileName);

		for (Client c : vClients)
		{
			if (c.AccountNumber == accountNumber)
			{
				client = c;
				return true;
			}
		}

		return false;
	}

	//Problem #50/03


	bool MarkClientForDeleteByAccountNumber(string accountNumber, vector <Client>& vClient) {
		for (Client& c : vClient)
		{
			if (c.AccountNumber == accountNumber)
			{
				c.MarkForDelete = true;
				return true;
			}
		}

		return false;
	}

	vector <Client> SaveCleintsDataToFile(string FileName, vector <Client> vClients) {
		fstream MyFile;
		MyFile.open(FileName, ios::out);
		string DataLine;

		if (MyFile.is_open())
		{
			for (Client c : vClients)
			{
				if (c.MarkForDelete == false)
				{
					DataLine = ConvertRecordToLine(c);
					MyFile << DataLine << endl;
				}
			}
			MyFile.close();
		}
		return vClients;
	}

	bool DeleteClientByAccountNumber(string accountNumber, vector <Client>& vClient) {
		Client client;

		char answer = 'n';

		if (FindClientByAccountNumber(accountNumber, vClient, client))
		{
			PrintClientCard(client);

			cout << "\n\nAre you sure you want delete this client? y/n";
			cin >> answer;
			if (answer == 'y' || answer == 'Y')
			{
				MarkClientForDeleteByAccountNumber(accountNumber, vClient);
				SaveCleintsDataToFile(ClientsFileName, vClient);

				//Refresh Clients

				vClient = LoadClientsDataFromFile(ClientsFileName);
				cout << "\n\nClient Deleted Successfully.";
				return true;
			}
		}
		else {
			cout << "\nClient with account Number (" << accountNumber << ") is Not Found" << endl;
			return false;
		}
	}
	//Problem #51/03

	void MarkClientForUpdateByAccountNumber() {

	}

	Client ChangeClientRecord(string accountNumber) {
		Client client;
		client.AccountNumber = accountNumber;
		
		cout << "\nPlease enter Pin Code: ";
		getline(cin >> ws, client.PinCode);
		cout << "\nPlease enter your Name: ";
		getline(cin, client.Name);
		cout << "\nPlease write your phone number: ";
		getline(cin, client.Phone);
		cout << "\nPlease enter your Account Balance: ";
		cin >> client.AccountBalance;

		return client;


	}

	bool UpdateClientByAccountNumber(string accountNumber , vector <Client> &vClients) {
		Client client;

		char answer = 'n';

		if (FindClientByAccountNumber(accountNumber, vClients, client))
		{
			PrintClientCard(client);

			cout << "\n\nAre you sure you want Update this client? y/n";
			cin >> answer;
			if (answer == 'y' || answer == 'Y')
			{
				for ( Client& c : vClients)
				{
					if (c.AccountNumber == accountNumber)
					{
						c = ChangeClientRecord(accountNumber);
						break;
					}
				}

				SaveCleintsDataToFile(ClientsFileName , vClients);
				
				cout << "\n\nClient Updated Successfully.";
				return true;
			}
		}
		else {
			cout << "\nClient with account Number (" << accountNumber << ") is Not Found" << endl;
			return false;
		}
	}
}