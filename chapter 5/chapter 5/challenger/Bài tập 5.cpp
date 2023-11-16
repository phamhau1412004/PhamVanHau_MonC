#include <iostream>
using namespace std;
int main() {
	double Currently_charges = 2500;
	double membership_fee = 0.04;
	float Total = 0;
	for (int year = 1; year <= 6; year++) {
		Currently_charges = Currently_charges * ( year + membership_fee);
		Total = Total + Currently_charges;
		cout << " Nam " << year << Currently_charges << endl;
	}
	cout << "Total is" << Total << endl;
	return 0;
}