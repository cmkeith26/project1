//Programmer: Candace Keith
//Lab: 12Ex5
//Date: 03/24/17
//Purpose: To simulate a Bank Account with various options

#pragma once
#include "savingsaccount.h"
class highInterestSavings :
  public savingsAccount
{
public:
  highInterestSavings(int acctNum, string name, double initialBalance)
    : savingsAccount(acctNum, name, initialBalance)
  {
    m_MinimumBalance = 5000;
  }//End set minimum balance

  ~highInterestSavings(void){}

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
    }//End if for minimum balance requirements

    m_Balance -= amount;
  }//End withdraw

  void printSummary()
  {
    // Use the root base class to print common info
    bankAccount::printSummary();

    cout << setw(25) << "Interest rate:  " << m_InterestRate << "%" << endl;//print Interest rate
    cout << setw(25) << "Minimum Balance: $" << m_MinimumBalance << endl << endl;//print Minimum balance
    cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
  }//End printSummary


protected:
  double m_MinimumBalance;

};//End class highInterestSavings

