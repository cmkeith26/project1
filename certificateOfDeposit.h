//Programmer: Candace Keith
//Lab: 12Ex5
//Date: 03/24/17
//Purpose: To simulate a Bank Account with various options

#pragma once
#include "bankaccount.h"

class certificateOfDeposit :
  public bankAccount
{
public:
  certificateOfDeposit(int acctNum, string name, double initialBalance, int matMon)
    : bankAccount(acctNum, name, initialBalance)
  {
    m_MaturityMonths = matMon;
    m_CurrentMonth = 1;
    m_InterestRate = 4.75;
  }//End certificateOfDeposit

  ~certificateOfDeposit(void){}

  void withdraw(double amount)
  {
    if (m_Balance-amount < 0)
    {
      cout << "Declined: Insufficient funds remain to withdraw that amount" << endl;
      return;
    }//End if insufficient funds for withdraw
    m_Balance -= amount;
  }//End withdraw

  void printSummary()
  {
    // Use the root base class to print common info
    bankAccount::printSummary();
    cout << setw(25) << "Interest rate:  " << m_InterestRate << "%" << endl;//print interest rate
    cout << setw(25) << "Maturity Months:  " << m_MaturityMonths << endl;//print maturity months
    cout << setw(25) << "Current Month:  " << m_CurrentMonth << endl;//print current month
    cout << endl << setw(60) << setfill('-') << "" << setfill(' ') << endl;
  }//End printSummary for Interest rate, maturity months, current month

  void printStatement()
  {
    printSummary();
    cout << "A full implementation would also print a Certificate of Deposite Account Statement here." << endl;
  }//End printStatement

private:
  double m_InterestRate;//Interest rate
  int m_MaturityMonths;//Maturity Months
  int m_CurrentMonth;//Current month
};//end class certificateOfDeposit

