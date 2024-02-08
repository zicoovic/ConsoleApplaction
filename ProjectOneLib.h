//#pragma once
//
//#include <iostream>
//#include <cmath>
//#include <string>
//#include <algorithm>
//#include <array>
//#include <cstdlib>
//using namespace std;
//
//namespace ProjectOne {
//	enum enGameChoice
//	{
//		Stone = 1, Paper = 2, Scissors = 3,
//	};
//	enum enWinner
//	{
//		Player = 1, Computer = 2, Draw = 3,
//	};
//	struct StRoundInfo
//	{
//		short RoundNumber = 0;
//		enGameChoice Player1Choice;
//		enGameChoice ComputerChoice;
//		enWinner Winner;
//		string WinnerName;
//
//	};
//	struct stGameResults
//	{
//		short GameRounds = 0;
//		short Player1WinTimes = 0;
//		short Computer2WinTimes = 0;
//		short DrawTimes = 0;
//		enWinner GameWinner;
//		string WinnerName = "";
//	};
//
//	int RandomNumber(int from, int to) {
//
//		int randNum = rand() % (to - from + 1) + from;
//
//		return randNum;
//	}
//
//	string WinnerName(enWinner Winner) {
//		string arrWinnerName[3] = {
//			"Player" , "Computer" , "No Winner",
//		};
//		return arrWinnerName[Winner - 1];
//	}
//
//	enWinner WhoWonTheRound(StRoundInfo RoundInfo) {
//		if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
//		{
//			return enWinner::Draw;
//		}
//
//		// If computer win
//		switch (RoundInfo.Player1Choice)
//		{
//		case enGameChoice::Stone:
//			if (RoundInfo.ComputerChoice == enGameChoice::Paper)
//			{
//				return enWinner::Computer;
//			}
//			break;
//		case enGameChoice::Paper:
//			if (RoundInfo.ComputerChoice == enGameChoice::Scissors)
//				return enWinner::Computer;
//			break;
//		case enGameChoice::Scissors:
//			if (RoundInfo.ComputerChoice == enGameChoice::Stone)
//				return enWinner::Computer;
//		}
//
//		//if you reach her then Player is thw winner
//
//		return enWinner::Player;
//	}
//
//	string ChoiceName(enGameChoice Choice) {
//		string arrGameChoice[3] = { "Stone", "Paper", "Scissors" };
//
//		return arrGameChoice[Choice - 1];
//	}
//
//	void SetWinnerScreenColor(enWinner winner) {
//		switch (winner)
//		{
//		case enWinner::Player:
//			system("Color 2F");  // turn screen to green
//			break;
//		case enWinner::Computer:
//			system("Color 4F"); // Turn screen to red
//			break;
//		case enWinner::Draw:
//			system("Color 6F"); // Turn screen to yellow
//			break;
//		}
//	}
//
//	void PrintRoundResults(StRoundInfo RoundInfo) {
//
//		cout << "\n____________Round [" << RoundInfo.RoundNumber << "] ____________\n\n";
//		cout << "Player1 Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
//		cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
//		cout << "Round Winner     : [" << RoundInfo.WinnerName << "] \n";
//		cout << "__________________________________\n" << endl;
//
//		SetWinnerScreenColor(RoundInfo.Winner);
//	}
//
//	enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes) {
//		if (Player1WinTimes > ComputerWinTimes)
//			return enWinner::Player;
//		else if (ComputerWinTimes > Player1WinTimes)
//			return enWinner::Computer;
//		else
//			return enWinner::Draw;
//
//	}
//
//	stGameResults FillGameResults(int GameRound, short Player1WinTimes, short ComputerWinTimes, short DrawTimes) {
//		stGameResults GameResults;
//		GameResults.GameRounds = GameRound;
//		GameResults.Player1WinTimes = Player1WinTimes;
//		GameResults.Computer2WinTimes = ComputerWinTimes;
//		GameResults.DrawTimes = DrawTimes;
//		GameResults.GameWinner = WhoWonTheGame(Player1WinTimes, ComputerWinTimes);
//		GameResults.WinnerName = WinnerName(GameResults.GameWinner);
//
//		return GameResults;
//	}
//
//	enGameChoice ReadPlayer1Choice() {
//		short choice = 1;
//		do
//		{
//			cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors";
//			cin >> choice;
//		} while (choice < 1 || choice > 3);
//
//		return (enGameChoice)choice;
//	}
//
//	enGameChoice GetComputerChoice() {
//
//		return (enGameChoice)RandomNumber(1, 3);
//	}
//
//	stGameResults PlayGame(short HowManyRounds) {
//		StRoundInfo RoundInfo;
//		short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;
//		for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
//		{
//			cout << "\nRound [" << GameRound << "] begins: \n";
//			RoundInfo.RoundNumber = GameRound;
//			RoundInfo.Player1Choice = ReadPlayer1Choice();
//			RoundInfo.ComputerChoice = GetComputerChoice();
//			RoundInfo.Winner = WhoWonTheRound(RoundInfo);
//			RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);
//
//			//Increase Win/Draw Counters
//
//			if (RoundInfo.Winner == enWinner::Player)
//				Player1WinTimes++;
//			else if (RoundInfo.Winner == enWinner::Computer)
//				ComputerWinTimes++;
//			else
//				DrawTimes++;
//
//			PrintRoundResults(RoundInfo);
//		}
//
//		return FillGameResults(HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes);
//	}
//
//	string Tabs(short NumberOfTabs) {
//		string t = "";
//
//		for (int i = 1; i < NumberOfTabs; i++)
//		{
//			t = t + "\t";
//			cout << t;
//		}
//		return t;
//	}
//
//	void ShowGameOverScreen() {
//		cout << Tabs(2) << "__________________________________________________\n\n";
//		cout << Tabs(2) << "                    +++ G a m e O v e r +++\n         ";
//		cout << Tabs(2) << "__________________________________________________\n\n";
//
//	}
//
//	void ShowFinalGameResults(stGameResults GameResults) {
//		cout << Tabs(2) << "_____________________ [Game Results ]_____________________\n\n";
//		cout << Tabs(2) << "Game Rounds        : " << GameResults.GameRounds << endl;
//		cout << Tabs(2) << "Player1 won times  : " << GameResults.Player1WinTimes << endl;
//		cout << Tabs(2) << "Computer won times : " << GameResults.Computer2WinTimes << endl;
//		cout << Tabs(2) << "Draw times         : " << GameResults.DrawTimes << endl;
//		cout << Tabs(2) << "Final Winner       : " << GameResults.WinnerName << endl;
//		cout << Tabs(2) << "___________________________________________________________\n";
//		SetWinnerScreenColor(GameResults.GameWinner);
//	}
//
//	short ReadHowManyRounds() {
//		short GameRounds = 1;
//		do {
//			cout << "How Many Rounds 1 to 10 ? \n";
//			cin >> GameRounds;
//		} while (GameRounds < 1 || GameRounds >10);
//		return GameRounds;
//	}
//
//	void ResetScreen() {
//		system("cls");
//		system("color 0F");
//	}
//
//	void StartGame() {
//		char PlayAgain = 'Y';
//
//		do
//		{
//			ResetScreen();
//			stGameResults GameResult = PlayGame(ReadHowManyRounds());
//			ShowGameOverScreen();
//			ShowFinalGameResults(GameResult);
//
//			cout << endl << Tabs(3) << "Do you want to Play again? Y/N";
//			cin >> PlayAgain;
//
//		} while (PlayAgain == 'Y' || PlayAgain == 'y');
//	}
//
//}