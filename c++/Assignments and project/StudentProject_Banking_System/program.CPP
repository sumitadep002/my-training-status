#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class account
{
private:
    long accountNumber;
    string firstName;
    string lastName;
    float balance;
    static long NextAccountNumber;

public:
    // accessors
    string getFirstName() { return firstName; }
    string getLastName() { return lastName; }
    long getAccountNumber() { return accountNumber; }
    float getBalance() { return balance; }
    static long getNextAccountNumber() { return NextAccountNumber; }

    // Mutators
    void setFirstName(string s) { firstName = s; }
    void setLastName(string s) { lastName = s; }
    void setAccountNumber(long n) { accountNumber = n; }
    void setBalance(float b) { balance = b; }
    static void setNextAccountNumber(long n) { NextAccountNumber = n; }

    void openAccount();
    void showAccountDetails();
    void balanceEnquiry();
    void deposit();
    void withdrawal();
};
long account::NextAccountNumber = 0;
int main()
{
    ofstream f
    unsigned short choice;
    account a;

    do
    {
        cout << "\n*****Welcome to our Banking system*****";
        cout << "\n\t\t1 Open an account";
        cout << "\n\t\t2 Balance Enquiry";
        cout << "\n\t\t3 Deposit";
        cout << "\n\t\t4 Withdrawal";
        cout << "\n\t\t5 Close an account";
        cout << "\n\t\t6 Show All Account details";
        cout << "\n\t\t7 Quit";
        cout << "\nenter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            a.openAccount();
            break;
        case 2:
            a.balanceEnquiry();
            break;
        case 3:
            a.deposit();
            break;
        case 4:
            a.withdrawal();
            break;
        case 5:
            cout << "\nthis facility is not available for the time being";
            break;
        case 6:
            cout << "\nthis facility is not available for the time being";
            break;
        case 7:
            cout << "\nokay!!! request granted\n\nyou have successfully logged out";
            break;
        default:
            break;
        }
    } while (choice != 7);

    return 0;
}
void account::openAccount()
{
    cout << "\nEnter your FirstName: ";
    cin >> firstName;
    cout << "\nEnter your LatstName: ";
    fflush(stdin);
    cin >> lastName;
    cout << "\nEnter your InitialBalance: ";
    fflush(stdin);
    cin >> balance;
    setNextAccountNumber(NextAccountNumber + 1);
    showAccountDetails();
}
void account::showAccountDetails()
{
    cout << "\nHere is your account info:";
    cout << "\nFirst Name: " << firstName;
    cout << "\nLast Name: " << lastName;
    cout << "\nAccount Number: " << accountNumber;
    cout << "\nBalance: " << balance;
}
void account::balanceEnquiry()
{
    showAccountDetails();
}
void account::deposit()
{
    float deposit = 0;
    cout << "\nenter your account number: ";
    cin >> deposit;
    setBalance(balance + deposit);
    cout << "\nold balance: " << balance - deposit;
    cout << "\nAmount deposited: " << deposit;
    cout << "\nLatest balance: " << balance;
}
void account::withdrawal()
{
    float withdrawalAmount = 0;
    cout << "\nenter your withdrawal amount: ";
    cin >> withdrawalAmount;
    setBalance(balance - withdrawalAmount);
    cout << "\nold balance: " << balance - withdrawalAmount;
    cout << "\nAmouny withdrawed: " << withdrawalAmount;
    cout << "\nLatest balance: " << balance;
}