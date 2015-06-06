/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Assignment #2
 *
 * Name:        UFFORD, ANIEFIOK PATRICK
 * Reg. No:   	45368006HH
 * Department:  COMPUTER SCIENCE
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int thisDay;
    int thisMonth;
    int thisYear;
    
    // Welcome information
    cout << "Welcome to our program to computerize healthcare records" << endl;
    cout << "please fill-in your information as requested. Thank you" << endl << endl;
    cout << "Kindly enter todays day, month and year using numeric representations only" << endl;
    cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break" << endl << endl;
    
    
    // Code to receive input from user here
    
	cout << "Enter the current day: ";
	cin >> thisDay;
	
	cout << "Enter the current month: ";
	cin >> thisMonth;
	
	cout << "Enter the current year: ";
	cin >> thisYear;

	cout << "Enter your first name: ";
	cin >> firstName;
	
	cout << "Enter your last name: ";
	cin >> lastName;
	
	cout << "Enter your gender (M or F): ";
	cin >> gender;
	
	cout << "Enter your month of birth (e.g. 07): ";
	cin >> month;
	
	cout << "Enter your day of birth (e.g. 23): ";
	cin >> day;
	
	cout << "Enter your year of birth (e.g. 1987): ";
	cin >> year;
	
	cout << "Enter your height (in meters): ";
	cin >> height;
	
	cout << "Enter your weight (in kg): ";
 	cin >> weight;

    
    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
	HealthProfile instance1 (firstName, lastName, gender, month, day, year, weight, height, thisDay, thisMonth, thisYear);
    
    // Print information from the object - by calling getInformation() function
    instance1.getInformation();

}
