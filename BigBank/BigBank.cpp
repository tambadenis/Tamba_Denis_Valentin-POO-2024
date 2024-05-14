#include "pch.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"

using namespace System;

int main(array<System::String ^> ^args)
{
Console::WriteLine("Testing the CurrentAccount");
	CurrentAccount current("Jane", 100);
	current.Credit(500);
	// Should be accepted
	if (current.Debit(550) == true)
	{
	Console::WriteLine("Debit(55O) OK");
	}
	else
	{
	Console::WriteLine("Debit(55O) failed");
	}
		// Should be declined
	if (current.Debit(100) == true)
	{
	Console::WriteLine("Debit(100) OK");
		}
	else
	{
	Console::WriteLine("Debit(100) failed");
	}
	Console::WriteLine(current.ToString());
Console::WriteLine("\nTesting the SavingsAccount");
	SavingsAccount savings("Fred");
	savings.Credit(500);
	// Should be accepted
	if (savings.Debit(50) == true)
	{
	Console::WriteLine("Debit(50) OK");
	}
	else
	{
	Console::WriteLine("Debit(50) failed");
	}
	// Should be declined
	if (savings.Debit(46) == true)
	{
	Console::WriteLine("Debit(46) OK");
	}
	else
	{
	Console::WriteLine("Debit(46) failed");
	}
Console::WriteLine(savings.ToString());
	return 0;

}
