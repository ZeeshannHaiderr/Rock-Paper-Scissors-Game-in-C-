#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(NULL));
    
    string name , humanChoice ;
    cout<< "Enter your name: " ;
    cin >> name ;
    
    int roundNumber = 0;
    cout<<" Enter number of rounds: " ;
    cin >> roundNumber ;
    for(int i=1 ; i<=roundNumber ; i++){
    cout << "Please enter your choice (rock, paper, scissors): ";
    cin >> humanChoice ;
    cout << "You chose " << humanChoice << endl;

    // Array of possible choices
    string choices[3] = {"rock", "paper", "scissors"};

    // Get the computer's choice
    string computerChoice = choices[rand() % 3];
    cout << "Computer chose " << computerChoice << endl;

    if (humanChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((humanChoice == "rock" && computerChoice == "scissors") || 
               (humanChoice == "paper" && computerChoice == "rock") || 
               (humanChoice == "scissors" && computerChoice == "paper")) {
        cout << name << " You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
  }
    return 0;
}