#include <iostream>

// ways to declare constants

int main() {
    
  // option 1 -
  const double wage{19.2223};
  
  const int months_year{12};
  
  // option 2 - enum
  

  // option 3 -  often used in legacy code (not current practice):
  
    #define pi 18.99;    // almost a blind find-replace directive. processor will switch all "pi" vars to this. don't use this
  
    return 0;
}
