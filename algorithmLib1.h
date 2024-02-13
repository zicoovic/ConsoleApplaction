// #pragma once

// #include <iostream>
// #include <cmath>
// #include <string>
// #include <algorithm>
// #include <array>
// #include <iostream>
// using namespace std;

// namespace algo1 {
//    //problem one

//    void PrintName(string name) {
//        cout << endl << "Your name is: " << name << endl;
//        cout << endl << "**********" << endl;
//    }

//    //problem two

//    string ReadName() {
//        string name;
//        cout << endl << "Please enter your name" << endl;
//        getline(cin, name);
//        return name;
//    }

//    //problem three

//    enum enNumberType
//    {
//        odd = 1,
//        even = 2,
//    };

//    int CheckNumber() {
//        int number;
//        cout << endl << "Please Write the number" << endl;
//        cin >> number;
//        return number;
//    };

//    enNumberType CheckNumberType(int num) {
//        int result = num % 2;
//        if (result == 0)
//            return enNumberType::even;
//        else
//            return enNumberType::odd;
//    };

//    enNumberType printNumberType(enNumberType enNumberType) {
//        if (enNumberType == enNumberType::even)
//            cout << endl << "Your number is Even" << endl << "**********" << endl;
//        else
//            cout << endl << "Your number is Odd" << endl << "**********" << endl;
//        return enNumberType;
//    }

//    //problem four and five

//    struct stInfo
//    {
//        int age;
//        bool hasDrivingLicense;
//    };

//    stInfo ReadNameAndAge() {
//        stInfo info{};
//        cout << endl << "Please enter your age" << endl;
//        cin >> info.age;
//        cout << endl << "Do you have drive license?" << endl;
//        cin >> info.hasDrivingLicense;
//        return info;
//    };

//    bool IsAccepted(stInfo info) {
//        return (info.age > 21 && info.hasDrivingLicense);
//    };

//    void  PrintResult(stInfo info) {

//        if (IsAccepted(info))
//            cout << endl << "Hired" << endl << "**********" << endl;
//        else
//            cout << endl << "Rejected" << endl << "**********" << endl;

//    };

//    //problem six

//    struct stInfo1
//    {
//        string firstName;
//        string lastName;
//    };

//    stInfo1 readName() {
//        stInfo1 info;
//        cout << "Please write the first name" << endl;
//        cin >> info.firstName;
//        cout << "Please write the last name" << endl;
//        cin >> info.lastName;
//        return info;
//    }

//    string getTheFullName(stInfo1 info, bool reversed) {
//        string fullName;
//        if (reversed)
//            fullName = info.lastName + " " + info.firstName;
//        else
//            fullName = info.firstName + " " + info.lastName;
//        return fullName;
//    }

//    void printTheFullName(string FullName) {
//        cout << endl << "\n Your full name is " << FullName << endl;
//    }

//    //problem seven

//    int readNumber() {
//        int num1;
//        cout << "Please write your number" << endl;
//        cin >> num1;
//        return num1;
//    }

//    float calcNumber(int num) {
//        int result = double(num) / 2;
//        //cout << endl << result << endl;
//        return result;
//    }

//    void printNumber(int num) {
//        cout << "\n half of your number is: " << num << endl;
//    }

//    //problem eight

//    enum enPassOrFail
//    {
//        pass = 1,
//        fail = 2,
//    };

//    int ReadMark() {
//        int mark;
//        cout << "\n Please enter your mark" << endl;
//        cin >> mark;
//        return mark;
//    };

//    enPassOrFail CheckResult(int mark) {

//        if (mark >= 50)
//            return enPassOrFail::pass;
//        else
//            return enPassOrFail::fail;

//    };

//    void printMark(int mark) {
//        if (CheckResult(mark) == enPassOrFail::pass)
//            cout << " \n your mark is " << " congratulation" << endl;
//        else
//            cout << "\n sorry about that you're feild" << endl;
//    };

//    //problem nine and ten and eleven sum three numbers and find the average
//    void ReadNumber(int& num1, int& num2, int& num3) {
//        cout << "\n Please write the first number" << endl;
//        cin >> num1;
//        cout << "\n Please write the second number" << endl;
//        cin >> num2;
//        cout << "\n Please write the third number" << endl;
//        cin >> num3;
//    }

