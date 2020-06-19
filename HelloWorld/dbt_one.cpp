#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>



int main() {

     std::string sMiles = "";
     float fKM = 0.0f;
     int iMiles = 0;

     std::cout << "Enter Miles: ";
     getline(std::cin, sMiles);
     iMiles = std::stoi(sMiles);
     printf("%i Miles = %.4f kilometers", iMiles, (iMiles * 1.60934));

     return 0;
}
