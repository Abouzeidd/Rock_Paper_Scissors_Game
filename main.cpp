#include <bits/stdc++.h>
using namespace std;

string userChoice() {
    int choice;
    cout << "Choose (1: Rock, 2: Paper, 3: Scissors): ";
    cin >> choice;

    while (choice < 1 || choice > 3) {
        cout << "Invalid choice, Please choose again (1: Rock, 2: Paper, 3: Scissors): ";
        cin >> choice;
    }

    switch(choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
    }
    return "";
}

string computerChoice() {
    int choice = rand() % 3;  // 0, 1, 2
    switch(choice) {
        case 0: return "Rock";
        case 1: return "Paper";
        case 2: return "Scissors";
    }
    return "";
}

void Winner(const string &user, const string &computer) {
    cout << "Your choice: " << user << endl;
    cout << "Computer's choice: " << computer << endl;

    if (computer == user) {
        cout << "DRAW" << endl;
    }
    else if (
            user == "Rock" && computer == "Scissors" ||
            user == "Scissors" && computer == "Paper" ||
            user == "Paper" && computer == "Rock") {
        cout << "Winner!" << endl;
    }
    else {
        cout << "Lose!" << endl;
    }
}

int main() {
    system("color 1");
    cout <<"                                                         ==  Welcome to Rock Paper Scissors Game =="<<endl;
    cout <<"                                                                == Press Enter key to start ==" << endl;
    getchar();

    srand(static_cast<unsigned int>(time(nullptr)));
    char playAgain;
    do {
        string user = userChoice();
        string computer = computerChoice();

        Winner(user, computer);
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "THANK YOU :)";
    return 0;
}
