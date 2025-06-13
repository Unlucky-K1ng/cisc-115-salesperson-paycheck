#include <iostream>
#include <iomanip>
using namespace std;

// code requirements:
//The employee's first name, last name (both string with no spaces)
//The employee's base salary and commission percent (both double)
//The employee's total sales (double)
//The employee's expenses (double)


int main() 
{
  
  // searching for employee information to input (gets requirements on line 5,6,7,8, and 9).
  
    string firstName;
    string lastName;
    
    cout << "First Name of Employee ___?";
    cin >> firstName;
    cout << " Last Name of Employee ___?" << endl;
    cin >> lastName;
    
    double baseSalary, commissionPercent;
    double sales, expenses;
    
    cout << "Employee Base Salary ___"; 
    cin >> baseSalary;
    
    cout << " & Commission Percent ___?" << endl;
    cin >> commissionPercent;
    
    cout << "Employee sales ___?" << endl;
    cin >> sales;
    
    cout << "Employee expenses ___?" << endl;
    cin >> expenses;
    
    // calculates the commission value as a number.
    
    double commissionAmount = (commissionPercent/100) * sales;
    
    // Actual employee Payroll Data.
    
    cout << endl << endl << "Payroll data for: " << firstName << setw(8) << lastName << endl;
    
    cout << "Base Salary: " <<  setw(10) << showpoint << baseSalary << endl;
    cout.unsetf(ios::showpoint);
    
    cout << "Commission: " << setw(11) << fixed << setprecision(2) << commissionAmount << setw(3) << "(" << commissionPercent << " of " << sales << ")" << endl;
    
    cout << "Expenses" << setw(15) << expenses << endl;
    
    cout << setw(23) << "-------" << endl; 
    
    double total = (baseSalary + commissionAmount + expenses);
    
    cout << "Total = " << setw(15) << total << endl;
    
}
