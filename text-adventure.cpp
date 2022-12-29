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
std::cout << "\n\n                                  Welcome to RNG Hell!                             \n" 
          << "|-------------------------------------------------------------------------------------|\n"
          << "|This game is played best using a keyboard with functional .\n" 
          << "|number keys You select numbers progressively which will \n"
          << "|ultimately effect your outcome during the mini-game.\n|\n"
          << "|If you would like to provide feedback go ahead and join the discord link down below.\n"
          << "|Feedback includes: Noticable Bugs, Calculation Bugs, mispelling.\n"
          << "|Feedback does not include: Unsolicited opinions. This is to better myself as a SWE.\n|\n"
          << "|                             https://discord.gg/MDYx2RceMG\n"
          << "|-------------------------------------------------------------------------------------|\n\n";



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
int itemSelect; 
int bearHealth = 100;
int isabellaHealth = 25;
int florenceHealth = 20;
int potion = 10;
int hiPotion = 20;
int potionAmount = 2;
int hiPotionAmount = 1; 
int berserkPotionAmount = 2;
int poisonMolotovAmount = 2;
int berserk = false;
int bearBerserk = false;
int adrenaline = false;
int adrenalineCounter = 0;
int berserkCounter;
int bearBerserkCounter;
int defend;
int total;
while (Florence == true){

    // RNG 
    srand(time(NULL));
    int florenceAttack = rand() % 7;
    int bearChoice = rand() % 4 + 1;
    int bearAttack = rand() % 2 + 3;
    int defendAmount = rand() % 5 + 2;
    int berries = rand() % 6 + 1;
    int fleeChance = rand() % 40;
    




       //user select    
                    std::cout << "Player Health: " << florenceHealth << "   Player DMG: 0-7 " << "  Enemy Health: " << bearHealth << "\n\n";
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
            if(berserk = true){ 
                florenceAttack = florenceAttack * 2;
                bearHealth = bearHealth - florenceAttack;
            } else if(florenceAttack == 5){
                florenceAttack = florenceAttack + 5;
                bearHealth = bearHealth - florenceAttack;
                std::cout << "\nCritical hit! You did " << florenceAttack << " damage!\n";
            } else if(berserk == false){
                bearHealth = bearHealth - florenceAttack;
            }

            if(florenceAttack == 0) {
                std::cout << "\nYou missed!\n";
            } else if (florenceAttack > 0){
                std::cout << "\nYou did " << florenceAttack << " damage to the enemy!\n";
            }
        } else if (choice == 2){
                std::cout << "\nYou chose defend!\n";   
                std::cout << "\nBlock " << defendAmount <<" damage!\n\n";
                defend = true;
        } else if (choice == 3){
            std::cout << "\nYou chose Adreneline!\n";
            std::cout << "You took 5 damage but you lifesteal off of enemies and take less damage!\n";
            adrenalineCounter + 3;
        } else if (choice == 4){
            
            std::cout << "\nItem Select\n";
            std::cout << "----------------------| Amount |\n";
            std::cout << "1) Potion             |   " << potionAmount << "    |\n";
            std::cout << "2) Hi-Potion          |   " << hiPotionAmount << "    |\n";
            std::cout << "3) Berserk Potion     |   " << berserkPotionAmount << "    |\n";
            std::cout << "Choose an item: ";
            std::cin >> itemSelect;
            std::cout << "---------------------------\n";
            if(itemSelect == 1 && potionAmount > 0){
                potionAmount = potionAmount - 1;
                std::cout << "\nYou selected potion! Healed by " << potion << "!\n";
                florenceHealth = florenceHealth + potion;
            } else if (itemSelect == 1 && potionAmount == 0){
                std::cout << "\nNo potions available!\n";
            } else if(itemSelect == 2 && hiPotionAmount > 0){
                hiPotionAmount = hiPotionAmount - 1;
                std::cout << "\nYou selected hi-potion! Healed by " << hiPotion << "!\n";
                florenceHealth = florenceHealth + hiPotion;
            } else if (itemSelect == 2 && hiPotionAmount == 0){
                std::cout << "\nNo potions available!\n";
            } else if (itemSelect == 3 && berserkPotionAmount > 0){
                berserkCounter + 3; 
                berserkPotionAmount = berserkPotionAmount - 1;
                std::cout << "\nYou selected berserk potion! Increase overall damage rate!\n";
                berserk = true;
            } else if (itemSelect == 3 && berserkPotionAmount == 0){
                std::cout << "\nNo potions available!\n";
            }

        } else if (choice == 5){
            std::cout << "\nYou chose Flee!\n\n";
            if(fleeChance == 25){
                std::cout << "\nYou have successfully ran away!\n";
                break;
            }
        } else {
            std::cout << "\nInvalid Choice! Defending.\n\n";
        }

        
           

            if(bearHealth > 0){
                total = total + florenceAttack;
                } else if(bearHealth <= 0){
                    std::cout << "\nYou win!\n";
                    std::cout << "Florence did a total of " << total << " damage!\n";
                    break;
                    } 

        //Bear Moves Florence
            if (bearChoice == 1){
                if(defend == true){
                    bearAttack / 2;
                if(bearBerserk == true){
                bearAttack = bearAttack * 2;
                florenceHealth = florenceHealth - bearAttack;
                std::cout << "\nBear Attacked! You took " << bearAttack << " damage!\n";
                } else if (bearBerserk == false){
                    if(defend == false){
                    if(adrenaline == true){
                            bearAttack - 2;
                            florenceHealth = florenceHealth - bearAttack;
                        } else if(adrenaline == false){
                                florenceHealth = florenceHealth - bearAttack;
                        }
                    } else if (defend == true){
                        if(adrenaline == true){
                            bearAttack - 2 - defendAmount;
                            florenceHealth = florenceHealth - bearAttack;
                        } else if(adrenaline == false){
                            bearAttack - defendAmount;
                            florenceHealth = florenceHealth - bearAttack;
                        }
                    }
                         
                    
                std::cout << "\nBear Attacked! You took " << bearAttack << " damage!\n";
                }
            }
            } else if (bearChoice == 2){
            std::cout << "\nBear is enraged! Increased chance for crit.\n";
            bearBerserk = true;
            bearBerserkCounter + 3;
            } else if (bearChoice == 3){
            std::cout << "\nBear found random berries! Munch Munch Munch...\n";
            bearHealth = bearHealth + berries;
            std::cout << "\nBear healed by " << berries << " health!\n";
            } else if (bearChoice == 4){
            std::cout << "\nBear found random berries! Munch Munch Munch... \n";
            bearHealth = bearHealth - berries;
            std::cout << "\nBear damaged by " << berries << " health!\n";
            }


        if (florenceHealth <= 0){
            std::cout << "\nYou lose...\n";
            break;
        }

        if (berserk == true){
            berserkCounter = berserkCounter - 1;
            if(berserkCounter == 0){
                berserk = false;
                std::cout << "\nFlorence is no longer berserk!\n";
            }
        }
           if (bearBerserk == true){
            bearBerserkCounter = bearBerserkCounter - 1;
            if(bearBerserkCounter == 0){
                bearBerserk = false;
                std::cout << "\nBear is no longer berserk!\n";
            }
        }

         std::cout << "\n---------------------------\n\n";      
}
while (Isabella == true){

    // RNG 
    srand(time(NULL));
    int isabellaAttack = rand() % 5;
    int bearChoice = rand() % 4 + 1;
    int bearAttack = rand() % 3 + 3;
    int defendAmount = rand() % 5 + 2;
    int berries = rand() % 8 + 1;
    int fleeChance = rand() % 40;
    int poisonMolotov = rand() % 5 * 5;

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

            } else if (choice == 2){
                std::cout << "\nYou chose defend!\n\n";   
                std::cout << "\nBlock" << defendAmount << " damage!\n\n";
                defend = true;

            } else if (choice == 3){
                std::cout << "\nYou chose Infatuate!\n\n";

            } else if (choice == 4){
                
            std::cout << "\nItem Select\n";
            std::cout << "----------------------| Amount |\n";
            std::cout << "1) Potion             |   " << potionAmount << "    |\n";
            std::cout << "2) Hi-Potion          |   " << hiPotionAmount << "    |\n";
            std::cout << "3) Poison Molotov     |   " << poisonMolotovAmount << "    |\n";
            std::cout << "Choose an item: ";
            std::cin >> itemSelect;
            std::cout << "---------------------------\n";
            if(itemSelect == 1 && potionAmount > 0){
                potionAmount = potionAmount - 1;
                std::cout << "\nYou selected potion! Healed by " << potion << "!\n";
                isabellaHealth = isabellaHealth + potion;
            } else if (itemSelect == 1 && potionAmount == 0){
                std::cout << "\nNo potions available!\n";
            } else if(itemSelect == 2 && hiPotionAmount > 0){
                hiPotionAmount = hiPotionAmount - 1;
                std::cout << "\nYou selected hi-potion! Healed by " << hiPotion << "!\n";
                isabellaHealth = isabellaHealth + hiPotion;
            } else if (itemSelect == 2 && hiPotionAmount == 0){
                std::cout << "\nNo potions available!\n";
            } else if (itemSelect == 3 && poisonMolotovAmount > 0){
                poisonMolotovAmount = poisonMolotovAmount - 1;
                bearHealth = bearHealth - poisonMolotov;
                std::cout << "\nYou selected poison molotov! \nYou did " << poisonMolotov << " damage to the enemy!\n";

            } else if (itemSelect == 3 && poisonMolotovAmount == 0){
                std::cout << "\nNo potions available!\n";
            }

            } else if (choice == 5){
                std::cout << "\nYou chose Flee!\n";
                std::cout << fleeChance;
                if(fleeChance == 25){
                    std::cout << "\nYou have successfully ran away!\n";
                    break;
                }
            } else {
                std::cout << "\nInvalid Choice! Defending.\n\n";
            }



        if(bearHealth <= 0){
                std::cout << "\nYou win!\n";
                break;
            } 

     if (bearChoice == 1){
                if(bearBerserk == true){
                bearAttack = bearAttack * 2;
                isabellaHealth = isabellaHealth - bearAttack;
                std::cout << "\nBear Attacked! You took " << bearAttack << " damage!\n";
                } else if (bearBerserk == false){
                    if(defend == false){
                        isabellaHealth = isabellaHealth - bearAttack;
                    } else if (defend == true){
                        bearAttack = bearAttack - defendAmount;
                        isabellaHealth = isabellaHealth - bearAttack;
                    }
                std::cout << "\nBear Attacked! You took " << bearAttack << " damage!\n";
                }
            } else if (bearChoice == 2){
            std::cout << "\nBear is enraged! Increased chance for crit.\n";
            bearBerserk = true;
            bearBerserkCounter + 3;
            } else if (bearChoice == 3){
            std::cout << "\nBear found random berries! Munch Munch Munch...\n";
            bearHealth = bearHealth + berries;
            std::cout << "\nBear healed by " << berries << " health!\n";
            } else if (bearChoice == 4){
            std::cout << "\nBear found random berries! Munch Munch Munch... \n";
            bearHealth = bearHealth - berries;
            std::cout << "\nBear damaged by " << berries << " health!\n";
            }


        if (isabellaHealth <= 0){
                std::cout << "\nYou lose...\n";
                break;
        }


        //status counter resets.
        defend = false;

           std::cout << "\n---------------------------\n\n";

}

// break end
system("pause");
return 0;
}