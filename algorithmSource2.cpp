//#include <iostream>
//#include <cmath>
//#include <string>
//#include <algorithm>
//#include <array>
//#include <cstdlib>
//#include "algorithmLib2.h"
//using namespace algo2;
//using namespace std;

//int main() {

	//srand((unsigned)time(NULL));

	// problem #01/2
	//Multiplication();

	// problem #02/2
	//PrimeNumber(ReadPositiveNumber("Please Enter number a positive number"));

	// problem #03/2
	//PrintResult(ReadPositiveNumber("Please Enter number"));

	// problem #04/2

	//PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please Enter Number"));


	// problem #05/2

	//PrintDigits(ReadPositiveNumber("Please Enter Number"));

	// problem #06/2

	//cout << "\nSum of Digits = " << sumOfDigits(ReadPositiveNumber("Please write number")) << endl;

	// Problem #07/2

	//cout << "\nReverse is:\n" << reverseNumber(ReadPositiveNumber("Please Enter a positive Number")) << endl;

	// Problem #08/2 Please check it again

	//int Number = ReadPositiveNumber("Please enter the main Number");
	//short DigitToCheck = ReadPositiveNumber("Please enter one digit to check");
	//cout << "\nDigit " << DigitToCheck << " Frequency is " << CountDigitFrequency(DigitToCheck,  Number) << " Time(s).\n";

	// Problem #09/2

	//PrintAllDigitsFrequency(ReadPositiveNumber("Please Enter a positive number"));

	// Problem #10/2

	//PrintDigits(reverseNumber(ReadPositiveNumber("Please enter a Positive Number")));

	// Problem #11/2

		/*if (CheckPalindromeNumbers(ReadPositiveNumber("Please enter a positive number")))
			cout << "\n yes it's palindrome number \n";
		else
			cout << "\n it's not palindrome number \n";*/

			// problem #12/2

			//PrintInvertedNumber(ReadPositiveNumber("Please enter a positive number"));

			// problem #13/2

			//PrintInvertedNumberAdd(ReadPositiveNumber("Please enter a positive number"));

			// Problem #14/2
			//PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number"));

			// problem #15/2
			 //PrintLetterPattern(ReadPositiveNumber("Please enter a positive number"));

			// Problem #16/2

			//PrintWordsFromAAAtoZZZ();

			// problem #17/2

			//GuessPassword(ReadPassword());

			// problem #18/2

			//short EncryptKey = 2;
			//string text = ReadText();
			//string encryptTextAfter = EncryptText(text , EncryptKey);
			//string decrypt = DecryptText( encryptTextAfter, EncryptKey);

			//cout << "\nText Before Encryption : " << text  << endl;
			//cout << "\nText after Encryption : " << encryptTextAfter << endl;
			//cout << "\nText after Decryption : " << decrypt << endl;

			// Problem #19/2

			//cout << RandomNumber(1, 10);

			// problem #20/2

			//cout << "Random capital letter : " << GetRandomCharacter(enCharType::capitalLetter) << endl;
			//cout << "Random small letter : " << GetRandomCharacter(enCharType::smallLetter) << endl;
			//cout << "Random Special character : " << GetRandomCharacter(enCharType::SpecialLetter) <<  endl;
			//cout <<  "Random Digit : " << GetRandomCharacter(enCharType::Digit) << endl;

			// Problem #21/2

			//GenerateKeys(ReadPositiveNumber("Please Enter number of keys you want"));         


			// Problem #22/2

	//int arr[100], arrSum[100], NumberToCheck;
	//int arr2[100];
	//int arrLength = 0, arrLength2 = 0;

	/*ReadArray(arr, arrLength);

	NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

	cout << "\nOriginal array: ";
	PrintArray(arr, arrLength);

	cout << "\nNumber " << NumberToCheck;
	cout << " is repeated ";
	cout << TimeRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";*/

	// Problem #23/2

	//FillArrayWithRandomNumbers(arr, arrLength);
	//cout << "\nArray 1 Elements: ";
	//PrintArray(arr, arrLength);

	// problem #24/2

	//cout << "The Max Number is: " << MaxNumberInArray(arr, arrLength) << endl;

	// Problem #25/2

	//cout << "The Max Number is: " <<  MinNumberInArray(arr, arrLength) << endl;

	// problem #26/2

	//cout << "Numbers of array after sum is : " << SumNumberInArray(arr, arrLength);

	// problem #27/2

	//cout << "The average of random Array : " << VarargNumberInArray(arr, arrLength);

	// problem #28/2
	//int arr2[100];
	//copyOfArray(arr, arr2, arrLength);
	/*CopyArray
	cout << "\nArray 2 Elements after copy: ";
	PrintArray(arr2, arrLength);*/

	// Problem #29/2
	/*int arr2[100], arr2Length = 0;
	CopyPrimeArray(arr, arr2, arrLength, arr2Length);
	cout << "\nArray 2 Elements after check prime: ";
	PrintArray(arr2, arr2Length);*/

	// problem #30/2

	//FillArrayWithRandomNumbers(arr, arrLength);
	//FillArrayWithRandomNumbers(arr2, arrLength);
	//cout << "\nArray 1 Elements: ";
	//PrintArray(arr, arrLength);
	/*cout << "\nArray 2 Elements: ";
	PrintArray(arr2, arrLength);
	SumOfTwoArrays(arr, arr2, arrSum ,  arrLength);
	cout << "\nSum Of arr1 and arr2 elements: ";
	PrintArray(arrSum, arrLength);*/

	// problem #31/2

	/*ShuffleArray(arr, arrLength);
	cout << "Array after Shuffling: ";
	PrintArray(arr, arrLength);*/

	//Problem #32/2

	/*CopyArray(arr, arr2, arrLength);
	cout << "\nArray after reverse: ";
	PrintArray(arr2, arrLength);*/

	// Problem #33/2
	/*string Array[100];
	FillArrayWithKeys(Array, arrLength);
	PrintStringArray(Array, arrLength);*/

	// problem #34/2

	//int Number = ReadNumber();
	//cout << "\n Number you are looking for is: " << Number << endl;

	//short NumberPosition = FindNumberInArray(Number, arr, arrLength);

	/*if (NumberPosition == -1)
		cout << "The Number is Not Found" << endl;
	else
	cout << "The Number found at position: " << NumberPosition << endl;
	cout << "The Number Found its order: " << NumberPosition + 1 << endl;*/

	// problem #35/2

	/*IsNumberInArray(Number,arr, arrLength);
	if (!IsNumberInArray(Number, arr, arrLength))
		cout << "No, The number is not found" << endl;
	else
		cout << endl << " Yes, its is found" << endl;*/

		// problem #36/2

		/*InputUserNumberInArray(arr, arrLength);
		cout << "\nArray Length: " << arrLength << endl;
		cout << "Array elements: ";
		PrintArray(arr, arrLength);*/

		// problem #37/2
		/*FillArrayWithRandomNumbers(arr, arrLength);
		CopyArrayFormAddArrayElement(arr, arr2, arrLength, arrLength2);
		cout << "\nArray 1 Elements: ";
		PrintArray(arr, arrLength);
		cout << "\nArray 2 Elements: ";
		PrintArray(arr2, arrLength);*/

		// problem #38/2

		/*FillArrayWithRandomNumbers(arr, arrLength);
		CopyOddNumber(arr, arr2, arrLength, arrLength2);
		cout << "\nArray 1 Elements: ";
		PrintArray(arr, arrLength);
		cout << "\nArray 2 Elements: ";
		PrintArray(arr2, arrLength2);*/

		// problem #39/2
		/*FillArrayWithRandomNumbers(arr, arrLength);
		CopyPrimeNumbersInArray(arr, arr2, arrLength, arrLength2);

		cout << "\nArray 1 Elements: ";
		PrintArray(arr, arrLength);
		cout << "\nArray 2 Elements: ";
		PrintArray(arr2, arrLength2);*/

		// Problem #40/2

		/*int arrSource[100], sourceLength = 0, arrDestination[100], destinationLength = 0;

		FillArray(arrSource, sourceLength);

		cout << "\nArray 1 elements:\n";

		PrintArray(arrSource, sourceLength);

		CopyDistinctNumbersToArray(arrSource, arrDestination, sourceLength, destinationLength);

		cout << "\nArray 2 distinct elements:\n";

		PrintArray(arrDestination, destinationLength);*/

		// Problem #41/2

		/*FillArray(arr, arrLength);

		cout << "\nArray elements:\n";

		PrintArray(arr, arrLength);

		if ( palindromeArray(arr, arrLength))
			cout << "\nYes array is Palindrome";
		else
			cout << "\nNo array isn't Palindrome";*/

			// problem #42/2

			/*FillArrayWithRandomNumbers(arr, arrLength);

			cout << "\nArray elements:\n";

			PrintArray(arr, arrLength);

			cout << "\nArray elements Odd: " << CountOddArray(arr, arrLength) << endl;*/


			//Problem #43/2

			/*FillArrayWithRandomNumbers(arr, arrLength);

			cout << "\nArray elements:\n";

			PrintArray(arr, arrLength);

			cout << "\nArray elements Odd: " << countEvenArray(arr, arrLength) << endl;*/

			// problem #44/2

			/*FillArrayWithRandomNumbers(arr, arrLength);

			cout << "\nArray elements:\n";

			PrintArray(arr, arrLength);

			cout << "\nArray elements Odd: " << countPositiveArray(arr, arrLength) << endl;*/

			// problem #45/2

			/*FillArrayWithRandomNumbers(arr, arrLength);

			cout << "\nArray elements:\n";

			PrintArray(arr, arrLength);

			cout << "\nArray elements Odd: " << countNegativeArray(arr, arrLength) << endl;	*/

			// problem #46/2

				/*cout << "My abs result: " << ReadAbs(ReadNumber()) << endl;
				cout << "C++ abs result: " << abs(ReadNumber());*/

				// problem #47/2
	//int Number = ReadNumber();

	/*cout << "My Round result: " << myRound(Number) << endl;
	cout << "C++ Round result: " << round(Number);*/

	// problem #48/2

		/*cout << "My Floor result: " << myFloor(Number) << endl;
		cout << "C++ Floor result: " << floor(Number) << endl;*/

		// problem #49/2

			/*cout << "My Ceil result: " << MyCeil(Number) << endl;
			cout << "C++ ceil result: " << ceil(Number) << endl;*/
			// problem 50/2
				/*cout << "My sqrt result: " << MySqrt(Number) << endl;
				cout << "C++ sqrt result: " << sqrt(Number) << endl;*/

//	return 0;
//} 