#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <process.h>

int main(){

//variables
    //character select
    // florence
int main_char;
int Florence;
int Isabella;

//instructions
std::cout << "\n\nWelcome to my text-adventure.\n" 
          << "--------------------------------\n"
          << "This game is played best using a keyboard with functional .\n" 
          << "number keys You select numbers progressively which will \n"
          << "ultimately effect your outcome during the mini-game.\n";



//select character 
std::cout << "\nSelect a character: \n";
std::cout << "1) Florence       " << "2) Isabella\n";
std::cout << "--------------------------------\n";
std::cout << "Select character with keys 1  or  2: ";
std::cin >> main_char;

    if (main_char == 1){
        std::cout << "\nYou've selected Florence! \n";
            Florence = true;
            Isabella = false;
    } else if (main_char == 2){
        std::cout << "\nYou've selected Isabella! \n";
            Isabella = true; 
            Florence = false;
    } else {
        std::cout << "Invalid Response. \n";
        std::cout << "Restart Application. \n";
        return 0;
    }


//story line

std::cout << "--------------------------------\n";
std::cout << "Once upon a time ";
// florence

if(Florence == true){
    std::cout << "Florence";
} 
// isabella
else if(Isabella == true){
    std::cout << "Isabella";
}

std::cout << " was strolling around Whispering Willows until ";

if (Florence == true){
    std::cout << "he ";
} else if (Isabella == true){
    std::cout << "she ";
}

//enemy encounter
std::cout << "encountered a bear!\n\n";



std::cout << "Let the battles begin! \n **FFVII 'Let the Battles Begin!'** starts playing... \n\n";
std::cout << "----------------------------------------------------------------\n";
std::cout << "You have 5 options you are able to use to fend off this beast...\n";
std::cout << "----------------------------------------------------------------\n";

srand (time(NULL));
int choice; 
int bearHealth = 30;
int bearAttack = rand() % 8 + 1; 

int isabellaHealth = 23;
int isabellaAttack = rand() % 3 + 2;

int florenceHealth = 17;
int florenceAttack = rand() % 7;

// for loop until bear or player health drops to 0 or less.
while (bearHealth >= 0){


    srand (time(NULL));


    if (Florence == true){
        while (florenceHealth != 0){
            if(Florence == true){
                    std::cout << "Health: " << florenceHealth << "    DMG: 1-7\n\n";
                    std::cout << " 1) Attack \n";
                    std::cout << " 2) Defend \n";
                    std::cout << " 3) Adrenaline \n";
                    std::cout << " 4) Items \n";
                    std::cout << " 5) Flee \n";
                    std::cout << "Select choice here: ";
                    std::cin >> choice;

                if(choice == 1){
                    std::cout << "\nYou chose Attack!\n";
                    bearHealth = bearHealth - florenceAttack;
                    std::cout << "You did " << florenceAttack << " damage to the enemy!\n\n";
                    std::cout << bearHealth << "\n";
                } 
            } 
        }
    } else if (Isabella == true){
    while (isabellaHealth != 0){
        if (Isabella == true){
                std::cout << "Health: " << isabellaHealth << "     DMG : 2-3\n\n";
                std::cout << " 1) Attack \n";
                std::cout << " 2) Defend \n";
                std::cout << " 3) Infatuate \n";
                std::cout << " 4) Items \n";
                std::cout << " 5) Flee \n";
                std::cout << "Select choice here: ";
                std::cin >> choice;
            }
        }
    }
//attack 
    if (choice == 1 && Isabella == true) {
        std::cout << "\nYou did " << isabellaAttack << "to the enemy!\n";
    }













}






system("pause");
return 0;
}