//    int sumOfThree(int num1, int num2, int num3) {

//        return num1 + num2 + num3;

//    }

//    float calculateAverage(int num1, int num2, int num3) {
//        return (float)sumOfThree(num1, num2, num3) / 3;
//    }

//    float PassOrFailAverage(float avr) {
//        if (avr >= 50)
//            return enPassOrFail::pass;
//        else
//            return enPassOrFail::fail;
//    }

//    void PrintResultOfNum(float total) {
//        cout << "\n The total is: " << total << endl;
//        if (PassOrFailAverage(total) == enPassOrFail::pass)
//            cout << "\n you pass \n" << endl;
//        else
//            cout << "\n you fail \n" << endl;

//    }

//    //problem twelve and thirteen

//    void readMaxNumber(int& num1, int& num2, int& num3) {

//        cout << "\n Please write the first number" << endl;
//        cin >> num1;
//        cout << "\n Please write the second number" << endl;
//        cin >> num2;
//        cout << "\n Please write the third number" << endl;
//        cin >> num3;
//    }

//    int CheckMaxNumber(int num1, int num2, int& num3) {

//        if (num1 > num2)
//            if (num1 > num3)
//                return num1;
//            else
//                return num3;
//        else if (num2 > num3)
//            return num2;
//        else
//            return num3;
//    };

//    void PrintMaxNumber(int max) {
//        cout << "\n The max number is: " << max << endl;
//    }

//    //problem fourteen

//    void ReadSwapNumber(int& num1, int& num2) {
//        cout << "Please write Number one" << endl;
//        cin >> num1;
//        cout << "Please write Number two" << endl;
//        cin >> num2;
//    }

//    void SwapNumber(int& num1, int& num2) {
//        int swap;
//        swap = num1;
//        num1 = num2;
//        num2 = swap;
//    }

//    void printSwapNumber(int num1, int num2) {
//        cout << "Number one is: " << num1 << endl;
//        cout << "Number two is: " << num2 << endl;
//    }

//    //problem sixteen

//    void readNumbers(float& num1, float& num2) {
//        cout << "\n Please write first number" << endl;
//        cin >> num1;
//        cout << "\n Please write second number" << endl;
//        cin >> num2;
//    }

//    float RectangleAreaBySideAndDiagonal(float num1, float num2) {
//        float Area = num1 * sqrt(pow(num2, 2) - pow(num1, 2));

//        return Area;
//    };

//    void PrintResult(float Area) {
//        cout << "\n rectangle Area = " << Area << endl;
//    }

//    //problem seventeen

//    float TriangleArea(float A, float B) {
//        float Area = (A / 2) * B;
//        return Area;
//    }

//    //problem eighteen

//    float ReadRadios() {
//        float R;
//        cout << "\n Please enter Radius" << endl;
//        cin >> R;

//        return R;
//    }

//    float CircleArea(float R) {
//        const float PI = 3.141592653589793238;
//        float Area = pow(R, 2) * PI;
//        return Area;
//    }

//    void PrintArea(float Area) {
//        cout << "\n Circle Area = " << Area << endl;
//    }

//    //problem 25

//    int readAge() {
//        int number;
//        cout << "Enter number between 18 , 45 \n";
//        cin >> number;
//        return number;
//    }

//    bool ValidateNumberInRange(int number, int from, int to) {
//        return (number >= from && number <= to);
//    }

//    int ReadUntilAgeBetween(int from, int To) {
//        int age = 0;
//        do {
//            age = readAge();
//        } while (!ValidateNumberInRange(age, from, To));

//        return age;
//    }

//    void PrintResult(int age) {
//        cout << "\n your age is: " << age;
//    }


//    //problem 26 // 27 // 28 // 29 


//    int readNumForLoop() {
//        int num;
//        cout << "Please write a number \n";
//        cin >> num;
//        return num;
//    }

//    int checkLoopNumberFromDoWhile(int num) {

//        int counter = 1;
//        int odd = 0;
//        do
//        {
//            if (counter % 2 != 0)
//                odd += counter;
//            counter++;

