#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

// Look up hungarian notation

int g_iRandomNumber = 0;
const double c_dPI = 3.14159;

bool bMarried = false;
char chMyGrade = 'A';
unsigned short int u16Age = 18;
short int siWeight = 160;
int nDAys = 7;
long lBigNum = 1100000;
float fPI = 3.141592;
double dbBibFloat = 1.11111111111111111111;
auto whatWillIBe = true; //<-- Compiler will decide (like "var" in js)

int main(int argc, char** argv)
{
	//PART 1
	// std::cout << "Hello World" << std::endl;
	//
	// if(argc != 1){
	// 	std::cout << "you entered " << argc << " arguments\n";
	//
	// 	for(int i = 0; i < argc; ++i){
	// 		std::cout << argv[i] << "\n";
	// 	}
	// }

	//PART 2
	// std::cout << "Min bool: " << std::numeric_limits<bool>::min() << "\n";
	// std::cout << "Max bool: " << std::numeric_limits<bool>::max() << "\n";
	//
	// std::cout << "Int size in bytes: " << sizeof(int) << "\n";
	//
	// printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.141592, "Hi");

	//PART 3
	// std::string sQuestion ("Enter Number 1: ");
	// std::string sNum1, sNum2;
	// std::cout << sQuestion;
	// getline(std::cin, sNum1);
	// std::cout << "Enter Number 2: ";
	// getline(std::cin, sNum2);
	//
	// int nNum1 = std::stoi(sNum1);
	// int nNum2 = std::stoi(sNum2);
	//
	// printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
	// printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
	// printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
	// printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
	// printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

	//TEST EXAMPLE
	//std::string sMiles = "";
     	// float fKM = 0.0f;
     	// int iMiles = 0;
	// 
     	// std::cout << "Enter Miles: ";
     	// getline(std::cin, sMiles);
     	// iMiles = std::stoi(sMiles);
     	// printf("%i Miles = %.4f kilometers", iMiles, (iMiles * 1.60934));
	

	return 0;
}
