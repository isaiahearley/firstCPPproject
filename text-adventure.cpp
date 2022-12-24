#include <iostream>

int main(){

//variables
    //character select
    // florence
int main_char = 1; 
int main_char2 = 2;

//instructions
std::cout << "Welcome to my story selector. This story is able to be played by selecting number keys 1 through 4 
with a variety of endings.";



//select character 
std::cout << "\nSelect a character: \n";
std::cout << "1) Florence   " << "2) Isabella\n";
std::cin >> main_char;

if (1 == main_char){
    std::cout << "You've selected Florence! \n";
} else if (2 == main_char2){
    std::cout << "You've selected Isabella! \n";
} else {
    std::cout << "Invalid Response.";
    return 0;
}

//story line
std::cout << "Once upon a time a... ";




}