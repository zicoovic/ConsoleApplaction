#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <array>
#include <cstdlib>
using namespace std;

namespace algo2 {


	// problem #01/2

	void PrintTableHeader() {
		cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";
		cout << "\t";
		for (int i = 1; i <= 10; i++)
		{
			cout << i << "\t";
		}
		cout << endl << "----------------------------------------------------------------------------------------" << endl;
	}
	string columSeparator(int i) {

		if (i < 10)
			return "   |";
		else
			return "  |";
	}
	void Multiplication() {

		PrintTableHeader();

		for (int i = 1; i <= 10; i++)
		{
			cout << " " << i << columSeparator(i) << "\t";
			for (int j = 1; j <= 10; j++)
			{
				cout << i * j << "\t";
			}
			cout << endl;
		}
	}

	// problem #02/2

	enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
	float ReadPositiveNumber(string Message) {

		float number = 0;

		do
		{
			cout << Message << endl;
			cin >> number;
		} while (number <= 0);

		return number;

	}
	enPrimeNotPrime CheckPrime(int Number) {
		int M = round(Number / 2);

		for (int counter = 2; counter < M; counter++)
		{
			if (Number % counter == 0)
				return enPrimeNotPrime::NotPrime;
		}

		return enPrimeNotPrime::Prime;
	}
	void PrimeNumber(int number) {

		cout << "\n";
		cout << "Prime Numbers from " << 1 << " To " << number;
		cout << " are : " << endl;
		for (int i = 1; i <= number; i++)
		{
			if (CheckPrime(i) == enPrimeNotPrime::Prime)
				cout << i << endl;
			else
				ReadPositiveNumber("Please write the number");
		}
	}

	// problem #03/2

	bool isPerfectNumb(int Number) {
		int sum = 0;
		for (int i = 1; i < Number; i++)
		{
			if (Number % i == 0)
				sum += i;
		}

		return Number == sum;
	}

	void PrintResult(int Number) {
		if (isPerfectNumb(Number))
			cout << Number << "Is perfect Number" << endl;
		else
			cout << Number << " Is Not Perfect Number" << endl;
	}

	// problem #04/2

	void PrintPerfectNumberFrom1ToN(int Number) {
		for (int i = 1; i <= Number; i++)
		{
			if (isPerfectNumb(i))
				cout << i << endl;
		}
	}

	// problem #05/2

