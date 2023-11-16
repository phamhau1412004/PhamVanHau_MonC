#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ofstream outputFile;
	int number1, number2, number3;

	//Open an output file.
	outputFile.open("Number.txt");

	//Get three numbers from the user.
	cout << "Enter the nubmer 1:";
	cin >> number1;
	cout << "Enter the nubmer 2:";
	cin >> number2;
	cout << "Enter the nubmer 3:";
	cin >> number3;


	//Write the nubmers to the file.
	outputFile << number1 << endl;
	outputFile << number2 << endl;
	outputFile << number3 << endl;
	cout << "The number were saved to a file. \n";

	//Close the file
	outputFile.close();
	cout << "Done" << endl;
	return 0;
}