#include <iostream>
#include <random>
using namespace std;
int main() {
	random_device rd;
	mt19937 generator(rd());
	int random;
	cout << "Enter the number ";
	cin >> random;
	int min = 1;
	int max = 5;
	int temp = 0;
	uniform_int_distribution<int> distribution(min, max);
	int random_number = distribution(generator);

	while (random != random_number) {
		if (random > random_number) {
			cout << "Higher" << endl;
		}
		else if (random < random_number) {
			cout << "Low" << endl;
			
		}
		cout << "Nhap lai ";
		cin >> random_number;
		temp++;

		}
	cout << "Ban da nhap dung sau " << temp << "lan";
		 
	 
	return 0;
}