#include <iostream>
using namespace std;
int main() {
	int amount_of_animal;
	cout << "Enter the amount of amnial " << endl;
	cin >> amount_of_animal;
	double population_increase;
	cout << "Enter the population increase " << endl;
	cin >> population_increase;
	int day;
	cout << "Enter day ";
	cin >> day;
	if (amount_of_animal < 2 || population_increase < 0 || day < 1) {
		cout << "Enter the information again ";
		return 1;
	}
	for (int i = 1 ; i <= day; i++) {
		amount_of_animal = amount_of_animal + amount_of_animal * ( population_increase / 100 );
		cout << " the size of the population for each day is " << amount_of_animal << " in day " << i << endl;
	
	}


	return 0;
}