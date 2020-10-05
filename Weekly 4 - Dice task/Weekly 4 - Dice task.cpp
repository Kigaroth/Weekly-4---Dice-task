// Weekly 4 - Dice task.cpp//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <conio.h>
#include <vector>


int dice1 = 0;
int dice2 = 0;
int dice3 = 0;
int dice4 = 0;
int dice5 = 0;

bool hold_dice1 = false;
bool hold_dice2 = false;
bool hold_dice3 = false;
bool hold_dice4 = false;
bool hold_dice5 = false;
bool stop_game = false;

void dicegamesplash() {
    std::cout << "\t" << R"(
______ _____ _____  _____   _____   ___  ___  ___ _____              
|  _  \_   _/  __ \|  ___| |  __ \ / _ \ |  \/  ||  ___|            
| | | | | | | /  \/| |__   | |  \// /_\ \| .  . || |__               
| | | | | | | |    |  __|  | | __ |  _  || |\/| ||  __|                    
| |/ / _| |_| \__/\| |___  | |_\ \| | | || |  | || |___              
|___/  \___/ \____/\____/   \____/\_| |_/\_|  |_/\____/              
                                                        
                                                   
)" << "\t" << R"(
                            ______
                .-------.  /\     \
               /   o   /| /o \  o  \
              /_______/o|/   o\_____\
              | o     | |\o   /o    /
              |   o   |o/ \ o/  o  /
              |     o |/   \/____o/
              '-------'
)" << "\n";
    system("pause");
}

void dicegameheader() {
    std::cout << "\t" << R"(
                                                                          ______
______ _____ _____  _____   _____   ___  ___  ___ _____       .-------.  /\     \
|  _  \_   _/  __ \|  ___| |  __ \ / _ \ |  \/  ||  ___|     /   o   /| /o \  o  \
| | | | | | | /  \/| |__   | |  \// /_\ \| .  . || |__      /_______/o|/   o\_____\        
| | | | | | | |    |  __|  | | __ |  _  || |\/| ||  __|     | o     | |\o   /o    /
| |/ / _| |_| \__/\| |___  | |_\ \| | | || |  | || |___     |   o   |o/ \ o/  o  /
|___/  \___/ \____/\____/   \____/\_| |_/\_|  |_/\____/     |     o |/   \/____o/         
                                                            '-------'                                      
)" << "\n";
}

void dicegamerules() {
    
    system("CLS");
    dicegameheader();

    std::cout << "\n\t" << R"(
                           
                          RULES
____________________________________________________________
|                                                          |
| - The player gets 5 dice.                                |
| - The dice are thrown and gives you a random result.     |
| - The player can chose to hold the result one of dice    |
|   each throw by selecting a die (1-5).                   |
| - You can reroll all dice you haven't                    |
|   previously chose to hold by pressing 'R'.              |
| - Game ends automatically when all dice are held.        |
| - You can stop the game after each roll by pressing 'H'. |
| - When the game is over, the game will calculate how     |
|   many 6s and how many pairs of dice the player has.     |
|__________________________________________________________|

)";

    system("pause");

}

void diceroll() {

    bool stop_roll1 = false;
    bool stop_roll2 = false;
    bool stop_roll3 = false;
    bool stop_roll4 = false;
    bool stop_roll5 = false;
    bool stop_rolls = false;

    std::cout << "\n Your dice roll is: \n";

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

        if (hold_dice1 == true && hold_dice2 == true && hold_dice3 == true && hold_dice4 == true && hold_dice5 == true) {
            stop_game = true;
        }
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
    if (dice2 == 6) {
        count6 += 1;
    }
    if (dice3 == 6) {
        count6 += 1;
    }
    if (dice4 == 6) {
        count6 += 1;
    }
    if (dice5 == 6) {
        count6 += 1;
    }

    if (count6 == 1 || count6 == 0) {
        std::cout << "\n\n You have " << count6 << " die with the facevalue of 6.";
    }
    else {
        std::cout << "\n\n You have " << count6 << " dice with the facevalue of 6.";
    }

}


void calculate_pairs() {

    std::vector <int> dice = { 1,2,3,4,5 };
    dice[0] = dice1;
    dice[1] = dice2;
    dice[2] = dice3;
    dice[3] = dice4;
    dice[4] = dice5;

    int countpair = 0;

    for (int ix = 0; ix < 5; ix++) {
        for (int iy = ix + 1; iy < 5; iy++) {
            if (dice[ix] == dice[iy]) {
                countpair++;
                dice[ix] = -1 * ix;
                dice[iy] = -1 * iy;
                break;
            }
        }
    }

    std::cout << "\n\n You have " << countpair << " pairs of dice.\n\n";

}


int main()
{
    
    bool retry = false;
    int retry_choice = 0;
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    do {
        system("CLS");
        dicegamesplash();
        dicegamerules();

        do {
            system("CLS");
            dicegameheader();
            diceroll();

            std::cout << std::endl;

            if (stop_game == false) {
                hold_dice_choice();
            }

            std::cout << std::endl;

        } while (stop_game == false);
        calculate_6s();
        calculate_pairs();

        system("pause");


        do {
            std::cout << "\n\n Do you want to restart the game? \n 1. Yes \ 2. No \n Select your option (1 or 2) here: ";
            std::cin >> retry_choice;

            if (retry_choice == 1) {
                retry = true;
            }
            else if (retry_choice == 0 || retry_choice > 2) {
                std::cout << "\n Invalid input. Please input a valid option!";
            }
            else {
                retry = false;
            }
        } while (retry_choice == 0 || retry_choice > 2);


    } while (retry == true);

    system("CLS");
    std::cout << R"(
 _____ _   _   ___   _   _  _   __ _____    ______ ___________    ______ _       _____   _______ _   _ _____   _ 
|_   _| | | | / _ \ | \ | || | / //  ___|   |  ___|  _  | ___ \   | ___ \ |     / _ \ \ / /_   _| \ | |  __ \ | |
  | | | |_| |/ /_\ \|  \| || |/ / \ `--.    | |_  | | | | |_/ /   | |_/ / |    / /_\ \ V /  | | |  \| | |  \/ | |
  | | |  _  ||  _  || . ` ||    \  `--. \   |  _| | | | |    /    |  __/| |    |  _  |\ /   | | | . ` | | __  | |
  | | | | | || | | || |\  || |\  \/\__/ /   | |   \ \_/ / |\ \    | |   | |____| | | || |  _| |_| |\  | |_\ \ |_|
  \_/ \_| |_/\_| |_/\_| \_/\_| \_/\____/    \_|    \___/\_| \_|   \_|   \_____/\_| |_/\_/  \___/\_| \_/\____/ (_)
)" << "\n\n";

    system("pause");

}
