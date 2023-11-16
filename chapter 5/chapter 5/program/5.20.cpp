#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream inFile;
	int value1, value2, value3, sum;
	//Open the the file 
	inFile.open("NumbericData.txt");
	// Read the number form the file
	inFile >> value1;
	inFile >> value2;
	inFile >> value3;

	//Close the file.
	inFile.close();
	//Calculate the number from the file.
	sum = value1 + value2 + value3;
	// Display the three numbers
	cout << "Here are the number:  \n"
	<< value1 << value2 << value3;



	//Display the sum of three numbers.
	cout << "Their sum is: " << sum << endl;




	return 0;
}