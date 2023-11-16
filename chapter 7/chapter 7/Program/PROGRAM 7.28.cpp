#include <iostream>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int> vect);

int main()
{
    vector<int> values;

    for (int count = 0; count < 7; count++)
        values.push_back(count * 2);

    showValues(values);
    return 0;
}

void showValues(vector<int> vect)
{
    for (int count = 0; count < vect.size(); count++)
        cout << vect[count] << endl;
}
