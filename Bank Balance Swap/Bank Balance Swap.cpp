// Bank Balance Swap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void safeViewAccountBalanceTransaction(int accountBalanceOne, int accountBalanceTwo);
void hackViewAccountBalanceTransaction(int& accountBalanceOne, int& accountBalanceTwo);


int main()
{
	//set initial account balances
	int ganonsKingdom = 2100000;
	int linksRebellion = 33;

	//display initial account balances to user
	cout << "Original values\n";
	cout << "Ganon's Kingdom Account Balance: " << ganonsKingdom << " Rupees\n";
	cout << "Link's Rebellion Account Balance: " << linksRebellion << " Rupees\n\n";

	//displays what the program is meant to do and a little explanation of the reason why
	//that fits the backstory
	cout << "This program is meant to take the bank balance in Ganon's Kingdom\n";
	cout << "and to move into Link's Rebellion against Ganon. This is to make sure that when the time comes\n";
	cout << "Link will be able to dethrone the evil tyrant and save Hyrule for good.\n\n";

	//check account balances here for the first time.
	cout << "Let's view our account balane by calling the Normal Transaction()\n";
	safeViewAccountBalanceTransaction(ganonsKingdom, linksRebellion);
	cout << "Ganon's Kingdom Account Balance: " << ganonsKingdom << " Rupees\n";
	cout << "Link's Rebellion Account Balance: " << linksRebellion << " Rupees\n\n";

	//check account balances here using the hacked transaction function
	//also do the switch of money between accounts
	//in the hacked function we call
	cout << "Calling Hacked Transaction()\n";
	hackViewAccountBalanceTransaction(ganonsKingdom, linksRebellion);
	cout << "Ganon's Kingdom Account Balance: " << ganonsKingdom << " Rupees\n";
	cout << "Link's Rebellion Account Balance: " << linksRebellion << " Rupees\n\n";

	//displays whether the program will be a success or not when implemented
	//along with a little story to go with it
	cout << "This program is a success\n";
	cout << "Now Link will be able to get the forces and supplies needed to take back the kingdom, while Ganon\n";
	cout << "will be left floundering to find any support for his armies.\n\n";

	system("Pause");

	return 0;
}

//keeps the two accounts the same
void safeViewAccountBalanceTransaction(int accountBalanceOne, int accountBalanceTwo)
{
	int temp = accountBalanceOne;
	accountBalanceOne = accountBalanceTwo;
	accountBalanceTwo = temp;
}

//switches the two accounts
void hackViewAccountBalanceTransaction(int& accountBalanceOne, int& accountBalanceTwo)
{
	int temp = accountBalanceOne;
	accountBalanceOne = accountBalanceTwo;
	accountBalanceTwo = temp;
}