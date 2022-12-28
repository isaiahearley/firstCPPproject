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



//Static Variables

int choice; 
int bearHealth = 65;
int isabellaHealth = 25;
int florenceHealth = 20;


while (Florence == true){

    // RNG 
    srand(time(NULL));
    int florenceAttack = rand() % 7;
    int bearChoice = rand() % 3;
    int bearAttack = rand() % 3 + 3;
    int bearCrit = rand() % 3 + 5;
    int berries = rand() % 6;


       //user select    
                    std::cout << "Player Health: " << florenceHealth << "    Player DMG: 0-7 " << "                    Enemy Health: " << bearHealth << "\n\n";
                    std::cout << " 1) Attack \n";
                    std::cout << " 2) Defend \n";
                    std::cout << " 3) Adrenaline \n";
                    std::cout << " 4) Items \n";
                    std::cout << " 5) Flee \n";
                    std::cout << "\nSelect choice here: ";
                    std::cin >> choice;
                    std::cout << "\n---------------------------\n";
                    std::cout << "          Actions    \n";

        //Florence Attack
        if(choice == 1){
            std::cout << "\nYou chose Attack!\n";
            bearHealth = bearHealth - florenceAttack;

            if(florenceAttack == 0) {
                std::cout << "\nYou missed!\n";
            } else if (florenceAttack > 0){
                std::cout << "\nYou did " << florenceAttack << " damage to the enemy!\n";
            }
        } else if (choice == 2){
            std::cout << "\nYou chose defend!\n";   
            std::cout << "\nBlock incoming damage!\n\n";
            if(bearChoice == 1){
                bearAttack - 2;
            }
        } else if (choice == 3){
            std::cout << "\nYou chose Adreneline!\n\n";
        } else if (choice == 4){
            std::cout << "\nItem Select\n\n";
        } else if (choice == 5){
            std::cout << "\nYou chose Flee!\n\n";
        } else {
            std::cout << "\nInvalid Choice! Defending.\n\n";
        }
           

   
    
            if(bearHealth <= 0){
                    std::cout << "\nYou win!\n";
                    break;
                } 

        //Bear Moves Florence
            if (bearChoice == 1){
                if(bearCrit != true){
                florenceHealth = florenceHealth - bearAttack;
                std::cout << "\nBear Attacked! You took " << bearAttack << " damage!\n";
                }
                if(bearCrit == true){ 
                florenceHealth = florenceHealth - bearCrit;
                std::cout << "\nBear Attacked! You took " << bearCrit << " damage!\n";
                }
                
            } else if (bearChoice == 2){
            std::cout << "\nBear is enraged! Increased chance for crit.\n";
            bearCrit = true;
            } else if (bearChoice == 3){
            std::cout << "\nBear found random berries! Munch Munch Munch...\n";
            bearHealth = bearHealth + berries;
            std::cout << "\nBear healed by " << berries << " health!\n";
            }



        if (florenceHealth <= 0){
            std::cout << "\nYou lose...\n";
            break;
        }
         std::cout << "\n---------------------------\n\n";

}
while (Isabella == true){

    // RNG 
    srand(time(NULL));
    int isabellaAttack = rand() % 4 + 2;
    int bearChoice = rand() % 3;
    int bearAttack = rand() % 3 + 3;
    int berries = rand() % 6;

            //user select    
                    std::cout << "Player Health: " << isabellaHealth << "     Player DMG : 0-5" << "                     Enemy Health: " << bearHealth << "\n\n";
                    std::cout << " 1) Attack \n";
                    std::cout << " 2) Defend \n";
                    std::cout << " 3) Infatuate \n";
                    std::cout << " 4) Items \n";
                    std::cout << " 5) Flee \n";
                    std::cout << "\nSelect choice here: ";
                    std::cin >> choice;
                    std::cout << "\n---------------------------\n";

        //attack
            if (choice == 1){
                bearHealth = bearHealth - isabellaAttack;
                std::cout << "\nYou did " << isabellaAttack << " damage to the enemy!\n";
             std::cout << "                                                       Enemy Health: "<< bearHealth << "\n";
            } else if (choice == 2){
                std::cout << "\nYou chose defend!\n\n";   
            } else if (choice == 3){
                std::cout << "\nYou chose Infatuate!\n\n";
            } else if (choice == 4){
                std::cout << "\nItem Select\n\n";
            } else if (choice == 5){
                std::cout << "\nYou chose Flee!\\n";
            } else {
                std::cout << "\nInvalid Choice! Defending.\n\n";
            }
             std::cout << "\n---------------------------\n\n";



        if(bearHealth <= 0){
                std::cout << "\nYou win!\n";
                break;
            } 

     if (bearChoice == 1){
        isabellaHealth = isabellaHealth - bearAttack;
        std::cout << "Bear Attacked! You took " << bearAttack << " damage!\n";
        } else if (bearChoice == 2){
        std::cout << "Bear is unaware... \n";
        } else if (bearChoice == 3){
        std::cout << "Bear found random berries! Munch Munch Munch...\n";
        bearHealth = bearHealth + berries;
        }

        if (isabellaHealth <= 0){
                std::cout << "\nYou lose...\n";
                break;
        }

}

// break end
system("pause");
return 0;
}