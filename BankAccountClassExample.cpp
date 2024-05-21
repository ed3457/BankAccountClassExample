// BankAccountClassExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "BankAccount.h"

int main()
{
	BankAccount b1;
	b1.setBranchName("Troy");
	b1.setClientName("Steve Jobs");
	b1.deposit(1000000);

	b1.printAccountInfo();


	BankAccount b2(2000, "Detroit", "Mary");

	b2.printAccountInfo();
	const int clientCount = 50;
	BankAccount clientAccounts[clientCount];

	string cname;
	for (int i = 0; i < 50; i++)
	{
		cout << "Please enter the client name:\n";
		cin >> cname;
		clientAccounts[i].setClientName(cname);
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
