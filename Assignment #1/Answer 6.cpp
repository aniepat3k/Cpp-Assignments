/*
Name: Ufford, Aniefiok Patrick
Department: Computer Science
Reg. No: 45368006HH

Assignment #1 answer 6
*/

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    double weightInKilograms;
    double heightInmetres;
    double BMI;
    
    // display welcome messages to user
    cout << "Welcome - This Body Mass Index (BMI) calculator application that reads\n";
    cout << "the user’s weight in kilograms and height in meters,\n";
    cout << "calculates and display the user’s body mass index\n\n";
    
    // TODO: display information from the Department of Health and Human Services



    
    // TODO: read in values
    cout << "Enter weight (in kg): ";
    cin>>weightInKilograms;
    cout << "Enter height (in meters): ";
    
     cin>>heightInmetres;
    
    // TODO: calculate BMI
    (cin,BMI=weightInKilograms/(heightInmetres*heightInmetres));
    
    // display result
    cout<<BMI;
if (BMI<18.5) {
cout<<"\tYou are Underweight";}
if (BMI>=18.5 and BMI<=24.9) {
cout<<"\tYou are Normal";}
if (BMI>=25 and BMI<=29.9) {
cout<<"\tYou are overweight";}
if (BMI>=30) {
cout<<"\tYou are obese";}
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}