//        } while (counter <= num);


//        return odd;
//    }

//    int checkLoopNumberFromFor(int num) {
//        cout << endl << "***********" << endl;
//        int odd = 0;
//        for (int i = 1; i <= num; i++)
//        {
//            if (i % 2 != 0)
//                odd += i;
//        }
//        return odd;
//    }

//    // problem 30 

//    int readPositiveNumber(string massage) {
//        int number;

//        do
//        {
//            cout << endl << massage << endl;
//            cin >> number;
//        } while (number <= 0);

//        return number;
//    }

//    int factorial(int n) {
//        int f = 1;
//        for (int i = n; i >= 1; i--)
//        {
//            f = f * i;
//        }

//        return f;
//    }

//    // problem 31

//    int ReadNumberPow() {
//        int number;
//        cout << endl << "Please write the number" << endl;
//        cin >> number;

//        return number;
//    }


//    void powerOf2_3_4(int number) {
//        int a, b, c;

//        a = number * number;
//        b = number * number * number;
//        c = number * number * number * number;

//        cout << a << " " << b << " " << c << endl;
//    }

//    // problem 32

//    int ReadPower() {
//        int power;
//        cout << endl << "Please write the power" << endl;
//        cin >> power;

//        return power;
//    }

//    int powOfM(int number, int M) {

//        if (M == 0) {
//            return 1;
//        }


//        int pow = 1;

//        for (int i = 1; i <= M; i++)
//        {
//            pow = pow * number;
//        }

//        return pow;
//    }

//    // problem 33

//    int ReadGrade(int from, int to) {
//        int grade;
//        do
//        {
//            cout << "Please write your Grade between 0 to 100" << endl;
//            cin >> grade;
//        } while (grade < from || grade > to);

//        return grade;
//    }

//    void gradeResult(int grade) {
//        if (grade >= 90)
//            cout << "you get A+" << endl;
//        else if (grade >= 80)
//            cout << "you get B" << endl;
//        else if (grade >= 70)
//            cout << "you get C" << endl;
//        else if (grade >= 60)
//            cout << "you get D" << endl;
//        else if (grade >= 50)
//            cout << "you get E" << endl;
//        else
//            cout << "sorry.... you get F" << endl;
//    }

//    // problem 34

//    int ReadTotalSales() {
//        int Total;

//        cout << "Please write your a total sales" << endl;
//        cin >> Total;

//        return Total;
//    }

//    float GetCommissionPercentage(float totalSales) {
//        if (totalSales >= 1000000)
//            return 0.01;
//        if (totalSales >= 500000)
//            return 0.02;
//        if (totalSales >= 100000)
//            return 0.03;
//        if (totalSales >= 50000)
//            return 0.05;
//        else
//            return 0.00;
//    }

//    float CalculateTotalCommission(float totalSales) {
//        return GetCommissionPercentage(totalSales) * totalSales;
//    }

//    // problem 35

//    struct stPiggyBankContent {
//        int Pennies, Nickels, Dimes, Quarters, Dollars;

//    };

//    stPiggyBankContent ReadPiggyBankContent() {
//        stPiggyBankContent PiggyBankContent;

//        cout << "Please enter a total pennies " << endl;
//        cin >> PiggyBankContent.Pennies;
//        cout << "Please enter a total nickels " << endl;
//        cin >> PiggyBankContent.Nickels;
//        cout << "Please enter a total Dimes" << endl;
//        cin >> PiggyBankContent.Dimes;
//        cout << "Please enter a total Quarters" << endl;
//        cin >> PiggyBankContent.Quarters;
//        cout << "Please enter a total Dollars" << endl;
//        cin >> PiggyBankContent.Dollars;

//        return PiggyBankContent;
//    }


//    int calculateTotalPennies(stPiggyBankContent piggyBankContent) {
//        int totalPennies = 0;

//        totalPennies = piggyBankContent.Pennies * 1 + piggyBankContent.Nickels * 5
//            + piggyBankContent.Dimes * 10 + piggyBankContent.Quarters * 25 + piggyBankContent.Dollars * 100;
//        return totalPennies;
//    }

//    // problem 36

