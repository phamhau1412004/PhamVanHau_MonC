#include <iostream>
using namespace std;

int main()
{
    int game = 1, points, total = 0;

    cout << "Enter the number of points your team has earned\n";
    cout << "so far in the season, then enter -1 when finished.\n\n";
    cout << "Enter the points for game " << game << ": ";
    cin >> points;

    while (points != -1)
    {
        total += points;
        game++;
        cout << "Enter the points for game " << game << ": ";
        cin >> points;
    }

    cout << "\nThe total points are " << total << endl;
    return 0;
}
