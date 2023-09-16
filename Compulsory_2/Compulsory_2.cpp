
#include <iostream>
#include "Header.h"
#include <string>



void main()
{
	//for the main menu
	int mainMenuChoice;

	//for factorial case
	std::string positiveNumber;

	//for simple math case
	std::string mathChoice;
	int num1;
	int num2;
	int sum;
	
	//main menu
	do{
		

		std::cout << " make a choice (type 9 to exit) \n";
		std::cin >> mainMenuChoice;
		switch (mainMenuChoice)
		{
		case 1:
			//factorial
			do
			{
				std::cout << "Enter a positive number (type 'e' to exit)\n";
				std::cin >> positiveNumber;
				if(checkInput(positiveNumber) && std::stoi(positiveNumber)>0){
					int result = factorial(std::stoi(positiveNumber));
					std::cout << "Factorial of " << positiveNumber << " = " << result << "\n";
				}

			} while (positiveNumber != "e");
			break;

		case 2:
			//polynomial
			break;

		case 3:
			
			do
			{
				std::cout << "\nChoose(1-4, or type 'e' to exit): \n";
				std::cout << "1.Addition\n";
				std::cout << "2.Subtraction\n";
				std::cout << "3.Division\n";
				std::cout << "4.Multiplication\n";

				std::cin >> mathChoice;
				if (checkInput(mathChoice) && std::stoi(mathChoice) < 5) {
					switch (std::stoi(mathChoice))
					{
						//Addition
					case 1:
						std::cout << "Enter first number: ";
						std::cin >> num1;
						std::cout << "Enter second number: ";
						std::cin >> num2;

						sum = addition(num1, num2);
						std::cout << "\nThe sum is " << sum;
						break;

						//Division
					case 2:
						std::cout << "Enter first number: ";
						std::cin >> num1;
						std::cout << "Enter second number: ";
						std::cin >> num2;

						sum = division(num1, num2);
						std::cout << "\nThe sum is " << sum;
						break;



						//Subtraction
					case 3:
						std::cout << "Enter first number: ";
						std::cin >> num1;
						std::cout << "Enter second number: ";
						std::cin >> num2;

						sum = subtraction(num1, num2);
						std::cout << "\nThe sum is " << sum;
						break;


						//Multiplication
					case 4:
						std::cout << "Enter first number: ";
						std::cin >> num1;
						std::cout << "Enter second number: ";
						std::cin >> num2;

						sum = multiplication(num1, num2);
						std::cout << "\nThe sum is " << sum;
						break;


					default:
						break;
					}
				}
			} while (mathChoice != "e");
				break;

		case 9:
			break;

		default:
			//if wrong type
			std::cout << "wrong answer\n";
			std::cin >> mainMenuChoice;
			//runProgram = true;
			std::cout << mainMenuChoice;
			break;
		}
		
	} while (mainMenuChoice != 9);

}