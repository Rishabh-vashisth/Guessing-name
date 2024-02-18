#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

string playerName;
string EnterValue;
string EnterValue2;
string check;

void firstLevel();
void firstLevel2();
void aboutgame();
void secondLevel();
void function1();

string collection1[10] = {
    "The ___ sat on the mat.",
    "The ___ went for a jog.",
    "Turn on the ___ for some light.",
    "The ___ jumped over the log.",
    "Let's bake a ___ for Jake.",
    "Look up high, see the shining ___.",
    "With courage and ___ness, we'll unfold.",
    "Birds in the trees joyfully ___.",
    "Be cautious when you encounter a ___.",
    "In the forest, I felt so ___."
};

string collection2[10] = {
    "cat",
    "dog",
    "lamp",
    "frog",
    "cake",
    "star",
    "bold",
    "sing",
    "bear",
    "lost"
};

string collection4[10] = {
    "Meow",
    "Bark",
    "Light",
    "Ribbit",
    "Dessert",
    "Celestial",
    "Courageous",
    "Melody",
    "Wildlife",
    "Confusion"
};

string collection3[10] = {
    "Bat",
    "Dot",
    "Limp",
    "From",
    "Bake",
    "Stay",
    "Cold",
    "Sung",
    "Dear",
    "Last"
};

void function1() {
    int option;

    cout << "Please enter your name: ";
    cin >> playerName;

    cout << "Press 1 to play, Press 2 to know about the game: ";
    cin >> option;

    if (option == 1) {
        firstLevel();
    }
    else if (option == 2) {
        aboutgame();
    }
    else {
        cout << "Invalid option. Exiting...";
    }
}

void firstLevel() {
    char hint;

    srand(time(NULL));
    int randMax = rand() % 10;
    check = collection1[randMax];

    cout << check << endl;
    cout << "Press 'h' to see hint: ";
    cin >> hint;

    if (hint == 'h') {
        cout << "Hint: " << collection4[randMax] << endl;
    }

    cout << "Enter your guess: ";
    cin >> EnterValue;

    if (EnterValue == collection2[randMax]) {
        cout << "Congrats " << playerName << ", you won the first round!" << endl;
        secondLevel();
    }
    else {
        cout << "Oops! You Lost" << endl;
    }
}

void secondLevel() {
    char playAgain;
    cout << "You have entered " << EnterValue << ". Just replace any one of the letters from the word and make a new word from it. Start with capital letter.\n Please type your answer: ";
    cin >> EnterValue2;

    for (int i = 0; i < 10; ++i) {
        if (EnterValue2 == collection3[i]) {
            cout << "Congratulations, you won!" << endl;
            return;
        }
    }
    cout << "Sorry, you didn't win this time." << endl;
    
}

void aboutgame() {
    int val;
    cout << "GUESS THE WORD \nIn the first level, a rhyme will be displayed on your screen with one blank space. You have to fill that blank with the appropriate word. \nIn the second level, you have to change one letter from the word that you have chosen in the first level. \nYou only have 5 lives. \nPress 1 to play the game: ";

    cin >> val;

    if (val == 1) {
        firstLevel();
    }
    else {
        cout << "Invalid input. Exiting...";
    }
}

int main() {
    function1();
    return 0;
}
