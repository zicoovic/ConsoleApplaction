#pragma once

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <array>
#include <cstdlib>
using namespace std;



 namespace ProjectTwo {
	enum enQuestionsLevel
	{
		EasyLevel = 1,
		MedLevel = 2,
		HardLevel = 3,
		Mix = 4,
	};

	enum enOperationType
	{
		Add = 1,
		Sub = 2,
		Mult = 3,
		Div = 4,
		MixOp = 5,
	};

	string GetOpTypeSymbol(enOperationType OpType) {
		switch (OpType)
		{
		case enOperationType::Add:
			return "+";
			break;
		case enOperationType::Sub:
			return "-";
			break;
		case enOperationType::Mult:
			return "*";
			break;
		case enOperationType::Div:
			return "/";
			break;
		default:
			return "Mix";
		}
	}

	string GetQuestionLevelText(enQuestionsLevel QuestionLevel) {
		string arrQuestionLevelText[4] = { "Easy" , "Med", "Hard" , "Mix" };
		return arrQuestionLevelText[QuestionLevel - 1];
	}

	int RandomNumber(int from, int to)
	{

		int randNum = rand() % (to - from + 1) + from;

		return randNum;
	}

	void SetScreenColor(bool Right) {
		if (Right)
			system("color 2F");
		else
			system("color 4F");
		cout << "\a";
	}

	short ReadHowManyQuestions()
	{
		short NumberOfQuestions;
		do
		{
			cout << "How Many questions do yo want to answer?" << endl;
			cin >> NumberOfQuestions;

		} while (NumberOfQuestions < 1 || NumberOfQuestions > 10);

		return NumberOfQuestions;
	}

	enQuestionsLevel ReadQuestionsLevel()
	{
		short QuestionLevel = 0;
		do
		{
			cout << "Enter Questions Level [1] Easy, [2] Med, [3] Hard, [4] Mix";
			cin >> QuestionLevel;
		} while (QuestionLevel < 1 || QuestionLevel > 4);

		return (enQuestionsLevel)QuestionLevel;
	}

	enOperationType ReadOpType()
	{
		short OpType = 0;

		do
		{
			cout << "Enter operation Type [1] Add, [2] sub, [3] Mul, [4] Dive, [5] Mix" << endl;
			cin >> OpType;
		} while (OpType < 1 || OpType > 5);
		return (enOperationType)OpType;
	}


	struct stQuestion
	{
		int Number1 = 0;
		int Number2 = 0;
		enOperationType OperationType;
		enQuestionsLevel QuestionLevel;
		int CorrectAnswer = 0;
		int PlayerAnswer = 0;
		bool AnswerResult = false;
	};

	struct stQuiz
	{
		stQuestion QuestionList[100];
		short NumberOfQuestions;
		enQuestionsLevel QuestionsLevel;
		enOperationType OpType;
		short NumberOfWrongAnswers = 0;
		short NumberOfRightAnswers = 0;
		bool isPass = false;
	};

	int SimpleCalculator(int Number1, int Number2, enOperationType OperationType)
	{
		switch (OperationType)
		{
		case enOperationType::Add:
			return Number1 + Number2;
			break;
		case enOperationType::Sub:
			return Number1 - Number2;
			break;
		case enOperationType::Mult:
			return Number1 * Number2;
			break;
		case enOperationType::Div:
			return Number1 / Number2;
			break;
		default:
			return Number1 + Number2;
		}
	}


	enOperationType GetRandomOperationType()
	{
		int Op = RandomNumber(1, 4);
		return (enOperationType)Op;
	}

	stQuestion GenerateQuestions(enQuestionsLevel QuestionsLevel, enOperationType OperationType)
	{
		stQuestion Question;

		if (QuestionsLevel == enQuestionsLevel::Mix)
		{
			QuestionsLevel = (enQuestionsLevel)RandomNumber(1, 3);
		}

		if (OperationType == enOperationType::MixOp)
		{
			OperationType = GetRandomOperationType();
		}

		Question.OperationType = OperationType;

		switch (QuestionsLevel)
		{
		case enQuestionsLevel::EasyLevel:
			Question.Number1 = RandomNumber(1, 10);
			Question.Number2 = RandomNumber(1, 10);
			Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
			Question.QuestionLevel = QuestionsLevel;
			return Question;
			break;
		case enQuestionsLevel::MedLevel:
			Question.Number1 = RandomNumber(10, 50);
			Question.Number2 = RandomNumber(10, 50);
			Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
			Question.QuestionLevel = QuestionsLevel;
			return Question;
			break;
		case enQuestionsLevel::HardLevel:
			Question.Number1 = RandomNumber(50, 100);
			Question.Number2 = RandomNumber(50, 100);
			Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
			Question.QuestionLevel = QuestionsLevel;
			return Question;
			break;
			// case enQuestionsLevel::Mix:
			// Question.Number1 = RandomNumber(1,100);
			// Question.Number2 = RandomNumber(1,100);
			// Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2 , Question.OperationType);
			// Question.QuestionLevel = QuestionsLevel;
			// return Question;
			// break;
		}
		return Question;
	}

	void GenerateQuizQuestions(stQuiz& Quiz)
	{
		for (short Question = 0; Question < Quiz.NumberOfQuestions; Question++)
		{
			Quiz.QuestionList[Question] = GenerateQuestions(Quiz.QuestionsLevel, Quiz.OpType);
		}
	}

	int  ReadQuestionAnswer() {
		int answer = 0;
		cin >> answer;
		return answer;
	}


	void PrintTheQuestion(stQuiz& Quiz, short QuestionNumber) {
		cout << "\n";
		cout << "Question [" << QuestionNumber + 1 << "/" << Quiz.NumberOfQuestions << "] \n\n";
		cout << Quiz.QuestionList[QuestionNumber].Number1 << endl;
		cout << Quiz.QuestionList[QuestionNumber].Number2 << " ";
		cout << GetOpTypeSymbol(Quiz.QuestionList[QuestionNumber].OperationType);
		cout << "\n_________" << endl;
	}


	void correctTheQuestionAnswer(stQuiz& Quiz, short QuestionNumber) {
		if (Quiz.QuestionList[QuestionNumber].PlayerAnswer != Quiz.QuestionList[QuestionNumber].CorrectAnswer)
		{
			Quiz.QuestionList[QuestionNumber].AnswerResult = false;
			Quiz.NumberOfWrongAnswers++;
			cout << "Wrong Answer :-( \n";
			cout << Quiz.QuestionList[QuestionNumber].CorrectAnswer;
			cout << "\n";
		}
		else {
			Quiz.QuestionList[QuestionNumber].AnswerResult = true;
			Quiz.NumberOfRightAnswers++;
			cout << "Right Answer :-) \n";
		}
		cout << endl;

		SetScreenColor(Quiz.QuestionList[QuestionNumber].AnswerResult);
	}

	void AskAndCorrectQuestionListAnswers(stQuiz& Quiz) {
		for (short QuestionNumber = 0; QuestionNumber < Quiz.NumberOfQuestions; QuestionNumber++)
		{
			PrintTheQuestion(Quiz, QuestionNumber);
			Quiz.QuestionList[QuestionNumber].PlayerAnswer = ReadQuestionAnswer();
			correctTheQuestionAnswer(Quiz, QuestionNumber);
		}

		Quiz.isPass = (Quiz.NumberOfRightAnswers >= Quiz.NumberOfWrongAnswers);
	};

	string GetFinalResultsText(bool Pass) {
		if (Pass)
			return "Pass :-)";
		else
			return "Feild :-(";
	}



	void PrintQuizResults(stQuiz Quiz) {
		cout << "\n";
		cout << "______________________________\n\n";
		cout << " Final Results is " << GetFinalResultsText(Quiz.isPass);
		cout << "\n______________________________\n\n";
		cout << "Number of Questions: " << Quiz.NumberOfQuestions << endl;
		cout << "Questions Level    : " << GetQuestionLevelText(Quiz.QuestionsLevel) << endl;
		cout << "OpType             : " << GetOpTypeSymbol(Quiz.OpType) << endl;
		cout << "Number of Right Answers: " << Quiz.NumberOfRightAnswers << endl;
		cout << "Number of Wrong Answers: " << Quiz.NumberOfWrongAnswers << endl;
		cout << "______________________________\n";
	}

	void PlayMathGame()
	{
		stQuiz Quiz;
		Quiz.NumberOfQuestions = ReadHowManyQuestions();
		Quiz.QuestionsLevel = ReadQuestionsLevel();
		Quiz.OpType = ReadOpType();

		GenerateQuizQuestions(Quiz);
		AskAndCorrectQuestionListAnswers(Quiz);
		PrintQuizResults(Quiz);
	}

	void ResetScreen()
	{
		system("cls");
		system("color 0F");
	}

	void startGame()
	{
		char PlayAgain = 'Y';

		do
		{
			ResetScreen();
			PlayMathGame();

			cout << endl
				<< "Do you want to play again?  Y/N" << endl;
			cin >> PlayAgain;

		} while (PlayAgain == 'Y' || PlayAgain == 'y');
	}
}