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
	using namespace std;

	// problem #1/03
	//Problem for action
	// problem for working laptop

	void FillMatrixWithRandomNumbers(int arr[3][3] , short Rows , short Cols) {
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
			arrSum[i] = ColSum(arr, Rows, i );
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

	void MultMatrixes(int Matrix1[3][3],  int Matrix2[3][3], int MatrixResult[3][3], short Rows, short Cols) {

	
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
	int SumAllMatrix(int arr[3][3],  short Rows, short Cols) {

		int sum = 0;
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				sum+= arr[j][i];
			}

		}
		return sum;
	}

	//Problem #11/03
	//MySolution
	void CompareMatrix(int arrMatrix1[3][3] , int arrMatrix2[3][3] , short Rows, short Cols) {
		if(arrMatrix1 == arrMatrix2)  {
			cout << "\n\n" << "***Yes : Matrix's are equal***" << endl;
		}else {
			cout << "\n\n" << "***No: Matrix's are not equal***" << endl;
		}
	}

	bool AreEqualMatrices(int arrMatrix1[3][3] , int arrMatrix2[3][3] , short Rows, short Cols) {
		return (SumAllMatrix(arrMatrix1,Rows,Cols) == SumAllMatrix(arrMatrix2,Rows,Cols));
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
		return (CountNumberInMatrix( Matrix1, 0, Rows,  Cols) >= (MatrixSize / 2));
	}

	//Problem #17/03

	bool CheckNumber(int Matrix1[3][3],int Number,  int Rows, int Cols) {
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

				if (CheckNumber(arr2,Number,Rows,Cols)) {
					cout  <<setw(3) << Number << "    ";
            }
			}
		
		}
	}

	//Problem #19/03

	int PrintMinNumberInMatrix(int Matrix1[3][3],  int Rows, int Cols) {

		int MinNumber  = Matrix1[0][0];
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{
				MinNumber  = min(MinNumber , Matrix1[i][j]);

				// if (Matrix1[i][j] < MinNumber)
				// {
				// 	MinNumber = Matrix1[i][j];
				// }
			
			}
		
		}
		return MinNumber;
	}

	int PrintMaxNumberInMatrix(int Matrix1[3][3],  int Rows, int Cols) {

		int MaxNumber  = Matrix1[0][0];
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Cols; j++)
			{

				MaxNumber  = max(MaxNumber , Matrix1[i][j]);
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
				if (Matrix[i][j] != Matrix[i][Cols - 1 - j]){
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

	void PrintFibonacciUsingRecurssion(short Number, int prev1, int prev2) {
		int febNumber = 0;
		
		if (Number > 0)
		{
			febNumber = prev2 + prev1;
			prev2 = prev1;
			prev1 = febNumber;
			cout << febNumber << "    ";
			PrintFibonacciUsingRecurssion(Number - 1, prev1, prev2);
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
			return isupper(s1) ?  tolower(s1) :  toupper(s1);
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


	short countLetter(char Letter, string s1 , bool MatchCase = true) {
		short counter = 0;

		for (short i = 0; i < s1.length(); i++)
		{
			if ( MatchCase)
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
	//PrintFibonacciUsingRecurssion(10, 0, 1);
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
	cout << "The charatcter is: " << charOne << endl;
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
	//cout << "\nCaptial Letter count = " << CountCapitalLetters(s1);
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
		string letter = ReadString();
		vector <char> VowelChar = { 'a', 'e', 'i' , 'o' , 'u' };
		cout << "The Number of Vowels is: " << CheckVowelInString(VowelChar, letter);
		
		return 0;
	}