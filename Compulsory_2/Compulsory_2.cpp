
#include <iostream>
#include "Header.h"
#include <string>



void main()
{
	//for the main menu
	std:: string mainMenuChoice;

	//for factorial case
	std::string positiveNumber;

	//Polynomial
	std::string poly1, poly2, poly3, polyMenuValue;
	int firstPoly[4] = {};
	int secondPoly[4] = {};
	int secPolyPos = 0;
	std::string polyNumber;
	 
	int count;

	//for simple math case
	std::string mathChoice;
	int num1, num2, sum;
	
	//main menu
	do {

		std::cout << " make a choice (type 1-3 or 'e' to exit) \n";
		std::cout << "1. Factorial\n";
		std::cout << "2. Polynomial math\n";
		std::cout << "3. Simple math operation\n";
		std::cin >> mainMenuChoice;

		if (checkInput(mainMenuChoice)) {
		switch (std::stoi(mainMenuChoice))
		{
		case 1:
			//factorial
			do
			{
				std::cout << "Enter a positive number (type 'e' to exit)\n";
				std::cin >> positiveNumber;
				if (checkInput(positiveNumber) && std::stoi(positiveNumber) > 0) {
					int result = factorial(std::stoi(positiveNumber));
					std::cout << "Factorial of " << positiveNumber << " is " << result << "\n";
				}

			} while (positiveNumber != "e");
			break;

		case 2:
			//polynomial
			//Checks user input and doesn't add it to the array unless its the right type.
			// Keeps asking until type is correct
			//Switches from adding to first to the second array after third iteration of the loop
			for (int i = 0; i < 8; i++)
			{
				if (i > 3) {
					do
					{
						std::cout << "Value from second polynomial: ";
						std::cin >> polyNumber;


					} while (!checkInput(polyNumber));
					secondPoly[secPolyPos] = std::stoi(polyNumber);
					secPolyPos++;
				}
				else {
					do
					{
						std::cout << "Value from first polynomial: ";
						std::cin >> polyNumber;


					} while (!checkInput(polyNumber));
					firstPoly[i] = std::stoi(polyNumber);
				}

			}

			do
			{

				//After creating two arrays, each containing a polynomial, we can do math.
				std::cout << "\nWhat math operation would like to perform on the polynomial(1-3 or 'e' to exit)\n";
				std::cout << "1. Addition\n";
				std::cout << "2. Subtraction\n";
				std::cout << "3. Multiplication\n";
				std::cin >> polyMenuValue;

				if (polyMenuValue == "e") {
					break;
				}
				else if (checkInput(polyMenuValue))
				{
					switch (std::stoi(polyMenuValue))
					{
					case 1:
						std::cout << addPolynomial(firstPoly, secondPoly);
						break;
					case 2:
						std::cout << subPolynomial(firstPoly, secondPoly);
						break;
					case 3:
						std::cout << multiplyPolynomial(firstPoly, secondPoly);
						break;

					default:
						break;
					}
				}

			} while (polyMenuValue != "e");
			break;

		case 3:

			do
			{
				//Does simple math operations. takes two numbers separately then performs operation on them 
				std::cout << "\nChoose(1-4, or type 'e' to exit): \n";
				std::cout << "1. Addition\n";
				std::cout << "2. Subtraction\n";
				std::cout << "3. Division\n";
				std::cout << "4. Multiplication\n";

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

						sum = subtraction(num1, num2);
						std::cout << "\nThe sum is " << sum;
						break;



						//Subtraction
					case 3:
						std::cout << "Enter first number: ";
						std::cin >> num1;
						std::cout << "Enter second number: ";
						std::cin >> num2;

						sum = division(num1, num2);
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
	
		default:
			//if wrong type
			std::cout << "Wrong input type\n";
			break;
		}
	}
	} while (mainMenuChoice != "e");

}