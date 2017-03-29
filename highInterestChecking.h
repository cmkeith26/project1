//Programmer: Candace Keith
//Lab: 12Ex5
//Date: 03/24/17
//Purpose: To simulate a Bank Account with various options

#pragma once
#include "noservicechargechecking.h"

class highInterestChecking :
  public noServiceChargeChecking
{
public:
  highInterestChecking(int acctNum, string name, double initialBalance)
    : noServiceChargeChecking(acctNum, name, initialBalance)
  {
    // The only difference between the base class noServiceChargeChecking
    // is the values of interest and minimum balance.
    // So no additional functionality needed for this one.

    m_InterestRate = 5.0; // Higher interest rate
    m_ChecksRemaining = -1; // -1 indicates no limit
    m_MinimumBalance = 1000; // Minimum balance
  }//End set for InterestRate, ChecksRemaining, MinimumBalance

  ~highInterestChecking(void){}
};//End class highInterestChecking

