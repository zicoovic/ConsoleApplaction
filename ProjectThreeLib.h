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
#include "algorithmLib3.h"
#include <iomanip>
#include <cctype>
#include <fstream>
#include <iomanip>
using namespace std;
using namespace algo3;

namespace Pro3 {

	void MainMenuScreen();
	//Project two Function callback....
	void showTransactionMenuScreen();

	enum enMainMenuOptions
	{
		eListClients = 1, eAddNewClient = 2,
		eDeleteClient = 3, eUpdateClient = 4,
		eFindClient = 5, eTransactions = 6 , eExit = 7,

	};


	//Project two code....
	enum enTransactionOptions {
		eDeposit = 1, eWithdraw = 2,
		eTotalBalances = 3, eMainMenu = 4,
	};
	//End Project two code....

	short ReadMainMenuOption() {
		int Number = 0;
		cout << "Choose what do you wand to do? [1 to 7]" << endl;
		cin >> Number;
		return Number;
	}

	//Project two code....
	short ReadTransactionMenuOption() {
		int Number = 0;
		cout << "Choose what do you wand to do? [1 to 4]" << endl;
		cin >> Number;
		return Number;
	}
	//End Project two code....



	void ShowAllClientsScreen() {
		vector <algo3::Client>  vClients = algo3::LoadClientsDataFromFile(algo3::ClientsFileName);
		cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).\n";
		cout << "\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;

		cout << "| " << left << setw(15) << "Accout Number";
		cout << "| " << left << setw(10) << "Pin Code";
		cout << "| " << left << setw(40) << "Client Name";
		cout << "| " << left << setw(12) << "Phone";
		cout << "| " << left << setw(12) << "Balance";
		cout << "\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;

		

