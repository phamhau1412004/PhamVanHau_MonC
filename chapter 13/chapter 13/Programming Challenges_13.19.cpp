#include <iostream>
#include <string>
using namespace std;

class Question {
private:
    string question;
    string answers[4];
    int correctAnswer;

public:
    Question(string q, string a1, string a2, string a3, string a4, int correct) {
        question = q;
        answers[0] = a1;
        answers[1] = a2;
        answers[2] = a3;
        answers[3] = a4;
        correctAnswer = correct;
    }

    string getQuestion() const {
        return question;
    }

    string getAnswer(int choice) const {
        return answers[choice - 1];
    }

    int getCorrectAnswer() const {
        return correctAnswer;
    }
};

int main() {
    Question questions[10] = {
        Question("What is the capital of France?", "Paris", "London", "Berlin", "Madrid", 1),
        Question("Which planet is known as the Red Planet?", "Venus", "Mars", "Jupiter", "Neptune", 2),
        Question("What is the largest mammal in the world?", "Elephant", "Giraffe", "Blue Whale", "Lion", 3),
        Question("What is the largest organ of the human body?", "Brain", "Skin", "Heart", "Liver", 2),
        Question("Who wrote 'Romeo and Juliet'?", "Charles Dickens", "William Shakespeare", "Jane Austen", "Mark Twain", 2),
        Question("What is the chemical symbol for gold?", "Fe", "Au", "Ag", "Hg", 2),
        Question("Which gas do plants absorb from the atmosphere?", "Oxygen", "Nitrogen", "Carbon Dioxide", "Hydrogen", 3),
        Question("What is the largest ocean in the world?", "Atlantic Ocean", "Indian Ocean", "Arctic Ocean", "Pacific Ocean", 4),
        Question("Which gas is the most abundant in Earth's atmosphere?", "Oxygen", "Carbon Dioxide", "Nitrogen", "Argon", 3),
        Question("How many continents are there on Earth?", "4", "6", "7", "5", 4)
    };

    int player1Score = 0;
    int player2Score = 0;
    
    for (int i = 0; i < 10; i++) {
        cout << "Question " << i + 1 << ": " << questions[i].getQuestion() << endl;
        cout << "1. " << questions[i].getAnswer(1) << endl;
        cout << "2. " << questions[i].getAnswer(2) << endl;
        cout << "3. " << questions[i].getAnswer(3) << endl;
        cout << "4. " << questions[i].getAnswer(4) << endl;

        int player1Choice, player2Choice;
        cout << "Player 1, choose your answer (1-4): ";
        cin >> player1Choice;
        if (player1Choice == questions[i].getCorrectAnswer()) {
            cout << "Player 1 is correct!" << endl;
            player1Score++;
        } else {
            cout << "Player 1 is incorrect. The correct answer is: " << questions[i].getCorrectAnswer() << endl;
        }

        cout << "Player 2, choose your answer (1-4): ";
        cin >> player2Choice;
        if (player2Choice == questions[i].getCorrectAnswer()) {
            cout << "Player 2 is correct!" << endl;
            player2Score++;
        } else {
            cout << "Player 2 is incorrect. The correct answer is: " << questions[i].getCorrectAnswer() << endl;
        }
    }

    cout << "Game Over!" << endl;
    cout << "Player 1 Score: " << player1Score << endl;
    cout << "Player 2 Score: " << player2Score << endl;

    if (player1Score > player2Score) {
        cout << "Player 1 is the winner!" << endl;
    } else if (player2Score > player1Score) {
        cout << "Player 2 is the winner!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
