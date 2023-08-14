#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(nullptr));

    cout << "Let's play Rock, Paper, Scissors!" << endl;
    cout << "1. Rock\n2. Paper\n3. Scissors\n 4. Spock \n 5. Lizard\n";
    cout << "If you want to keep playing please press 'y', else click any other button: ";
    
    int userChoice, computerChoice;
    char option;
    cin >> option;  // Read the option from the user

    while (option == 'y' || option == 'Y') {

        cout << "Enter your choice (1-5): ";
        cin >> userChoice;

        if (userChoice < 1 || userChoice > 5) {
            cout << "Invalid choice. Please select a number between 1 and 5." << endl;
            return 1;
        }

        computerChoice = rand() % 5 + 1;

        cout << "Computer chose: " << computerChoice << endl;

        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2) ||
                   (userChoice == 4 && computerChoice == 3) ||  
                   (userChoice == 4 && computerChoice == 1) ||
                   (userChoice == 5 && computerChoice == 4) ||
                   (userChoice == 5 && computerChoice == 2)) {
            cout << "Congratulations! You win!" << endl;
        } else {
            cout << "Sorry, you lose." << endl;
        }

        cout << "If you want to keep playing please press 'y', else click any other button: ";
        cin >> option;  // Read the option from the user for the next iteration
    }

    return 0;
}
