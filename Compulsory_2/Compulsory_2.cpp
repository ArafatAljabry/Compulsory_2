
#include <iostream>
#include "Header.h"
#include <string>



void main()
{
	bool runProgram = false;
	//main menu
	do{
		int mainMenuChoice;

		std::cout << " make a choice \n";
		std::cin >> mainMenuChoice;
		//int validatedChoice = validateInput(mainMenuChoice);
		switch (mainMenuChoice)
		{
		case 1:
			//factorial
			break;

		case 2:
			//polynomial
			break;

		case 3:
			//Addition, subtraction, division and multiplication
			break;

		case 9:
			//end program
			runProgram = false;
			break;
			
		default:
			//if wrong type
			std::cout << "wrong answer\n";
			runProgram = true;
			break;
		}
		
	} while (runProgram);

	

}