		if (vClients.size() == 0)
		{
			cout << "\t\t\tNo Clients Available In  the System" << endl;
		}
		else {
			for (const Client& client : vClients) {
				algo3::PrintClientRecord(client);
				cout << endl;
			}
		
		}
	}

	void ShowAddNewClientScreen() {
		cout << "\n-----------------------------------\n";
		cout << "\tAdd New Clients Screen";
		cout << "\n-----------------------------------\n";

		algo3::AddNewClient();
	}

	void ShowDeleteClientScreen() {
		cout << "\n-----------------------------------\n";
		cout << "\tDelete Client Screen";
		cout << "\n-----------------------------------\n";

		vector <algo3::Client> vClients = algo3::LoadClientsDataFromFile(algo3::ClientsFileName);
		string AccountNumber = ReadClientAccountNumber();
		DeleteClientByAccountNumber(AccountNumber, vClients);
	}

	void ShowUpdateClientScreen() {
		cout << "\n-----------------------------------\n";
		cout << "\tUpdate Client Screen";
		cout << "\n-----------------------------------\n";
		vector <algo3::Client> vClients = algo3::LoadClientsDataFromFile(algo3::ClientsFileName);
		string AccountNumber = ReadClientAccountNumber();
		algo3::UpdateClientByAccountNumber(AccountNumber, vClients);
	}

	void ShowFindClientsScreen() {
		cout << "\n-----------------------------------\n";
		cout << "\tFind Client Screen";
		cout << "\n-----------------------------------\n";
		vector <algo3::Client> vClients = algo3::LoadClientsDataFromFile(algo3::ClientsFileName);
		string AccountNumber = ReadClientAccountNumber();
		algo3::Client client;
		if (FindClientByAccountNumber(AccountNumber, vClients, client))
		{
			algo3::PrintClientCard(client);
		}
		else {
			cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
		}
	}
	//Project two code....

	void PrintClientRecordBalanceLine(algo3::Client client)
	{

		cout << "| " << setw(15) << left << client.AccountNumber;
		cout << "| " << setw(40) << left << client.Name;
		cout << "| " << setw(12) << left << client.AccountBalance;

	}

	bool DepositBalanceToClientByAccountNumber(string accountNumber , double amount, vector<algo3::Client> &vClient ) {
		char Answer = 'n';

		cout << "\n\nAre you sure you want perform this transaction (y/n)";
		cin >> Answer;

		if (Answer == 'y' || Answer == 'Y')
		{
			for (algo3::Client& c : vClient)
			{
				if (c.AccountNumber == accountNumber)
				{
					c.AccountBalance += amount;
					 SaveCleintsDataToFile(ClientsFileName, vClient);
					cout << "\n\nDone successfully. New balance is: " << c.AccountBalance;

					return true;
				}
			}
		}

		return false;
	}

	void ShowTotalBalances() {
		vector <algo3::Client> vClients = algo3::LoadClientsDataFromFile(ClientsFileName);

		cout << "\n\t\t\t\t\tBalances List (" << vClients.size() << ") Client(s).";
		cout << "\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;

		cout << "| " << left << setw(15) << "Accout Number";
		cout << "| " << left << setw(40) << "Client Name";
		cout << "| " << left << setw(12) << "Balance";
		cout << "\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;

		double TotalBalances = 0;

		if (vClients.size() == 0)
			cout << "\t\t\t\tNo Clients Available In the System!";
		else

			for (Client client : vClients)
			{

				PrintClientRecordBalanceLine(client);
				TotalBalances += client.AccountBalance;

				cout << endl;
			}

		cout << "\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;
		cout << "\t\t\t\t\t   Total Balances = " << TotalBalances;
	}

	void ShowDepositScreen() {
		cout << "\n-----------------------------------\n";
		cout << "\tDeposit Screen";
		cout << "\n-----------------------------------\n";

		vector <algo3::Client> vClients = algo3::LoadClientsDataFromFile(algo3::ClientsFileName);
		string AccountNumber = ReadClientAccountNumber();
		algo3::Client client;
		while (!FindClientByAccountNumber(AccountNumber, vClients, client))
		{
			cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
			AccountNumber = ReadClientAccountNumber();
		}
		PrintClientCard(client);

		double Amount = 0;
		cout << "\nPlease enter deposit amount? ";
		cin >> Amount;
		DepositBalanceToClientByAccountNumber(AccountNumber, Amount, vClients);
	}

	void ShowWithdrawScreen() {
		cout << "\n-----------------------------------\n";
		cout << "\tWithdraw Screen";
		cout << "\n-----------------------------------\n";
		vector <algo3::Client> vClients = algo3::LoadClientsDataFromFile(algo3::ClientsFileName);
		string AccountNumber = ReadClientAccountNumber();
		algo3::Client client;

		while (!FindClientByAccountNumber(AccountNumber, vClients, client))
		{
			cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
			AccountNumber = ReadClientAccountNumber();
		}
		PrintClientCard(client);

		double Amount = 0;
		cout << "\nPlease enter Withdraw amount? ";
		cin >> Amount;

		//Validate that the amount does not exceeds the balance

		while (Amount > client.AccountBalance)
		{
			cout << "\nAmount exceeds the balance, you can withdraw up to: " << client.AccountBalance;
			cout << "\n Please enter another amount  ";
			cin >> Amount;
		}

		DepositBalanceToClientByAccountNumber(AccountNumber, Amount * -1, vClients);


	}

	void ShowTotalBalancesScreen() {
		ShowTotalBalances();
	}

	void GoBackToMainMenu() {
		cout << "\n\n Press Any Key to go back to Main Menu....";
		system("pause>0");
		MainMenuScreen();
	}

	void GoBackToTransactionsMenu() {
		cout << "\n\n Press Any Key to go back to Main Menu....";
		system("pause>0");
		showTransactionMenuScreen();
	}
	//End of Project Two Code....

	void ShowEndScreen()
	{
		cout << "\n-----------------------------------\n";
		cout << "\tProgram Ends :-)";
		cout << "\n-----------------------------------\n";
	}

	void PerformMainMenuOption(enMainMenuOptions MainMenuOptions) {
		switch (MainMenuOptions)
		{
		case enMainMenuOptions::eListClients:
			system("cls");
			ShowAllClientsScreen();
			GoBackToMainMenu();
			break;
		case enMainMenuOptions::eAddNewClient:
			system("cls");
			ShowAddNewClientScreen();
			GoBackToMainMenu();
			break;
		case enMainMenuOptions::eDeleteClient:
			system("cls");
			ShowDeleteClientScreen();
			GoBackToMainMenu();
			break;
		case enMainMenuOptions::eUpdateClient:
			system("cls");
			ShowUpdateClientScreen();
			GoBackToMainMenu();
			break;
		case enMainMenuOptions::eFindClient:
			system("cls");
			ShowFindClientsScreen();
			GoBackToMainMenu();
			break;
		case enMainMenuOptions::eTransactions:
			system("cls");
			showTransactionMenuScreen();
			break;
		case enMainMenuOptions::eExit:
			system("cls");
			ShowEndScreen();
			break;
		}
	}

	//Project two code....
	void PerformTransactionsMenuOption(enTransactionOptions TransactionsMenuOptions) {
		switch (TransactionsMenuOptions)
		{
		case enTransactionOptions::eDeposit:
			system("cls");
			ShowDepositScreen();
			GoBackToTransactionsMenu();
			break;
		case enTransactionOptions::eWithdraw:
			system("cls");
			ShowWithdrawScreen();
			GoBackToTransactionsMenu();
			break;
		case enTransactionOptions::eTotalBalances:
			system("cls");
			ShowTotalBalancesScreen();
			GoBackToTransactionsMenu();
			break;
		case enTransactionOptions::eMainMenu:
			system("cls");
			MainMenuScreen();
			break;
		default:
			break;
		}
	}
	//End Of Project Two Code....

	void MainMenuScreen() {
		system("cls");
		cout << "========================================" << endl;
		cout << "\t\tMain Menu Screen" << endl;
		cout << "========================================" << endl;
		cout << "\t[1] Show Client List." << endl;
		cout << "\t[2] Add New Client." << endl;
		cout << "\t[3] Delete Client." << endl;
		cout << "\t[4] Update Client Info." << endl;
		cout << "\t[5] Find Client." << endl;
		cout << "\t[6] Transactions." << endl;
		cout << "\t[7] Exit." << endl;
		cout << "========================================" << endl;
		PerformMainMenuOption((enMainMenuOptions)ReadMainMenuOption());
	}

	//Project two code....

	void showTransactionMenuScreen() {
		system("cls");
		cout << "\n-----------------------------------\n";
		cout << "\tTransaction Menu Screen";
		cout << "\n-----------------------------------\n";
		cout << "\t[1] Deposit." << endl;
		cout << "\t[2] Withdraw." << endl;
		cout << "\t[3] Total Balances." << endl;
		cout << "\t[4] Main Menue." << endl;
		cout << "========================================" << endl;
		PerformTransactionsMenuOption((enTransactionOptions)ReadTransactionMenuOption());
	}

	//End Project two code....





	
}