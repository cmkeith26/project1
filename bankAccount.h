//Programmer: Candace Keith
//Lab: 12Ex5
//Date: 03/24/17
//Purpose: To simulate a Bank Account with various options

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class bankAccount
{
public:
  bankAccount(int acctNum, string name, double initialBalance)
  {
    m_AcctNumber = acctNum;
    m_Name = name;
    m_Balance = initialBalance;
  }//End bankAccount

  ~bankAccount(void){}

  string get_Name()
  {
    return m_Name;
  }//End get_Name

  int get_AcctNumber()
  {
    return m_AcctNumber;
  }//End get_AcctNumber

  double get_Balance()
  {
    return m_Balance;
  }//End get_Balance

  void deposit(double amount)
  {
    m_Balance += amount;
    cout << "$" << amount << " has been deposited to your account" << endl;
  }//End deposit

  virtual void withdraw(double amount) = 0;
  virtual void printStatement() = 0;
  virtual void printSummary()
  {
    cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
    cout << endl << setw(25) << "" << "Account Summary" << endl << endl;//print account summary
    cout << setw(25) << "Name:  " << m_Name << endl;//print name
    cout << setw(25) << "Account #:  " << m_AcctNumber << endl;//print account number
    cout << setw(25) << "Current Balance: $" << m_Balance << endl;//print current balance
  }//End print for Account Summary, Name, Account #, Current Balance

protected:
  string m_Name;
  int m_AcctNumber;
  double m_Balance;
};//End class bankAccount

