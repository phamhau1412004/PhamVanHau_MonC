	#include <iostream>;
	using namespace std;
	int main() {
	 
			int employee_number;
			cout << "Enter employee number";
			cin >> employee_number;
			double gross_pay; 
			double Total_gross_pay = 0.0;
			double state_tax;
			double Total_sate_tax = 0.0;
			double federal_tax;
			double Total_federal_tax = 0.0;
			double FICA_withholding;
			double  Total_FICA_withholding = 0.0;
			for (int i = 0; i < employee_number; i++) {
				cout << " Enter gross pay ";
				cin >> gross_pay;
				cout << "Enter the state tax ";
				cin >> state_tax;
				cout << "Enter the federal tax ";
				cin >> federal_tax;
				cout << "Enter the witholding FICA ";
				cin >> FICA_withholding;
				Total_federal_tax = Total_federal_tax + federal_tax;
				Total_gross_pay = Total_gross_pay + gross_pay;
				Total_FICA_withholding = Total_FICA_withholding + FICA_withholding;
				Total_sate_tax = Total_sate_tax + state_tax; 

			}
			int	Temp = Total_gross_pay - Total_FICA_withholding - Total_federal_tax - Total_sate_tax;
			cout << " Total federal is " << Total_federal_tax << endl << "Total FICA withholding is " << Total_FICA_withholding << endl;
			cout << "Total STATE pay is " << Total_sate_tax << endl << "Total gross pay is " << Total_gross_pay << endl << "Total temp is " << Temp << endl;

					return 0;
			}