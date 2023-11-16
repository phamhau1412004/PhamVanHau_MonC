#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream outputFile;
	string name1, name2, name3;

	//Open an out put file.
	outputFile.open("Friends.txt");
	// Get the names of three friends.
	cout << "Enter the name of three friend" << endl;
	cout << "Friend #1 : ";
	cin >> name1;
	cout << "Friend #2 : ";
	cin >> name2;
	cout << "Friend #3 : ";
	cin >> name3;

	//Write the name to the file.
	outputFile << name1 << endl;
	outputFile << name2 << endl;
	outputFile << name3 << endl;
	cout << "THe name were saved the file" << endl;


	//Close the file
	outputFile.close();
	return 0;
}