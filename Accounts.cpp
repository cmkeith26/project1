//Programmer: Candace Keith
//Lab: 12Ex5
//Date: 03/24/17
//Purpose: To simulate a Bank Account with various options

#include <iostream>
#include <iomanip>
#include <string>

#include "bankAccount.h"
#include "serviceChargeChecking.h"
#include "noServiceChargeChecking.h"
#include "highInterestChecking.h"
#include "savingsAccount.h"
#include "highInterestSavings.h"
#include "certificateOfDeposit.h"

using namespace std;

void TestCheckingWithService()
{
  serviceChargeChecking acct(123,"John Doe", 1000);

  char input=0;
  double amount;
  cout << "\t\tTesting Checking with Service Charge" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary();
  cout << endl;//End for TestCheckingWithService print summary

  while (input != 'x')
  {
    cout << "Select a transaction:" << endl; //Display options for Bank Account
    cout << "1 - Make a Withdrawal" << endl;//Display options for Bank Account
    cout << "2 - Make a Deposit" << endl;//Display options for Bank Account
    cout << "3 - Print Summary" << endl;//Display options for Bank Account
    cout << "4 - Print Monthly Statement" << endl;//Display options for Bank Account
    cout << "5 - Write a check" << endl;//Display options for Bank Account
    cout << "x - Exit Test Suite" << endl;//Display options for Bank Account
    cout << "Enter choice: ";
    cin >> input;

    switch (input)
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;//Case for withdraw
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;//Case for deposit
    case '3':
      acct.printSummary();
      break;//Case for print summary
    case '4':
      acct.printStatement();
      break;//Case for print statement
    case '5':
      cout << "Enter amount: ";
      cin >> amount;
      acct.writeCheck(amount);
      break;//Case for writing check
    case 'x':
      break;//Case for closing options
    default:
      cout << "Invalid choice" << endl;
      break;
    }//End switch
    acct.printSummary();
    cout << endl;
  }//End while
}//End TestCheckingWithService

void TestCheckingNoService()
{
  noServiceChargeChecking acct(123,"John Doe", 1000);
  char input=0;
  double amount;
  cout << "\t\tTesting Checking without Service Charge" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary();
  cout << endl;//End noServiceChargeChecking print summary

  while (input != 'x')
  {
    cout << "Select a transaction:" << endl;//Display options for Bank Account
    cout << "1 - Make a Withdrawal" << endl;//Display options for Bank Account
    cout << "2 - Make a Deposit" << endl;//Display options for Bank Account
    cout << "3 - Print Summary" << endl;//Display options for Bank Account
    cout << "4 - Print Monthly Statement" << endl;//Display options for Bank Account
    cout << "5 - Write a check" << endl;//Display options for Bank Account
    cout << "x - Exit Test Suite" << endl;//Display options for Bank Account
    cout << "Enter choice: ";//Display options for Bank Account
    cin >> input;

    switch (input)
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;//Case for withdraw
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;//Case for deposit
    case '3':
      acct.printSummary();
      break;//Case for print summary
    case '4':
      acct.printStatement();
      break;//Cause for print statement
    case '5':
      cout << "Enter amount: ";
      cin >> amount;
      acct.writeCheck(amount);
      break;//Case for write check
    case 'x':
      break;//Case for exit Bank Account
    default:
      cout << "Invalid choice" << endl;
      break;
    }//End switch
    acct.printSummary();
    cout << endl;
  }//End while
}//End TestCheckingNoService

void TestCheckingHighInterest()
{
  highInterestChecking acct(123,"John Doe", 1000);

  char input=0;
  double amount;
  cout << "\t\tTesting Checking with High Interest" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary();
  cout << endl;//End TestCheckingHighInterest print summary

  while (input != 'x')
  {
    cout << "Select a transaction:" << endl;//Display options for Bank Account
    cout << "1 - Make a Withdrawal" << endl;//Display options for Bank Account
    cout << "2 - Make a Deposit" << endl;//Display options for Bank Account
    cout << "3 - Print Summary" << endl;//Display options for Bank Account
    cout << "4 - Print Monthly Statement" << endl;//Display options for Bank Account
    cout << "5 - Write a check" << endl;//Display options for Bank Account
    cout << "x - Exit Test Suite" << endl;//Display options for Bank Account
    cout << "Enter choice: ";//Display options for Bank Account
    cin >> input;

    switch (input)
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;//Case for withdraw
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;//Case for deposit
    case '3':
      acct.printSummary();
      break;//Case for print summary
    case '4':
      acct.printStatement();
      break;//case for print statement
    case '5':
      cout << "Enter amount: ";
      cin >> amount;
      acct.writeCheck(amount);
      break;//Case for write check
    case 'x':
      break;//Case for exit Bank Account
    default:
      cout << "Invalid choice" << endl;
      break;
    }//End switch
    acct.printSummary();
    cout << endl;
  }//End while
}//End TestCheckingHighInterest

