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
