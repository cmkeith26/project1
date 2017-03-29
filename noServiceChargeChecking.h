//Programmer: Candace Keith
//Lab: 12Ex5
//Date: 03/24/17
//Purpose: To simulate a Bank Account with various options

#pragma once
#include "checkingaccount.h"

class noServiceChargeChecking :
  public checkingAccount
{
public:
  noServiceChargeChecking(int acctNum, string name, double initialBalance)
    : checkingAccount(acctNum, name, initialBalance)
  {
    m_InterestRate = 2.5; // Some interest rate
    m_ChecksRemaining = -1; // -1 indicates no limit
    m_MinimumBalance = 500; // Minimum balance

  }//End setting interest rate, checks remaining, minimum balance

  ~noServiceChargeChecking(void){}

  void writeCheck(double amount)
  {
    if (m_Balance - amount < 0)
    {
      cout << "Declined: Insufficient funds remain to withdraw that amount" << endl;
      return;
    }//End if for insufficient funds

    m_Balance -= amount; // Assume check is cashed immediately...
  }//End writeCheck

  void printSummary()
  {
    // Use the root base class to print common info
    bankAccount::printSummary();
    cout << setw(25) << "Interest rate:  " << m_InterestRate  << "%" << endl;//print interest rate
    cout << setw(25) << "Minimum Balance: $" << m_MinimumBalance << endl;//print minimum balance
    cout << setw(25) << "Unlimited checks   " << endl;//print unlimited checks
    cout << setw(25) << "No monthly service fee   "<< endl;//print no monthly service fee
    cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
  }//End printSummary

};//End class noServiceChargeChecking

