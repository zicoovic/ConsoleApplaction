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
	#include "algorithmSource3.h"
	#include <iomanip>
	#include <cctype>
	#include <fstream>
	#include <iomanip>
	using namespace std;
	using namespace algo3;



	int main() {

	srand((unsigned)time(NULL));

	//Problem #1/03

	int arr[3][3];
	/*FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\n The following is  a 3x3 random matrix:\n\n\n";
	PrintMatrix(arr, 3, 3);*/

	//Problem #2/03

	//PrintEachRowSum(arr, 3, 3);

	//Problem #3/03

	// int arrSum[3];

	//SumMatrixRowsInArray( arr, arrSum , 3 , 3);

	//PrintRowsSumArray(arrSum, 3);

	//Problem #4/03

	//PrintEachColSum(arr, 3 ,3);

	//Problem #5/03

	/*SumMatrixColsInArray(arr, arrSum, 3, 3);
	PrintColsSumArray(arrSum, 3);*/

	//Problem #6/03

	// int arr[3][3] , arrTransposed[3][3];
	/*FillMatrixWithOrderedNumbers(arr, 3, 3);
	cout << "\n The following is  a 3x3 ordered matrix:\n\n\n";
	PrintVector(arr, 3, 3);*/
	//cout << "\n\n";
	//Problem #7/03
	/*TransposeMatrix(arr, arrTransposed);
	cout << "\n The following is  a 3x3 Transpose matrix:\n\n\n";
	PrintArrTranspose(arrTransposed, 3, 3);*/

	//Problem #8/03
	int Matrix1[3][3], Matrix2[3][3], MatrixResult[3][3];

	/*FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\n Matrix1:\n\n\n";
	PrintMatrix(Matrix1, 3, 3);
	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\n Matrix2:\n\n\n";
	PrintMatrix(Matrix2, 3, 3);

	MultMatrixes(Matrix1, Matrix2, MatrixResult,3,3);
	cout << "\nResult:\n";
	PrintMatrix(MatrixResult, 3 ,3);*/

	//Problem #9/03
	/*cout << "-------------" << endl;
	cout << "Middle Row of Matrix1 is:\n";
	PrintMiddleRowOfMatrix(arr, 3, 3);
	cout << "Middle Col of Matrix2 is:\n";
	PrintMiddleColsOfMatrix(arr, 3, 3);*/

	//Problem #10/03
	// FillMatrixWithRandomNumbers(arr, 3, 3);
	// cout << "\n The following is  a 3x3 random matrix:\n\n\n";
	// PrintMatrix(arr, 3, 3);
	// SumAllMatrix(arr, 3, 3);
	// cout << "Sum of Matrix is: " << SumAllMatrix(arr, 3, 3);
	//Problem #11/03
	/*cout << "\n Matrix1:\n\n";
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	PrintMatrix(Matrix1, 3, 3);
	cout << "\nSum of Matrix is: " << SumAllMatrix(Matrix1, 3, 3);
	cout  << "\n------------\n";
	cout << "\n Matrix2:\n\n";
	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	PrintMatrix(Matrix2, 3, 3);
	cout << "\nSum of Matrix is: " << SumAllMatrix(Matrix2, 3, 3);
	if(AreEqualMatrices(Matrix1, Matrix2,3,3))  {
			cout << "\n\n" << "***Yes : Matrix's are equal***" << endl;
		}else {
			cout << "\n\n" << "***No: Matrix's are not equal***" << endl;
		}*/
	//Problem #12/03
	/*cout << "\n Matrix1:\n\n";
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	PrintMatrix(Matrix1, 3, 3);
	cout << "\n Matrix2:\n\n";
	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	PrintMatrix(Matrix2, 3, 3);
	
	if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3)) {
		cout << "\n\n" << "***Yes : Matrix's are equal***" << endl;
	}
	else {
		cout << "\n\n" << "***No: Matrix's are not equal***" << endl;
	}*/
	
	//Problem #13/03
	/*cout << "\n Matrix1:\n\n";
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	PrintMatrix(Matrix1, 3, 3);

	if (IsIdentityMatrix(Matrix1, 3, 3))
	{
		cout << "\n Yes, Matrix is identity" << endl;
	}
	else {
		cout << "\n No, Matrix is Not Identity" << endl;
	}*/

	//Problem #14/03
	/*cout << "\n Matrix1:\n\n";
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	PrintMatrix(Matrix1, 3, 3);
	if (IsScalarMatrix(Matrix1, 3, 3))
	{
		cout << "\n Yes, Matrix is Scalar" << endl;
	}
	else {
		cout << "\n No, Matrix is Not Scalar" << endl;
	}*/
	//Problem #15/03
	/*int Number;
	cout << "\n Matrix1:\n\n";
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	PrintMatrix(Matrix1, 3, 3);
	cout << endl << "Enter the Number to Count in Matrix: ";
	cin >> Number;
	
	cout << endl << "Number " << Number << " count in Matrix is " << CountNumberInMatrix(Matrix1, Number, 3, 3);*/
	//Problem #16/03
	// cout << "\n Matrix1:\n\n";
	// FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	// PrintMatrix(Matrix1, 3, 3);
	// if (IsSparseMatrix(Matrix1, 3, 3))
	// {
	// 	cout << endl <<  "Yes It's Sparse";
	// }
	// else {
	// 	cout << endl << "No It's Not Sparse";
	// }
	//Problem #17/03
	// int Number;
	// cout << "\n Matrix1:\n\n";
	// FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	// PrintMatrix(Matrix1, 3, 3);
	// cout << endl << "Enter the Number you want to check: ";
	// cin >> Number;
	// if (CheckNumber(Matrix1, Number, 3, 3))
	// {
	// 	cout << endl <<  "Yes It's there";
	// }
	// else {
	// 	cout << endl << "No It's Not there";
	// }

	//Problem #18/03
	// cout << "\n Matrix1:\n\n";
	// FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	// PrintMatrix(Matrix1, 3, 3);
	// cout << "\n Matrix2:\n\n";
	// FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	// PrintMatrix(Matrix2, 3, 3);
	// cout << "------\n";
	// PrintIntersectedMatrix(Matrix1,Matrix2 ,3,3);

	//Problem #19/03
	// cout << "\n Matrix1:\n\n";
	// FillMatrixWithRandomNumbers(arr, 3, 3);
	// PrintMatrix(arr, 3, 3);
	// cout << "This Min Number is: ";
	// cout << PrintMinNumberInMatrix(arr,3,3);
	// cout << "\nThis Max Number is: ";
	// cout << PrintMaxNumberInMatrix(arr,3,3);
	// cout << "The Palindrome Number is: ";
	//Problem #20/03
	/*	cout << "\n Matrix1:\n\n";
	FillMatrixWithRandomNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	if (palindromeMatrix(Matrix1,3,3))
	{
		cout << "Yes it's Palindrome" << endl;
	}else {
		cout << "No it's not Palindrome" << endl;
	}*/

	// Problem #21/03
	//PrintFibonacciUsingLoop(10);

	//Problem #22/03
	//PrintFibonacciUsingRecursion(10, 0, 1);
	//Problem #23/03
	//PrintFirstLetterOfEachWord(ReadString());
	//Problem #24/03
	//cout << UpperFirstLetterOfEachWord(ReadString());
	//Problem #25/03
	//cout << LowerFirstLetterOfEachWord(ReadString());
	//Problem #26/03
	//cout << UpperLowerLetterOfString(ReadString());
	/*string s1 = ReadString();
	cout << "All string upper" << endl;
	s1= UpperAllString(s1);
	cout << s1 << endl;
	cout << "All string Lower" << endl;
	s1 = LowerAllString(s1);
	cout << s1 << endl;*/
	//Problem #27/03
	/*char charOne = ReadChar();
	cout << "The character is: " << charOne << endl;
	cout << "\n The char after convert: " << UpperLowerLetterOfChar(charOne);*/
	//Problem #28/03
	//string s1 = ReadString();
	//cout << s1 << endl;
	/*cout << "\n after convert: ";
	s1 = LowerAllString1(s1);
	cout << s1 << endl;*/
	//Problem #29/03
	//string s1 = ReadString();
	//cout << "\nString Length = " << s1.length();
	//cout << "\nCapital Letter count = " << CountCapitalLetters(s1);
	//cout << "\nSmall Letter count = " << CountSmallLetters(s1);
	//CountString(s1);
	//Problem #30/03  ++ //Problem #31/03
	//char letter = ReadChar();
	
		//cout << "\n The Letter " << letter << " Count " << countLetter(letter, s1) << " Times\n";
		//cout << "\n The Letter " << letter << " or " << UpperLowerLetterOfChar(letter) << " Count " << countLetter(letter, s1, false)<< " Times\n";
	
	//Problem #32/03

		/*vector <char> VowelChar = { 'a', 'e', 'i' , 'o' , 'u' };
		if (CheckVowel(VowelChar, letter))
			cout << "\nYes, The Letter is Vowel" << endl;
		else
			cout << "\nNo, The Letter is not Vowel" << endl;*/

	//Problem #33/03
		//string letter = ReadString();
		vector <char> VowelChar = { 'a', 'e', 'i' , 'o' , 'u' };
		//cout << "The Number of Vowels is: " << CheckVowelInString(VowelChar, letter);
	//Problem #34/03
		//PrintVowelsInString(VowelChar, letter);
	//Problem #35/03
		//PrntString(letter);
		//PrintWordsInString(letter);
	//Problem #36/03
		//cout << "The words in string are: " << CountEachWordsInString(letter);
	//Problem #37/03
		/*vector<string> vString;
		vString = SplitString(ReadString(), " ");
		cout << "Tokens = " << vString.size() << endl;
		for (string s : vString) {
			cout << s << endl;
		}*/
	//Problem #38/03
		//cout << endl << Trim(letter) << endl << endl << TrimRight(letter) << endl << endl << TrimLeft(letter);
		
	//Problem #39/03 #40/03
		/*vector <string> join = {"ahmed" , "ali" , "maged" , "medhat"};
		string  join1[] = {"ahmed" , "ali" , "maged" , "medhat"};
		cout << "\nVector after join:\n" << endl;
		cout << JoinString(join , " ");
		cout << "\n\nArray after join:\n" << endl;
		cout << JoinString(join1, 4 , " ");*/
	//Problem #41/03
		/*cout << "\n\nString after reversing words: ";
		cout << endl << ReverseWordsInString(letter);*/
	//Problem #42/03
		/*string S1 = ReadString();
		string ReplaceWord = "Egypt";
		string ToReplace = "Tanta";
		cout << endl << "Original String\n" << S1;
		cout << endl << "String After Replace: \n" << ReplaceWordInString(S1, ReplaceWord, ToReplace);*/
	//Problem #43/03
		//string s1 = "Welcome to Egypt , Egypt is a nice country";
		//string stringToReplace = "egypt";
		//string ReplaceTo = "Russia";
		//cout << "Orginal String: \n" << s1 << endl;
		//cout << "\n\nReplace with match case: ";
		//cout << "\n" << ReplaceCustomString(s1, stringToReplace, ReplaceTo);
		//cout << "\n\nReplace with dont Match case: ";
		//cout << "\n" << ReplaceCustomString(s1, stringToReplace, ReplaceTo, false);
	//Problem #44/03
		/*string letter = ReadString();
		cout << "Punctuations Removel: \n\n";
		cout << endl <<  RemovePunctuations(letter);*/
	//Problem #45/03
	/*	Client client;
		client = ReadClientData();
		cout << "\n\nClient Record for Saving is: \n";
		cout << ConvertRecordToLine(client);*/
	//Problem #46/03
	/*	Client client;
		string Record = ConvertRecordToLine(client);
		ReadClientData();*/
		/*string stLine = "A150#//#1234#//#Ahmed#//#7777777#//#100000";
		cout << "\n\nClient Record for Saving is: \n" << stLine;
	  convertLineToRecord(stLine);
		PrintClientRecord(convertLineToRecord(stLine));*/

	//Problem #47/03

		//AddClients();
	//Problem #48/03

		/*vector <Client> vClients = LoadClientsDataFromFile(ClientsFileName);
		PrintAllClientsData(vClients);*/

	//Problme #49/03

		/*Client client;
		string AccountNumber = ReadClientAccountNumber();

		if (FindClientByAccountNumber(AccountNumber, client)) 
		{ 
			PrintClientCard(client);
		}
		else {
			cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
		}*/

	//Problem #50/03

		/*vector <Client> vClients = LoadClientsDataFromFile(ClientsFileName);
		string AccountNumber = ReadClientAccountNumber();
		DeleteClientByAccountNumber(AccountNumber, vClients);*/

	//Problem #51/03
		vector <Client> vClients = LoadClientsDataFromFile(ClientsFileName);
		string AccountNumber = ReadClientAccountNumber();
		UpdateClientByAccountNumber(AccountNumber, vClients);
		return 0;
	}