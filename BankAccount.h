#pragma once
#include <string>
using namespace std; 
class BankAccount
{
	// Data 
private: 

	float balance;
	string clientName;
	string branchName; 

	// Operations/Functions 
    public:
	void deposit(float amount);
	void withdraw(float amount);
	void printAccountInfo();

	void setClientName(string cn);
	string getClientName();


	float getBalance();

	void setBranchName(string bn);
	string getBranchName();


};

