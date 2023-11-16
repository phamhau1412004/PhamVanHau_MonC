#include <iostream>
#include <cmath>
using namespace std;

class MortgageCalculator {
private:
    double loanAmount;
    double annualInterestRate;
    int years;

public:
    MortgageCalculator() {
        loanAmount = 0.0;
        annualInterestRate = 0.0;
        years = 0;
    }

    void setLoanAmount(double amount) {
        if (amount >= 0) {
            loanAmount = amount;
        } else {
            cout << "Invalid loan amount. Please enter a non-negative value." << endl;
        }
    }

    void setAnnualInterestRate(double rate) {
        if (rate >= 0) {
            annualInterestRate = rate;
        } else {
            cout << "Invalid annual interest rate. Please enter a non-negative value." << endl;
        }
    }

    void setYears(int numYears) {
        if (numYears >= 0) {
            years = numYears;
        } else {
            cout << "Invalid number of years. Please enter a non-negative value." << endl;
        }
    }

    double calculateMonthlyPayment() {
        if (loanAmount == 0 || annualInterestRate == 0 || years == 0) {
            return 0.0;
        }

        double monthlyRate = (annualInterestRate / 100) / 12;
        int numPayments = years * 12;
        double monthlyPayment = (loanAmount * monthlyRate) / (1 - pow(1 + monthlyRate, -numPayments));

        return monthlyPayment;
    }

    double calculateTotalAmountPaid() {
        double monthlyPayment = calculateMonthlyPayment();
        return monthlyPayment * years * 12;
    }
};

int main() {
    MortgageCalculator mortgage;

    double loanAmount, annualInterestRate;
    int years;

    cout << "Enter the loan amount: $";
    cin >> loanAmount;
    mortgage.setLoanAmount(loanAmount);

    cout << "Enter the annual interest rate (in percentage): ";
    cin >> annualInterestRate;
    mortgage.setAnnualInterestRate(annualInterestRate);

    cout << "Enter the number of years: ";
    cin >> years;
    mortgage.setYears(years);

    double monthlyPayment = mortgage.calculateMonthlyPayment();
    double totalAmountPaid = mortgage.calculateTotalAmountPaid();

    cout << "Monthly Payment: $" << monthlyPayment << endl;
    cout << "Total Amount Paid: $" << totalAmountPaid << endl;

    return 0;
}