	void PrintDigits(int Number) {
		int Remainder = 0;

		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			cout << Remainder << endl;
		}
	}

	// problem #06/2

	int sumOfDigits(int Number) {
		int Remainder = 0;
		int sum = 0;

		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			sum += Remainder;
			cout << Remainder << endl;
		}

		return sum;
	}

	// problem #07/2

	int reverseNumber(int Number) {
		int remainder = 0, Number2 = 0;

		while (Number > 0)
		{
			remainder = Number % 10;
			Number = Number / 10;
			Number2 = Number2 * 10 + remainder;
		}
		return Number2;
	}

	// Problem #08/2

	int CountDigitFrequency(int Digit, int Number) {
		int FreqCount = 0, Remainder = 0;

		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;

			if (Digit == Remainder)
			{
				FreqCount++;
			}
		}

		return FreqCount;
	}

	// Problem #09/2

	void PrintAllDigitsFrequency(int Number) {


		for (int i = 0; i < 10; i++)
		{
			short DigitFrequency = 0;
			DigitFrequency = CountDigitFrequency(i, Number);

			if (DigitFrequency > 0)
			{
				cout << "Digit " << i << " Frequency is " << DigitFrequency << " Time(s).\n";
			}
		}
	}

	// Problem #10/2

		// we solve this problem by using two function of 07 and 05 Problems

	// Problem #11/2

	bool CheckPalindromeNumbers(int Number) {


		return Number == reverseNumber(Number);

		/*for (int i = 0; i < 1; i++)
		{
			if (Number == reverseNumber(Number)) {
				cout << "\n yes it's palindrome number \n";
			}
			else {
				cout << "\n it's not palindrome number \n";
			}

		}*/
	}

	// Problem #12/2

	void PrintInvertedNumber(int Number) {

		cout << "\n";

		for (int i = Number; i >= 1; i--)
		{

			for (int j = 1; j <= i; j++)
			{
				cout << i;
			}

			cout << "\n";
		}
	}

	// problem #13/2

	void PrintInvertedNumberAdd(int Number) {

		cout << "\n";

		for (int i = 1; i <= Number; i++)
		{

			for (int j = 1; j <= i; j++)
			{
				cout << i;
			}

			cout << "\n";
		}
	}

	// Problem #14/2

	void PrintInvertedLetterPattern(int Number) {

		cout << "\n";

		for (int i = 65 + Number - 1; i >= 65; i--)
		{

			for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
			{
				cout << char(i);
			}

			cout << "\n";
		}
	}

	// Problem #15/2

	void PrintLetterPattern(int Number) {
		cout << "\n";

		for (int i = 65; i <= 65 + Number - 1; i++)
		{

			for (int j = 1; j <= i - 65 + 1; j++)
			{
				cout << char(i);
			}

			cout << "\n";
		}
	}

	// Problem #16/2

	void PrintWordsFromAAAtoZZZ() {
		cout << "\n";
		string word = "";
		for (int i = 65; i <= 90; i++)
		{

			for (int j = 65; j <= 90; j++)
			{
				for (int k = 65; k <= 90; k++)
				{
					word = word + char(i);
					word = word + char(j);
					word = word + char(k);

					cout << word << endl;

					word = "";
				};
			}
		}

		cout << "\n__________________________\n";
	}

	// problem #17/2

	string ReadPassword() {
		string password;
		cout << "Please enter a 3-letter password (all capital) \n ";
		cin >> password;

		return password;
	}

	bool GuessPassword(string originalPassword) {
		\

			int counter = 0;
		string word = "";

		for (int i = 65; i <= 90; i++)
		{

			for (int j = 65; j <= 90; j++)
			{
				for (int k = 65; k <= 90; k++)
				{
					counter++;

					word = word + char(i);
					word = word + char(j);
					word = word + char(k);

					cout << "Trial [" << counter << "] : " << word << endl;

					if (word == originalPassword)
					{
						cout << "\nPassword is " << word << "\n";
						cout << "Found after " << counter << " Trial(s)\n";
						return true;
					}

					word = "";
				};
			}
		}
		return false;
	}

	// problem #18/2

	string ReadText() {
		string text;

		cout << "Please enter text\n";
		getline(cin, text);

		return text;
	}

	string EncryptText(string Text, short encryptionKey) {
		for (int i = 0; i < Text.length(); i++)
		{
			Text[i] = char(int(Text[i] + encryptionKey));
		}

		return Text;
	}

	string DecryptText(string Text, short encryptionKey) {

		for (int i = 0; i <= Text.length(); i++)
		{
			Text[i] = char(int(Text[i] - encryptionKey));
		}

		return Text;
	}

	// Problem #19/2

	int RandomNumber(int from, int to) {

		int randNum = rand() % (to - from + 1) + from;

		return randNum;
	}

	// Problem #20/2

	enum enCharType
	{
		smallLetter = 1,
		capitalLetter = 2,
		SpecialLetter = 3,
		Digit = 4,
	};

	char GetRandomCharacter(enCharType CharType) {

		switch (CharType)
		{
		case enCharType::smallLetter:
			return char(RandomNumber(97, 122));
			break;
		case  enCharType::capitalLetter:
			return char(RandomNumber(65, 90));
			break;
		case  enCharType::SpecialLetter:
			return char(RandomNumber(33, 47));
			break;
		case  enCharType::Digit:
			return char(RandomNumber(48, 57));
			break;
		default:
			break;
		}

	}

	// problem #21/2

	string GenerateWord(enCharType CharType, short Length) {
		string word;

		for (int i = 1; i <= Length; i++)
		{
			word = word + GetRandomCharacter(CharType);
		}

		return word;
	}

	string generateKey() {
		string Key = "";

		Key = GenerateWord(enCharType::capitalLetter, 4) + "-";
		Key = Key + GenerateWord(enCharType::capitalLetter, 4) + "-";
		Key = Key + GenerateWord(enCharType::capitalLetter, 4) + "-";
		Key = Key + GenerateWord(enCharType::capitalLetter, 4);

		return Key;
	}

	void GenerateKeys(short NumberOfKeys) {
		for (int i = 1; i <= NumberOfKeys; i++)
		{
			cout << "Key [" << i << "] : ";
			cout << generateKey() << endl;
		}
	}

	// Problem #22/2

	void ReadArray(int arr[100], int& arrLength) {
		cout << "\n Enter number of elements\n";
		cin >> arrLength;
		cout << "\nEnter array elements: \n";
		for (int i = 0; i < arrLength; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			cin >> arr[i];
		}
		cout << endl;
	}

	void PrintArray(int arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			cout << arr[i] << " ";
		}

		cout << endl;
	}

	int TimeRepeated(int NumberToCheck, int arr[100], int arrLength) {
		int count = 0;

		for (int i = 0; i <= arrLength - 1; i++)
		{
			if (NumberToCheck == arr[i])
			{
				count++;
			}
		}

		return count;
	}

	// Problem #23/2

	void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {

		cout << "Enter number of elements:\n";
		cin >> arrLength;

		for (int i = 0; i < arrLength; i++)
		{
			arr[i] = RandomNumber(-100, 100);
		}
	}

	// problem #24/2 

	int MaxNumberInArray(int arr[100], int arrLength) {
		int max = 0;

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] > max)
				max = arr[i];
		}

		return max;
	}

	// problem #25/2 

	int MinNumberInArray(int arr[100], int arrLength) {
		int Min = 0;
		Min = arr[0];
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] < Min)
				Min = arr[i];
		}

		return Min;
	}

	// Problem #26/2

	int SumNumberInArray(int arr[100], int arrLength) {
		int Sum = 0;

		for (int i = 0; i < arrLength; i++)
		{

			Sum += arr[i];
		}

		return Sum;
	}

	// Problem #27/2

	float NumberInArray(int arr[100], int arrLength) {

		return (float)SumNumberInArray(arr, arrLength) / arrLength;
	}

	// Problem #28/2

	void copyOfArray(int arrSource[100], int arrDestination[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[i];
	}

	// Problem #29/2

	void CopyPrimeArray(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length) {
		int Counter = 0;
		for (int i = 0; i < arrLength; i++) {
			if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime) {
				arrDestination[Counter] == arrSource[i];
				Counter++;
			}

		}
		arr2Length = --Counter;
	}

	// problem #30/2

	void SumOfTwoArrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength) {



		for (int i = 0; i < arrLength; i++)
		{

			arrSum[i] = arr1[i] + arr2[i];
		}

	}

	// problem #31/2

	void swap(int& A, int& B) {
		int temp;

		temp = A;
		A = B;
		B = temp;
	}

	void ShuffleArray(int arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
		}
	}

	// problem #32/2

	void CopyArray(int arrSource[100], int arrDestination[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			arrDestination[i] = arrSource[arrLength - 1 - i];
		}
	}

	// problem #33/2

	void GenerateKey() {
		string Key = "";

		Key = GenerateWord(enCharType::capitalLetter, 4) + "-";
		Key = Key + GenerateWord(enCharType::capitalLetter, 4) + "-";
		Key = Key + GenerateWord(enCharType::capitalLetter, 4) + "-";
		Key = Key + GenerateWord(enCharType::capitalLetter, 4);
	}

	void FillArrayWithKeys(string Arr[100], int ArrLength) {
		for (int i = 0; i < ArrLength; i++)
		{
			Arr[i] = generateKey();
		}
	}

	void PrintStringArray(string arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			cout << "Array[" << i << "] : ";
			cout << arr[i] << "\n";
		}

		cout << endl;
	}

	// problem #34/2

	int ReadNumber() {
		int Number;
		cout << "\n Please enter a number?\n";
		cin >> Number;

		return Number;

	}

	short FindNumberInArray(int Number, int arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] == Number)
				return i;
		}
		return -1;
	}

	// problem #35/2

	bool IsNumberInArray(int number, int arr[100], int arrLength) {
		return FindNumberInArray(number, arr, arrLength) != -1;
	}

	// problem #36/2

	void AddArrayElement(int Number, int arr[100], int& arrLength) {
		arrLength++;
		arr[arrLength - 1] = Number;
	}

	void InputUserNumberInArray(int arr[100], int& arrLength) {
		bool AddMore = true;

		do
		{
			AddArrayElement(ReadNumber(), arr, arrLength);
			cout << "Do you want to add number? [0]:No,[1]:yes" << endl;
			cin >> AddMore;

		} while (AddMore);

	}

	// problem #37/2

	void CopyArrayFormAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int arrLength2) {
		for (int i = 0; i < arrLength; i++)
		{
			AddArrayElement(arrSource[i], arrDestination, arrLength2);
		}
	}

	// problem #38/2

	void CopyOddNumber(int arrSource[100], int arrDestination[100], int arrLength, int& arrLength2) {
		for (int i = 0; i < arrLength; i++)
		{
			if (arrSource[i] % 2 != 0)
			{
				AddArrayElement(arrSource[i], arrDestination, arrLength2);
			}
		}
	}

	// problem #39/2

	void CopyPrimeNumbersInArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrLength2) {
		for (int i = 0; i < arrLength; i++)
		{
			if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
			{
				AddArrayElement(arrSource[i], arrDestination, arrLength2);
			}
		}
	}

	// problem #40/2

	void FillArray(int arr[100], int& arrLength) {
		arrLength = 10;
		arr[0] = 10;
		arr[1] = 20;
		arr[2] = 30;
		arr[3] = 30;
		arr[4] = 20;
		arr[5] = 20;
		arr[6] = 30;
		arr[7] = 30;
		arr[8] = 20;
		arr[9] = 10;
	}

	void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength) {
		for (int i = 0; i < SourceLength; i++)
		{
			if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength)) {
				AddArrayElement(arrSource[i], arrDestination, DestinationLength);
			}
		}
	}

	// problem #41/2

	bool palindromeArray(int arr[100], int arrLength) {
		for (int i = 0; i < arrLength; i++) {
			if (arr[i] != arr[arrLength - i - 1])
			{
				return false;
			}

		}

		return true;
	}

	// problem #42/2

	int CountOddArray(int arr[100], int arrLength) {
		int counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] % 2 != 0)
				counter++;
		}
		return counter++;
	}

	// problem #43/2

	int countEvenArray(int arr[100], int arrLength) {
		int counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] % 2 == 0)
				counter++;
		}
		return counter++;
	}

	// problem #44/2

	int countPositiveArray(int arr[100], int arrLength) {
		int counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] > 0)
				counter++;
		}
		return counter++;
	}

	// problem #45/2

	int countNegativeArray(int arr[100], int arrLength) {
		int counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] < 0)
				counter++;
		}
		return counter++;
	}

	// problem #46/2

	int ReadAbs(int Number) {
		if (Number < 0)
			return Number = Number * -1;
	}

	// problem #47/2

	float GetFractionPart(float Number) {
		return Number - int(Number);
	}

	int myRound(float Number) {
		int IntPart;
		IntPart = int(Number);

		float fractionPart = GetFractionPart(Number);

		if (abs(fractionPart) >= .5)
		{
			if (Number > 0)
				return ++IntPart;
			else
				return --IntPart;
		}
		else {
			return IntPart;
		}
	}

	// problem #48/2

	int myFloor(int Number) {
		if (Number > 0)
			return int(Number);
		else
			return int(Number) - 1;
	}

	// problem #49/2

	int MyCeil(int Number) {
		if (abs(GetFractionPart(Number) > 0))
			if (Number > 0)
				return int(Number) + 1;
			else
				return int(Number);
		else
			return Number;
	}

	// problem #50/2

	int MySqrt(float Number) {
		return pow(Number, 0.5);
	}


}