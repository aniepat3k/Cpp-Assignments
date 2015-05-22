/*
Name: Ufford, Aniefiok Patrick
Department: Computer Science
Reg. No: 45368006HH

Assignment #1 answer 4
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    int digits;
    
    // display welcome messages to user
    cout << "Welcome - This program reads a five-digit integer\n";
    cout << "separates the integer into its digits and prints them\n";
    cout << "separated by three spaces each\n\n";
    int fivedigit;
	int a,b,c,d,e;
	
	cout << "enter the five digit value: ";
	cin >> fivedigit;
	
	if(fivedigit < 10000){
		cout << " New form\t";
	}
	
	if(fivedigit > 9999)
	{
		cout << "New form\t";
	}
	
	a= fivedigit/10000;
	b= (fivedigit/1000)%10;
	c= (fivedigit/100)%10;
	d= (fivedigit/10)%10;
	e= fivedigit%10;
	
	cout << a;
	cout << " " << b;
	cout << " " << c;
	cout << " " << d;
	cout << " " << e;
	
    // TODO: Read integer using cin
    cout << "Enter five digit integer value -  ";

    
    // check if digit is a five digit integer
    if (to_string(digits).length() < 5 || to_string(digits).length() > 5)
    {
        cout << "\nERROR - Please enter a five digit integer";
    } else {
        // TODO: Separate the integer into its digits and prints them separated by three spaces each
        // Put code here ...
    
    }
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}
