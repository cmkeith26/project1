//Programmer: Candace Keith
//Lab: 12Ex5
//Date: 03/24/17
//Purpose: To simulate a Bank Account with various options

#pragma once
#include "checkingAccount.h"

const int MAX_CHECKS=5;
const double SVC_CHARGE=10.0l;

class serviceChargeChecking :
  public checkingAccount
{
public:
  serviceChargeChecking(int acctNum, string name, double initialBalance)
    : checkingAccount(acctNum, name, initialBalance)
  {
    m_InterestRate = 0; // No interest
    m_ChecksRemaining = MAX_CHECKS; // Limit of 5 checks
    m_MinimumBalance = 0; // No minimum balance
  }//End set interest rate, checks remaining, minimum balance

  ~serviceChargeChecking(void){}

  void writeCheck(double amount)
  {
    if (m_ChecksRemaining == 0)
    {
      cout << "Declined: No more checks remaining this month" << endl;
      return;
    }//End if for declined writeCheck, none remaining

    if (m_Balance - amount < 0)
    {
      cout << "Declined: Insufficient funds remain to withdraw that amount" << endl;
      return;
    }//End if for insufficient funds for writeCheck

    m_ChecksRemaining--;
    m_Balance -= amount; // Assume check is cashed immediately...

    }//End writeCheck

    void printSummary()
    {
      // Use the root base class to print common info
      bankAccount::printSummary();
      cout << setw(25) << "Checks remaining:  " << m_ChecksRemaining << endl;//print checks remaining
      cout << setw(25) << "Monthly service fee: $" << SVC_CHARGE << endl;//print monthly service fee
      cout << setw(25) << "No interest  " << endl;//print no interest
      cout << setw(25) << "No Minimum Balance  " << endl;//print no minimum balance
      cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
    }//End printSummary
};//End serviceChargeChecking

