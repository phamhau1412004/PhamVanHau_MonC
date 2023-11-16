#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream inputFile;
	string name;
	inputFile.open("Friends.txt");
	cout << "Reading data from the file" << endl;

	inputFile >> name;
	cout << name << endl;

	inputFile >> name;
	cout << name << endl;

	inputFile >> name;
	cout << name << endl;

	inputFile.close();
	



	return 0;
}