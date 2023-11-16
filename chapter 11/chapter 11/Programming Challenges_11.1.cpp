#include <iostream>
#include <string>
using namespace std;

// Structure to store movie information
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime; // in minutes
};

// Function to display movie information
void displayMovieInfo(const MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << "------------------------" << endl;
}

int main() {
    // Create two MovieData variables and store values in their members
    MovieData movie1;
    movie1.title = "The Shawshank Redemption";
    movie1.director = "Frank Darabont";
    movie1.yearReleased = 1994;
    movie1.runningTime = 142;

    MovieData movie2;
    movie2.title = "The Godfather";
    movie2.director = "Francis Ford Coppola";
    movie2.yearReleased = 1972;
    movie2.runningTime = 175;

    // Display information for each movie
    cout << "Movie Information:" << endl;
    cout << "------------------------" << endl;
    displayMovieInfo(movie1);
    displayMovieInfo(movie2);

    return 0;
}
