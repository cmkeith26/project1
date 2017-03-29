//Programmer: Candace Keith
//Lab: 12Ex5
//Date: 03/24/17
//Purpose: To simulate a Bank Account with various options

#pragma once
#include "bankaccount.h"
class savingsAccount :
  public bankAccount
{
public:
  savingsAccount(int acctNum, string name, double initialBalance)
    : bankAccount(acctNum, name, initialBalance)
  {
    m_InterestRate = 3.99;
  }//end set interest rate

  ~savingsAccount(void)
  {
  }

  void withdraw(double amount)
  {
    if (m_Balance-amount < 0)
    {
      cout << "Declined: Insufficient funds remain to withdraw that amount" << endl;
      return;
    }//End if for insufficient funds
    m_Balance -= amount;
  }//End withdraw

  void printSummary()
  {
    // Use the root base class to print common info
    bankAccount::printSummary();
    cout << setw(25) << "Interest rate:  " << m_InterestRate << "%" << endl << endl;
    cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
  }//End printSummary

  void printStatement()
  {
    printSummary();
    cout << "A full implementation would also print a Savings Account Statement here." << endl;
  }//End printStatement


protected:
  double m_InterestRate;

};//End class savingsAccount

