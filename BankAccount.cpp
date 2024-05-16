#include "BankAccount.h"

void BankAccount::setClientName(string cn)
{
	clientName = cn;

}

string BankAccount::getClientName()
{
	return clientName; 

}

void BankAccount::setBranchName(string bn)
{
	branchName = bn;

}

string BankAccount::getBranchName()
{
	return branchName;

}

float BankAccount::getBalance()
{
	return balance;
}

void BankAccount::deposit(float amount)
{

	balance += amount;

}

void BankAccount::withdraw(float amount)
{
	// we want to check if you have enough money in the account
	// before you withdraw it

	if (amount<=balance) // if true, then withdraw
	{
		balance -= amount;

	}
	else // if the client does not have enough money 
	{
		cout << "The Account does not have enough funds!\n";
	}





}

void BankAccount::printAccountInfo()
{
	cout << getClientName() << endl;
	cout << getBranchName() << endl;
	cout << getBalance() << endl;

}
