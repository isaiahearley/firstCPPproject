#include <iostream>
#include <stdlib.h>

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
    std::cout << "Invalid Response.";
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



}