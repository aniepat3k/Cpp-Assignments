#include <iostream>

using namespace std;


int main()
{
double feet;
double inches;
double height;
double weight;
double bmi;

cout << "\n  ENTER HEIGHT" << endl;

cout << "Feet:" << endl;
cin >> feet;

cout << "Inches:" << endl;
cin >> inches;

cout << "\n  ENTER WEIGHT" << endl;
cout << "Pounds:" << endl;
cin >> weight;

height = (feet * 12) + inches;
bmi= (weight*703) / (height * height);

cout << "\nBMI VALUES\n";
cout << "- Underweight: less than 18.5\n";
cout << "- Normal: between 18.5 and 24.9\n";
cout << "- Overweight: between 25 and 29.9\n";
cout << "- Obese: 30 and greater\n";
cout << "\n\n";
cout << "\tYour BMI: " << bmi << endl;


return 0;
}
