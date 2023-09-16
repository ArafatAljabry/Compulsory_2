#pragma once

#include <iostream>
#include <string>
#include<sstream>


//Returns the Factorial of a number.
int factorial(int x) {
	if (x > 1) {
		return x * factorial(x - 1);
	}
	else {
		return 1;
	}

	
	return 0;
}

int polynomial() {
	return 0;

}
// Adds two numbers together
int addition(int a,int b) {
	int sum = a + b;
	return sum;
}

// Divides a number with another 
int division(int dividend, int divisor) {
	int quotient = dividend / divisor;
	return quotient;
}

//Product of two numbers multiplied
int multiplication(int a, int b) {
	int sum = a * b;
	return sum;
}
//subtracts an amount from a number
int subtraction(int a, int b) {
	int sum = a - b;
	return sum;
}

//Checks if the input contains string, returns false if so
bool checkInput(std::string userInput) {
	for (int i = 0; i < userInput.length(); i++)
	{
		if (!isdigit(userInput[i])) {
			return false;
		}
	}
	return true;	
}

