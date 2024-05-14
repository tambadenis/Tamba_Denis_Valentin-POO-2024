#pragma once
#include "BankAccount.h"

ref class CurrentAccount : BankAccount
{
public:
	// Choose to override ToString
	virtual String^ ToString() override;
	// Have to override CanDebit
	virtual bool CanDebit(double amount) override;
	CurrentAccount(String ^holder, double limit);
	void ChangeOverdraftLimit(double newLimit);
	double GetOverdraftLimit();
private:
	double overdraftLimit;
};

