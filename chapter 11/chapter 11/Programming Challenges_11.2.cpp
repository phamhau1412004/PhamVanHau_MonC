#include <iostream>
#include <string>
using namespace std;

// Structure to store movie information
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime; // in minutes
    double productionCosts; // in dollars
    double firstYearRevenues; // in dollars
};

// Function to display movie information, including profit or loss
void displayMovieInfo(const MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << "Production Costs: $" << movie.productionCosts << endl;
    cout << "First Year Revenues: $" << movie.firstYearRevenues << endl;
    
    // Calculate and display the first year profit or loss
    double profitLoss = movie.firstYearRevenues - movie.productionCosts;
    cout << "First Year Profit/Loss: $" << profitLoss << endl;
    cout << "------------------------" << endl;
}

int main() {
    // Create two MovieData variables and store values in their members
    MovieData movie1;
    movie1.title = "The Shawshank Redemption";
    movie1.director = "Frank Darabont";
    movie1.yearReleased = 1994;
    movie1.runningTime = 142;
    movie1.productionCosts = 25000000.0;
    movie1.firstYearRevenues = 28341469.0;

    MovieData movie2;
    movie2.title = "The Godfather";
    movie2.director = "Francis Ford Coppola";
    movie2.yearReleased = 1972;
    movie2.runningTime = 175;
    movie2.productionCosts = 6000000.0;
    movie2.firstYearRevenues = 245066411.0;

    // Display information for each movie, including profit or loss
    cout << "Movie Information:" << endl;
    cout << "------------------------" << endl;
    displayMovieInfo(movie1);
    displayMovieInfo(movie2);

    return 0;
}
