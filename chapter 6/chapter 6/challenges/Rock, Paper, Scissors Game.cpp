#include <iostream>
#include <cstdlib>
#include <ctime>

// Hàm để máy tính chọn một lựa chọn ngẫu nhiên
int computerChoice() {
    return (rand() % 3) + 1;
}

// Hàm để hiển thị lựa chọn của máy tính
void displayComputerChoice(int choice) {
    std::cout << "Lựa chọn của máy tính: ";
    if (choice == 1) {
        std::cout << "Rock";
    } else if (choice == 2) {
        std::cout << "Paper";
    } else {
        std::cout << "Scissors";
    }
    std::cout << std::endl;
}

// Hàm để kiểm tra và hiển thị kết quả
void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        std::cout << "Hòa! Hãy chơi lại." << std::endl;
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        std::cout << "Bạn thắng! Chúc mừng!" << std::endl;
    } else {
        std::cout << "Máy tính thắng. Hãy thử lại." << std::endl;
    }
}

int main() {
    // Thiết lập bộ số ngẫu nhiên dựa trên thời gian
    srand(static_cast<unsigned int>(time(0)));

    int userChoice;

    std::cout << "Chọn lựa của bạn (1 - Rock, 2 - Paper, 3 - Scissors): ";
    std::cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        std::cout << "Lựa chọn không hợp lệ. Hãy chọn từ 1 đến 3." << std::endl;
        return 1;
    }

    int computer = computerChoice();

    displayComputerChoice(computer);

    determineWinner(userChoice, computer);

    return 0;
}
