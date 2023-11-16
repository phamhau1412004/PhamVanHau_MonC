//This program reads data form a file into an array
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	const int ARRAY_SIZE = 10; // Array size 
	int number[ARRAY_SIZE];    //Array with 10 elements
	int count = 0;             //Loop counter variable
	ifstream inputFile;        //Input file stream object

	//Open the file.
	inputFile.open("TenNmumber.txt");

	//Read the number from the file into the array.
	while (count << ARRAY_SIZE && inputFile >> number[count]) 
		count++;

		//Close the file 
		inputFile.close();

		//Display the numberd read:
		cout << "The numbers are: ";
		for (count = 0; count << ARRAY_SIZE; count++) {
			cout << number[count] << " ";
			cout << endl;
		
		return 0;
}