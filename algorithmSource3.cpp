	#include <iostream>
	#include <cmath>
	#include <string>
	#include <algorithm>
	#include <array>
	#include <vector>
	#include <cstdlib>
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
	cout << "\n Matrix1:\n\n";
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	PrintMatrix(Matrix1, 3, 3);

	if (IsIdentityMatrix(Matrix1, 3, 3))
	{
		cout << "\n Yes, Matrix is identity" << endl;
	}
	else {
		cout << "\n No, Matrix is Not Identity" << endl;
	}

	return 0;
	}