#include <iostream>
using namespace std;
int main() {
	int Max_Value, Min_Value;
	Max_Value = Min_Value = 0;
	int Numbers;
	for (; ; ) {
		cout << "Enter the numbers ";
		cin >> Numbers;
		if (Numbers == -99) {
			break;
		}
			if (Numbers > Max_Value || Max_Value == 0) {
				Max_Value = Numbers;
			}
				if (Numbers < Min_Value || Min_Value == 0) {
					Min_Value = Numbers;
				}
			}
			if (Max_Value != 0 && Min_Value != 0 ) {
				cout << Max_Value << endl;
				cout << Min_Value << endl;
			}
			else {
				cout << "Erorr";
			}
	return 0;
}

	  