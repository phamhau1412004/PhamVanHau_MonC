#include <iostream>
using namespace std;
int main() {
	int years;
	double Rain_fall = 0;
	double Total_Rain_Fall = 0;
	int months = 0;
	cout << "Enter amount of years " << endl;
	cin >> years;
	if (years < 1) {
		cout << "Enter again ";
		return 1;
	 } 
	for (int i = 1; i <= years; i++) {
		for (int j = 1; j <= 12; j++) {
			cout << "Enter the inches of rainfall ";
			cin >> Rain_fall;
			Total_Rain_Fall = Total_Rain_Fall + Rain_fall;
			months++;
		}
	}
	cout << "Total rain fall for " << months << " is " << Total_Rain_Fall << " inchs" << endl;
	cout << "Total months is " << months << endl;
	cout << "Average of rain fall is " << Total_Rain_Fall / months << " inchs ";
	return 0;
}


