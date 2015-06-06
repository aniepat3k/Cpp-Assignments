/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
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
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile(string firstName, string lastName, string gender, int month,
                             int day, int year, int weight, double height, int currentDay,
                             int currentMonth, int currentYear)
{
    setFirstName(firstName);
    setLastName(lastName);
    setGender(gender);
    setMonth(month);
    setDay(day);
    setYear(year);
    setWeight(weight);
    setHeight(height);
    setAge(currentDay, currentMonth, currentYear);
}

// function to print object information
void HealthProfile::getInformation()
{
    cout << "\n\n\tHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
    cout << " First Name: " << setw(18) << getFirstName() << endl;
    cout << " Last Name: " << setw(19) << getLastName() << endl;
    cout << " Gender: " << setw(20) << getGender() << endl;
    cout << " Date of Birth: " << setw(10) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << " Weight (in kilograms): " << setw(3) << getWeight() << endl;
    cout << " Height (in meters): " << setw(7) << getHeight() << endl;
    cout << " Age: " << setw(21) << getAge() << " year(s)" << endl;
    cout << " Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << " Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << " Target Heart Rate: " << setw(8) << getTargetHeartRate() << endl;
    cout << "\n\tBMI VALUES CHART" << endl;
    cout << "\tUnderweight:   less than 18.5" << endl;
    cout << "\tNormal:        between 18.5 and 24.9" << endl;;
    cout << "\tOverweight:    between 25 and 29.9" << endl;
    cout << "\tObese:         30 or greater\n\n" << endl;
}


// implementaion details for functions in HealthProfile.h

void HealthProfile::setFirstName(string firstN)
{
	firstName = firstN;
}

string HealthProfile::getFirstName()
{
	return firstName;
}

void HealthProfile::setLastName(string lastN)
{
	lastName = lastN;
}

string HealthProfile::getLastName()
{
	return lastName;
}

void HealthProfile::setGender(string sex)
{

	gender = sex;

}

string HealthProfile::getGender()
{
	return gender;
}

void HealthProfile::setMonth(int m)
{
	month = m;
}

int HealthProfile::getMonth()
{
	return month;
}

void HealthProfile::setDay(int d)
{
	day = d;
}

int HealthProfile::getDay()
{
	return day;
}

void HealthProfile::setYear(int y)
{
	year = y;
}

int HealthProfile::getYear()
{
	return year;
}

void HealthProfile::setHeight(double h)
{
	height = h;
}

double HealthProfile::getHeight()
{
	return height;
}

void HealthProfile::setWeight(int w)
{
	weight = w;
}

int HealthProfile::getWeight()
{
	return weight;
}


int HealthProfile::setAge(int thisMonth, int thisDay, int thisYear)
{
	int na = 0;
	if ((getMonth() == thisMonth) && (getDay() > thisDay)) na  = -1;
	if (getMonth() > thisMonth) na = -1;
	age = (thisYear - getYear() + na);	
}

int HealthProfile::getAge()
{
	return age;
}


int HealthProfile::getMaximumHeartRate()
{
	return (220 - getAge());
}

double HealthProfile::getTargetHeartRate()
{
	int max;
	max = getMaximumHeartRate();
	
	double N1, N2;
	
	N1 = max * 50 / 100;
	N2 = max * 85 / 100;
	return (N1-N2);
}

double HealthProfile::getBMI()
{
	return (weight / pow(height, 2));
}
