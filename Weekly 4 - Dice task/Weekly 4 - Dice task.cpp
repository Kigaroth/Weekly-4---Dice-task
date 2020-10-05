// Weekly 4 - Dice task.cpp//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <conio.h>


int dice1 = 0;
int dice2 = 0;
int dice3 = 0;
int dice4 = 0;
int dice5 = 0;
int count_pairs = 0;

bool hold_dice1 = false;
bool hold_dice2 = false;
bool hold_dice3 = false;
bool hold_dice4 = false;
bool hold_dice5 = false;
bool stop_game = false;


void diceroll() {

    bool stop_roll1 = false;
    bool stop_roll2 = false;
    bool stop_roll3 = false;
    bool stop_roll4 = false;
    bool stop_roll5 = false;
    bool stop_rolls = false;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    do {
        //Roll dice 1
        do {
            int diceroll1 = std::rand() % 6 + 1;
            if (hold_dice1 == false) {
                dice1 = diceroll1;
                std::cout << "\n Dice 1 is: " << dice1;
                stop_roll1 = true;
            }
            else {
                std::cout << "\n Dice 1 is: " << dice1 << " [HELD]";
                stop_roll1 = true;
            }
        } while (stop_roll1 == false);

        //Roll dice 2
        do {
            int diceroll2 = std::rand() % 6 + 1;
            if (hold_dice2 == false) {
                dice2 = diceroll2;
                std::cout << "\n Dice 2 is: " << dice2;
                stop_roll2 = true;
            }
            else {
                std::cout << "\n Dice 2 is: " << dice2 << " [HELD]";
                stop_roll2 = true;
            }
        } while (stop_roll2 == false);

        //Roll dice 3
        do {
            int diceroll3 = std::rand() % 6 + 1;
            if (hold_dice3 == false) {
                dice3 = diceroll3;
                std::cout << "\n Dice 3 is: " << dice3;
                stop_roll3 = true;
            }
            else {
                std::cout << "\n Dice 3 is: " << dice3 << " [HELD]";
                stop_roll3 = true;
            }
        } while (stop_roll3 == false);
        
        //Roll dice 4
        do {
            int diceroll4 = std::rand() % 6 + 1;
            if (hold_dice4 == false) {
                dice4 = diceroll4;
                std::cout << "\n Dice 4 is: " << dice4;
                stop_roll4 = true;
            }
            else {
                std::cout << "\n Dice 4 is: " << dice4 << " [HELD]";
                stop_roll4 = true;
            }
        } while (stop_roll4 == false);
        
        //Roll dice 5
        do {
            int diceroll5 = std::rand() % 6 + 1;
            if (hold_dice5 == false) {
                dice5 = diceroll5;
                std::cout << "\n Dice 5 is: " << dice5;
                stop_roll5 = true;
            }
            else {
                std::cout << "\n Dice 5 is: " << dice5 << " [HELD]";
                stop_roll5 = true; 
            }
        } while (stop_roll5 == false);

        stop_rolls = true;

    } while (stop_rolls == false);
}

void hold_dice_choice(){
    
    std::cout << "\n Would you like to hold a dice?\n - Enter the number of the dice (1-5) you wish to hold\n - Press 'R' to reroll all dice not held\n - Press 'H' to stop rolling \n Input choice here:  ";
    char player_input = _getch();

    switch (player_input) {

        case '1':
            std::cout << player_input;
            hold_dice1 = true;
            break;

        case '2':
            std::cout << player_input;
            hold_dice2 = true;
            break;

        case '3':
            std::cout << player_input;
            hold_dice3 = true;
            break;

        case '4':
            std::cout << player_input;
            hold_dice4 = true;
            break;
        
        case '5':
            std::cout << player_input;
            hold_dice5 = true;
            break;
        case 'R':
        case 'r':
            std::cout << player_input;
            break;
        case 'H':
        case 'h':
            std::cout << player_input;
            stop_game = true;
            break;
    }

}

void calculate_6s() {
    
    int count6 = 0;

    if (dice1 == 6) {
        count6 += 1;
    }
    else if (dice2 == 6) {
        count6 += 1;
    }
    else if (dice3 == 6) {
        count6 += 1;
    }
    else if (dice4 == 6) {
        count6 += 1;
    }
    else if (dice5 == 6) {
        count6 += 1;
    }

    std::cout << "\n\n You have " << count6 << " dice with the facevalue of 6."; 

}

void calculate_pairs() {

    int countpair = 0;

    if (dice1 == dice2 || dice1 == dice3 || dice1 == dice4 || dice1 == dice5) {
        countpair += 1;
    }
    else if (dice2 == dice3 || dice2 == dice4 || dice2 == dice5) {
        countpair += 1;
    }
    else if (dice3 == dice4 || dice3 == dice5) {
        countpair += 1;
    }
    else if (dice4 == dice5) {
        countpair += 1;
    }

    std::cout << "\n\n You have " << countpair << " pairs of dice.";

}

int main()
{
    do {
        system("CLS");
        diceroll();
        std::cout << std::endl;
        hold_dice_choice();
        std::cout << std::endl;
    } while (stop_game == false);
    calculate_6s();
    calculate_pairs();

    system("pause");
}

//void diceroll() {
//
//    std::srand(static_cast<unsigned int>(std::time(nullptr)));
//    do {
//        //Roll dice 1
//        do {
//            int diceroll1 = std::rand() % 6 + 1;
//            if (hold_dice1 == false) {
//                dice1 = diceroll1;
//                std::cout << "\n Dice 1 is: " << dice1;
//                stop_roll1 = true;
//            }
//            else {
//                std::cout << "\n Dice 1 is: " << dice1 << " [HELD]";
//                stop_roll1 = true;
//            }
//        } while (stop_roll1 == false);
//
//        //Roll dice 2
//        do {
//            int diceroll2 = std::rand() % 6 + 1;
//            if (hold_dice2 == false) {
//                dice2 = diceroll2;
//                std::cout << "\n Dice 2 is: " << dice2;
//                stop_roll2 = true;
//            }
//            else {
//                std::cout << "\n Dice 2 is: " << dice2 << " [HELD]";
//                stop_roll2 = true;
//            }
//        } while (stop_roll2 == false);
//
//        //Roll dice 3
//        do {
//            int diceroll3 = std::rand() % 6 + 1;
//            if (hold_dice3 == false) {
//                dice3 = diceroll3;
//                std::cout << "\n Dice 3 is: " << dice3;
//                stop_roll3 = true;
//            }
//            else {
//                std::cout << "\n Dice 3 is: " << dice3 << " [HELD]";
//                stop_roll3 = true;
//            }
//        } while (stop_roll3 == false);
//
//        //Roll dice 4
//        do {
//            int diceroll4 = std::rand() % 6 + 1;
//            if (hold_dice4 == false) {
//                dice4 = diceroll4;
//                std::cout << "\n Dice 4 is: " << dice4;
//                stop_roll4 = true;
//            }
//            else {
//                std::cout << "\n Dice 4 is: " << dice4 << " [HELD]";
//                stop_roll4 = true;
//            }
//        } while (stop_roll4 == false);
//
//        //Roll dice 5
//        do {
//            int diceroll5 = std::rand() % 6 + 1;
//            if (hold_dice5 == false) {
//                dice5 = diceroll5;
//                std::cout << "\n Dice 5 is: " << dice5;
//                stop_roll5 = true;
//            }
//            else {
//                std::cout << "\n Dice 5 is: " << dice5 << " [HELD]";
//                stop_roll5 = true;
//            }
//        } while (stop_roll5 == false);
//
//    } while (stop_game == false);
//}
