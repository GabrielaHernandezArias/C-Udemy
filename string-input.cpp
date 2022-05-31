#include <iostream>  // we need to use the input and output libraries
#include <string>    // WAY 1: int to string typecast

int main() {
    // prompt user to enter fav number
    // cout - writes to console, cin- reads from the console
    
    int fav_num;  // declaring a variable
    
    std::cout << "Enter your fav number between 1 and 100: ";
    
    // reading number inputted by user (console.IN)
    std::cin >> fav_num;
    
    // WAY 1: typecast
    std::string num = std::to_string(fav_num);
    
    std::cout << "woah! that's my fav number too!" << std::endl;  // endl at the end "flushes out the buffers" ?
    
    // WAY 1: 
    std::cout << "no, really!, " + num + " is my favorite! " << std::endl; 
    
    // WAY 2:
    std::cout << "no, really!, " <<  fav_num <<  " is my favorite! " << std::endl; 
     
    return 0;
}
