
#include <iostream>
#include "Header.h"
using std::string;
using std::cout;
using std::cin;
using std::stoi;


void main()
{
	//for the main menu
	 string mainMenuChoice;

	//for factorial case
	string positiveNumber;

	//for polynomial case
	string poly1, poly2, poly3, polyMenuValue;
	int firstPoly[4] = {};
	int secondPoly[4] = {};
	int secPolyPos = 0;
	string polyNumber;

	//for simple math case
	string mathChoice;
	int num1, num2, sum;
	
	
	do {
		//main menu
		cout << " make a choice (type 1-3 or 'e' to exit) \n";
		cout << "1. Factorial\n";
		cout << "2. Polynomial math\n";
		cout << "3. Simple math operation\n";
		cin >> mainMenuChoice;

		if (checkInput(mainMenuChoice)) {
		switch (stoi(mainMenuChoice))
		{
		case 1:
			//factorial
			do
			{
				cout << "Enter a positive number (type 'e' to exit)\n";
				cin >> positiveNumber;

				if (checkInput(positiveNumber) && stoi(positiveNumber) > 0) {
					int result = factorial(stoi(positiveNumber));
					cout << "Factorial of " << positiveNumber << " is " << result << "\n";
				}

			} while (positiveNumber != "e");
			break;

		case 2:
			//polynomial
			//Checks user input and doesn't add it to the array unless its the right type.
			// Keeps asking until type is correct
			//Switches from adding to first to adding to the second array after third iteration of the loop
			for (int i = 0; i < 8; i++)
			{
				if (i > 3) {
					do
					{
						cout << "Value from second polynomial: ";
						cin >> polyNumber;


					} while (!checkInput(polyNumber));
					secondPoly[secPolyPos] = stoi(polyNumber);
					secPolyPos++;
				}
				else {
					do
					{
						cout << "Value from first polynomial: ";
						cin >> polyNumber;


					} while (!checkInput(polyNumber));
					firstPoly[i] = stoi(polyNumber);
				}

			}

			do
			{

				//After creating two arrays, each containing a polynomial, we can do math.
				cout << "\nWhat math operation would like to perform on the polynomial(1-3 or 'e' to exit)\n";
				cout << "1. Addition\n";
				cout << "2. Subtraction\n";
				cout << "3. Multiplication\n";
				cin >> polyMenuValue;

				if (polyMenuValue == "e") {
					break;
				}
				else if (checkInput(polyMenuValue))
				{
					switch (stoi(polyMenuValue))
					{
					case 1:
						cout << addPolynomial(firstPoly, secondPoly);
						break;
					case 2:
						cout << subPolynomial(firstPoly, secondPoly);
						break;
					case 3:
						cout << multiplyPolynomial(firstPoly, secondPoly);
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
				cout << "\nChoose(1-4, or type 'e' to exit): \n";
				cout << "1. Addition\n";
				cout << "2. Subtraction\n";
				cout << "3. Division\n";
				cout << "4. Multiplication\n";

				cin >> mathChoice;
				if (checkInput(mathChoice) && stoi(mathChoice) < 5) {
					switch (stoi(mathChoice))
					{
						//Addition
					case 1:
						cout << "Enter first number: ";
						cin >> num1;
						cout << "Enter second number: ";
						cin >> num2;

						sum = addition(num1, num2);
						cout << "\nThe sum is " << sum;
						break;

						//Subtraction
					case 2:
						cout << "Enter first number: ";
						cin >> num1;
						cout << "Enter second number: ";
						cin >> num2;

						sum = subtraction(num1, num2);
						cout << "\nThe sum is " << sum;
						break;



						//Division
					case 3:
						cout << "Enter first number: ";
						cin >> num1;
						cout << "Enter second number: ";
						cin >> num2;

						sum = division(num1, num2);
						cout << "\nThe sum is " << sum;
						break;


						//Multiplication
					case 4:
						cout << "Enter first number: ";
						cin >> num1;
						cout << "Enter second number: ";
						cin >> num2;

						sum = multiplication(num1, num2);
						cout << "\nThe sum is " << sum;
						break;


					default:
						break;
					}
				}
			} while (mathChoice != "e");
			break;
	
		default:
			//if wrong input
			cout << "Wrong input type\n";
			break;
		}
	}
	} while (mainMenuChoice != "e");

}