void TestSavings()
{
  savingsAccount acct(123,"John Doe", 1000);

  char input=0;
  double amount;
  cout << "\t\tTesting Regular Savings" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary();
  cout << endl;//End TestSavings print summary

  while (input != 'x')
  {
    cout << "Select a transaction:" << endl;//Display options for Bank Account
    cout << "1 - Make a Withdrawal" << endl;//Display options for Bank Account
    cout << "2 - Make a Deposit" << endl;//Display options for Bank Account
    cout << "3 - Print Summary" << endl;//Display options for Bank Account
    cout << "4 - Print Monthly Statement" << endl;//Display options for Bank Account
    cout << "x - Exit Test Suite" << endl;//Display options for Bank Account
    cout << "Enter choice: ";//Display options for Bank Account
    cin >> input;

    switch (input)
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;//Case for withdraw
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;//Case for deposit
    case '3':
      acct.printSummary();
      break;//Case for print summary
    case '4':
      acct.printStatement();
      break;//Case for print statement
    case 'x':
      break;//Case for exit Bank Account
    default:
      cout << "Invalid choice" << endl;
      break;
    }//End switch
    acct.printSummary();
    cout << endl;
  }//End while
}//End TestSavings

void TestSavingsHighInterest()
{
  highInterestSavings acct(123,"John Doe", 8000);

  char input=0;
  double amount;
  cout << "\t\tTesting High Interest Savings" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary();
  cout << endl;

  while (input != 'x')
  {
    cout << "Select a transaction:" << endl;//Display options for Bank Account
    cout << "1 - Make a Withdrawal" << endl;//Display options for Bank Account
    cout << "2 - Make a Deposit" << endl;//Display options for Bank Account
    cout << "3 - Print Summary" << endl;//Display options for Bank Account
    cout << "4 - Print Monthly Statement" << endl;//Display options for Bank Account
    cout << "x - Exit Test Suite" << endl;//Display options for Bank Account
    cout << "Enter choice: ";//Display options for Bank Account
    cin >> input;

    switch (input)
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;//Case for withdraw
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;//Case for deposit
    case '3':
      acct.printSummary();
      break;//Case for print summary
    case '4':
      acct.printStatement();
      break;//Case for print statement
    case 'x':
      break;//Case for exit Bank Account
    default:
      cout << "Invalid choice" << endl;
      break;
    }//End switch
    acct.printSummary();
    cout << endl;
  }//End while
}//End TestSavingsHighInterest

void TestCertificateOfDeposit()
{
  certificateOfDeposit acct(123,"John Doe", 10000, 6);

  char input=0;
  double amount;
  cout << "\t\tTesting High Interest Savings" << endl << endl;

  cout << "Current account overview:" << endl;
  acct.printSummary();
  cout << endl;

  while (input != 'x')
  {
    cout << "Select a transaction:" << endl;//Display options for Bank Account
    cout << "1 - Make a Withdrawal" << endl;//Display options for Bank Account
    cout << "2 - Make a Deposit" << endl;//Display options for Bank Account
    cout << "3 - Print Summary" << endl;//Display options for Bank Account
    cout << "4 - Print Monthly Statement" << endl;//Display options for Bank Account
    cout << "x - Exit Test Suite" << endl;//Display options for Bank Account
    cout << "Enter choice: ";//Display options for Bank Account
    cin >> input;

    switch (input)
    {
    case '1':
      cout << "Enter amount: ";
      cin >> amount;
      acct.withdraw(amount);
      break;//Case for withdraw
    case '2':
      cout << "Enter amount: ";
      cin >> amount;
      acct.deposit(amount);
      break;//Case for deposit
    case '3':
      acct.printSummary();
      break;//Case for print summary
    case '4':
      acct.printStatement();
      break;//Case for print summary
    case 'x':
      break;//Case for exit Bank Account
    default:
      cout << "Invalid choice" << endl;
      break;
    }//End switch
    acct.printSummary();
    cout << endl;
  }//End while
}//End TestCertificateOfDeposit

int main()
{
  char input;
  cout << "\t\tWelcome to the Bank Account Test Suite" << endl << endl;

  cout << "What type of account do you want to test?" << endl;//Display options for Bank Account
  cout << "1 - Checking with Service Charge" << endl;//Display options for Bank Account
  cout << "2 - Checking without Service Charge" << endl;//Display options for Bank Account
  cout << "3 - Checking with High Interest" << endl;//Display options for Bank Account
  cout << "4 - Savings" << endl;//Display options for Bank Account
  cout << "5 - Savings with High Interest" << endl;//Display options for Bank Account
  cout << "6 - Certificate of Deposit" << endl;//Display options for Bank Account
  cout << "Enter choice: ";//Display options for Bank Account
  cin >> input;

  switch (input)
  {
  case '1':
    TestCheckingWithService();
    break;//Case for CheckingWithService
  case '2':
    TestCheckingNoService();
    break;//Case for TestCheckingNoService
  case '3':
    TestCheckingHighInterest();
    break;//Case for CheckingHighInterest
  case '4':
    TestSavings();
    break;//Case for TestSavings
  case '5':
    TestSavingsHighInterest();
    break;//Case for TestSavingsHighInterest
  case '6':
    TestCertificateOfDeposit();
    break;//Case for TestCertifcateOfDeposit
  default:
    cout << "Invalid choice" << endl;
    break;
  }//End switch
}//End int main