//    enum enOperationType
//    {
//        Add = '+',
//        Subtract = '-',
//        Multiply = '*',
//        Divide = '/',
//    };

//    float ReadNumber(string Message) {
//        float number = 0;
//        cout << Message << endl;
//        cin >> number;

//        return number;
//    }
//    enOperationType CheckOperation() {
//        char operation = '+';
//        cout << endl << "Please enter operation type (+,-, *, /)" << endl;
//        cin >> operation;
//        return (enOperationType)operation;
//    }

//    float Calculate(float number1, float number2, char operation) {
//        switch (operation)
//        {
//        case enOperationType::Add:
//            return number1 + number2;
//        case enOperationType::Subtract:
//            return number1 - number2;
//        case enOperationType::Multiply:
//            return number1 * number2;
//        case enOperationType::Divide:
//            return number1 / number2;
//        default:
//            return number1 + number2;
//        }
//    }

//    // problem 37

//    float readSumNumbers(string message) {
//        float number = 0;

//        cout << message << endl;
//        cin >> number;

//        return number;
//    }


//    float sumNumbers() {
//        int sum = 0, number = 0, counter = 1;

//        do
//        {
//            number = readSumNumbers("Please enter number " + to_string(counter));

//            if (number == -99)
//            {
//                break;
//            }

//            sum += number;
//            counter++;

//        } while (number != -99);

//        return sum;
//    }

//    // problem 38 

//    float ReadPositiveNumber(string Message) {

//        float number = 0;

//        do
//        {
//            cout << Message << endl;
//            cin >> number;
//        } while (number <= 0);

//        return number;

//    }

//    enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

//    enPrimeNotPrime CheckPrime(int Number) {
//        int M = round(Number / 2);

//        for (int counter = 2; counter < M; counter++)
//        {
//            if (Number % counter == 0)
//                return enPrimeNotPrime::NotPrime;
//        }

//        return enPrimeNotPrime::Prime;
//    }

//    void PrimeNumber(int N) {

//        switch (CheckPrime(N))
//        {
//        case enPrimeNotPrime::Prime:
//            cout << endl << "This is a prime number" << endl;
//            break;
//        case enPrimeNotPrime::NotPrime:
//            cout << endl << "This is Not prime number" << endl;
//            break;
//        }


//        /*   if (N % 2 == 0)
//               cout << endl << "This is Not prime number" << endl;
//           else
//               cout << endl << "This is a prime number" << endl;*/
//    }

//    // problem 39

//    float CalculateRemainder(float TotalPill, float TotalCashPaid) {
//        return TotalPill - TotalCashPaid;
//    }

//    // problem 40

//    float TotalBillAfterServiceAndTax(float total) {
//        total = total * 1.1;
//        total = total * 1.16;
//        return total;
//    }

//    // problem 41

//    float HoursToDays(float NumberOfHours) {
//        return (float)NumberOfHours / 24;
//    }

//    float DaysToWeeks(float NumberOfDays) {
//        return (float)NumberOfDays / 7;
//    }

//    // problem 42

//    struct strTaskDuration
//    {
//        int NumOfDays, NumOfHours, NumOfMinutes, NumOfSeconds;
//    };

//    strTaskDuration ReadTaskDuration() {
//        strTaskDuration TaskDuration;

//        TaskDuration.NumOfDays = readPositiveNumber("Please Enter Number of Days");
//        TaskDuration.NumOfHours = readPositiveNumber("Please Enter Number of Hours");
//        TaskDuration.NumOfMinutes = readPositiveNumber("Please Enter Number of Minutes");
//        TaskDuration.NumOfSeconds = readPositiveNumber("Please Enter Number of Seconds");

//        return TaskDuration;
//    }

//    int TaskDurationInSeconds(strTaskDuration TaskDuration) {
//        int DurationInSecond = 0;

//        DurationInSecond += TaskDuration.NumOfDays * 24 * 60 * 60;
//        DurationInSecond += TaskDuration.NumOfHours * 60 * 60;
//        DurationInSecond += TaskDuration.NumOfMinutes * 60;
//        DurationInSecond += TaskDuration.NumOfSeconds;

//        return DurationInSecond;
//    }

