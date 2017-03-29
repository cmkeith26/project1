//Programmer: Candace Keith
//Lab: 12Ex5
//Date: 03/24/17
//Purpose: To simulate a Bank Account with various options

#pragma once
#include "bankaccount.h"
class checkingAccount :
  public bankAccount
{
public:
  checkingAccount(int acctNum, string name, double initialBalance)
    : bankAccount(acctNum, name, initialBalance)
  {
  }//Set checkingAccount account number, name, initialBalance
  ~checkingAccount(void){}

  virtual void writeCheck(double amount) = 0;

  void withdraw(double amount)
  {
    if (m_Balance-amount < 0)
    {
      cout << "Declined: Insufficient funds remain to withdraw that amount" << endl;
      return;
    }//End if for insufficient funds
    if (m_Balance - amount < m_MinimumBalance)
    {
      cout << "Declined: Minimum balance requirement prohibits this withdrawal" << endl;
      return;
    }//End if for minimum balance requirement
    m_Balance -= amount;
  }//End withdraw

  void printStatement()
  {
    printSummary();
    cout << endl << "A full implementation would also print details of a Checking Account Statement here." << endl << endl;
  }//End printSummary for print statement

protected:
  double m_InterestRate;//Interest rate
  int m_ChecksRemaining;//Checks remaining
  double m_MinimumBalance;//Minimum balance
};//End class checkingAccount

