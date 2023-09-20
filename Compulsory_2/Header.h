#pragma once

#include <iostream>
#include <string>
#include<sstream>


/// <summary>
/// Returns the Factorial of a number.
/// </summary>
/// <param name="x">Number</param>
/// <returns>(Int) factorial of a number</returns>
int factorial(int x) {
	if (x > 1) {
		return x * factorial(x - 1);
	}
	else {
		return 1;
	}
	return 0;
}

/// <summary>
///	Adds two polynomials together
/// </summary>
/// <param name="a"> First polynomial (as array)</param>
/// <param name="b">Second polynomial (as array)</param>
/// <returns>(String) ex: ax^3 + bx^2 + cx + d</returns>
std::string addPolynomial(int a[4], int b[4]) {
	int result[4] = {};

	for (int i = 0; i < 4; i++) {
		result[i] = a[i] + b[i];
	}
	std::string factor1 = std::to_string(result[0]) + "x^3 + ";
	std::string factor2 = std::to_string(result[1]) + "x^2 + ";
	std::string factor3 = std::to_string(result[2]) + "x + ";
	std::string factor4 = std::to_string(result[3]);
	
	return factor1 + factor2 + factor3 + factor4;
}

/// <summary>
/// Subtracts one polynomial from another
/// </summary>
/// <param name="a">First polynomial (as array)</param>
/// <param name="b">Second polynomial (as array</param>
/// <returns>(String) ex: ax^3 + bx^2 + cx - d</returns>
std::string subPolynomial(int a[4], int b[4]) {
	int result[4] = {};

	for (int i = 0; i < 4; i++) {
		result[i] = a[i] - b[i];
	}
	std::string factor1 = std::to_string(result[0]) + "x^3 + ";
	std::string factor2 = std::to_string(result[1]) + "x^2 + ";
	std::string factor3 = std::to_string(result[2]) + "x - ";
	std::string factor4 = std::to_string(result[3]);

	return factor1 + factor2 + factor3 + factor3;
}

/// <summary>
/// Multiplies two polynomials
/// </summary>
/// <param name="a">First polynomial (as array)</param>
/// <param name="b">Second polynomial (as array)</param>
/// <returns>(String) New polynomial</returns>
std::string multiplyPolynomial(int a[4], int b[4]) {
	int product[8] = {};
	
	//for each value in first array, multiply in with the every value in second array
	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 4; k++) {
			product[i+k] += a[i] * b[k];
		}
	}
	std::string factor1 = std::to_string(product[0]) + "x^6 + ";
	std::string factor2 = std::to_string(product[1]) + "x^5 + ";
	std::string factor3 = std::to_string(product[2]) + "x^4 + ";
	std::string factor4 = std::to_string(product[3]) + "x^3 + ";
	std::string factor5 = std::to_string(product[4]) + "x^2 + ";
	std::string factor6 = std::to_string(product[5]) + "x + ";
	std::string factor7 = std::to_string(product[6]);


	return factor1 + factor2 + factor3 + factor4 + factor5 + factor6 + factor7;
}

/// <summary>
/// Add two numbers
/// </summary>
/// <param name="a">First value</param>
/// <param name="b">Second value</param>
/// <returns>(int) sum</returns>
int addition(int a,int b) {
	int sum = a + b;
	return sum;
}

/// <summary>
///	Divide two numbers
/// </summary>
/// <param name="dividend">First value</param>
/// <param name="divisor">Second value</param>
/// <returns>(Int) quotient</returns>
int division(int dividend, int divisor) {
	int quotient = dividend / divisor;
	return quotient;
}

/// <summary>
/// Multiply two numbers
/// </summary>
/// <param name="a">First value</param>
/// <param name="b">Second value</param>
/// <returns>(int) sum</returns>
int multiplication(int a, int b) {
	int sum = a * b;
	return sum;
}

/// <summary>
///	Subtract two numbers
/// </summary>
/// <param name="a">First value</param>
/// <param name="b">Second value</param>
/// <returns>(int) sum</returns>
int subtraction(int a, int b) {
	int sum = a - b;
	return sum;
}

/// <summary>
///	Checks if the value is a number or contains string
/// </summary>
/// <param name="userInput">String input</param>
/// <returns>bool</returns>
bool checkInput(std::string userInput) {
	for (int i = 0; i < userInput.length(); i++)
	{
		if (!isdigit(userInput[i])) {
			return false;

		}
		return true;
	}
}