//    // problem 43

//    strTaskDuration SecondsToTaskDuration(int TotalSeconds) {
//        strTaskDuration TaskDuration;
//        const int SecondsPerDay = 24 * 60 * 60;
//        const int SecondsPerHours = 60 * 60;
//        const int secondsPerMinutes = 60;

//        int Remainder = 0;
//        TaskDuration.NumOfDays = floor(TotalSeconds / SecondsPerDay);
//        Remainder = TotalSeconds % SecondsPerDay;
//        TaskDuration.NumOfHours = floor(Remainder / SecondsPerHours);
//        Remainder = Remainder % SecondsPerHours;
//        TaskDuration.NumOfMinutes = floor(Remainder / secondsPerMinutes);
//        Remainder = Remainder % secondsPerMinutes;
//        TaskDuration.NumOfSeconds = Remainder;

//        return TaskDuration;
//    }

//    void PrintTaskDurationDetails(strTaskDuration TaskDuration) {
//        cout << "\n" << TaskDuration.NumOfDays << ":"
//            << TaskDuration.NumOfHours << ":"
//            << TaskDuration.NumOfMinutes << ":"
//            << TaskDuration.NumOfSeconds << endl;
//    }

//    // problem 44

//    int ReadNumberInRange(string Message, int From, int To) {
//        int Number = 0;

//        do
//        {
//            cout << Message << endl;
//            cin >> Number;
//        } while (Number <= From || Number > To);

//        return Number;
//    }

//    void checkDays(int number) {
//        switch (number)
//        {
//        case 1:
//            cout << endl << "It's sunday";
//            break;
//        case 2:
//            cout << "It's Monday";
//            break;
//        case 3:
//            cout << "It's Tuesday";
//            break;
//        case 4:
//            cout << "It's Wednesday";
//            break;
//        case 5:
//            cout << "It's Thursday";
//            break;
//        case 6:
//            cout << "It's Friday";
//            break;
//        case 7:
//            cout << "It's Saturday";
//            break;
//        default:
//            break;
//        }
//    }

//    // problem 45

//    enum Months
//    {
//        January = 1,
//        February = 2,
//        March = 3,
//        April = 4,
//        May = 5,
//        June = 6,
//        July = 7,
//        August = 8,
//        September = 9,
//        October = 10,
//        November = 11,
//        December = 12,
//    };

//    Months ReadMonthOfYear() {
//        return (Months)ReadNumberInRange("Please Enter the Month number", 0, 12);
//    }

//    string CheckMonths(Months Months) {
//        switch (Months)
//        {
//        case Months::January:
//            return "it's January";
//            break;
//        case February:
//            return "it's February";
//            break;
//        case March:
//            return "it's March";
//            break;
//        case April:
//            return "it's April";
//            break;
//        case May:
//            return "it's May";
//            break;
//        case June:
//            return "it's June";
//            break;
//        case July:
//            return "it's July";
//            break;
//        case August:
//            return "it's August";
//            break;
//        case September:
//            return "it's September";
//            break;
//        case October:
//            return "it's October";
//            break;
//        case November:
//            return "it's November";
//            break;
//        case December:
//            return "it's December";
//        default:
//            return "Not a valid Month";
//        }
//    }

//    // problem 46 

//    void PrintLettersAtoZ() {
//        for (int i = 65; i <= 90; i++)
//        {
//            cout << char(i) << endl;
//        }
//    }

//    // problem 47 && 48

//    float TotalMonths(float LoanAmount, float MonthlyInstallment) {
//        return  (float)LoanAmount / MonthlyInstallment;
//    }

//    // problem 49 

//    string CheckPin() {
//        string pinCode;
//        cout << "Please enter pin code" << endl;
//        cin >> pinCode;
//        return pinCode;
//    }

//    bool Login() {
//        string PinCode;
//        int counter = 3;
//        do
//        {
//            counter--;
//            PinCode = CheckPin();

//            if (PinCode == "1234")
//                return 1;

//            else
//                cout << "\n Wrong PIN " << counter << " more tries \n \n";
//            system("color 4F");

//        } while (counter >= 1 && PinCode != "1234");

//        return 0;
//    }
// }