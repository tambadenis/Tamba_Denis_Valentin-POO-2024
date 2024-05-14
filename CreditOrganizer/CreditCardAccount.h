#pragma once
#include "pch.h"
#include "LoyaltyScheme.h"
ref class CreditCardAccount
{
public:
	void RedeemLoyaltyPoints();
	literal System::String^ name = "Super Platinum Card";
	static CreditCardAccount();
	static int GetNumberOfAccounts();
	static int numberOfAccounts = 0;
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
private:
	LoyaltyScheme^ scheme; // Handle to a LoyaltyScheme object
	static double interestRate;
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;
}; 
	


