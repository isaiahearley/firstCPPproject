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
          << "This game is played best using a keyboard with functional number keys.\n" 
          << "You select numbers progressively which will ultimately effect\n"
          << "your outcome and describe what type of person you are.\n";



//select character 
std::cout << "\nSelect a character: \n";
std::cout << "1) Florence       " << "2) Isabella\n";
std::cout << "--------------------------------\n";
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
    }


//story line

std::cout << "\n--------------------------------\n";
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


int choice; 
int Bear = 30;
int isabellaHealth = 23;
int florenceHealth = 17;
// for loop until bear health drops to 0 or less.



if (Florence == true){
while (Bear = 30 && florenceHealth > 17){
    //battle abilities
        if(Florence == true){
            std::cout << "Health: " << florenceHealth << "    DMG: 3-4\n\n";
            std::cout << " 1) Attack \n";
            std::cout << " 2) Defend \n";
            std::cout << " 3) Adrenaline \n";
            std::cout << " 4) Items \n";
            std::cout << " 5) Flee \n";
            std::cout << "Select choice here: ";
            std::cin >> choice;
        } 
    }
} else if (Isabella == true){
while (Bear = 30 && isabellaHealth > 17){
    if (Isabella == true){
            std::cout << "Health: " << isabellaHealth << "     DMG : 1-2\n\n";
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



system("pause");
return 0;
}


