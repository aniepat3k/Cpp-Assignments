#include <iostream>

using namespace std;


int main ()
{
	int number1, number2;
 	cout << "\n  Enter two integers" << endl;
 	cin >> number1 >> number2;
 
 	if( number1 % number2 == 0 ){
    cout << "\n  " << number1 << " is a multiple of " << number2 << endl;	// display if it is a multiple
    }
    else {
    cout << "\n  " << number1 << " is not a multiple of " << number2 << endl;	// display if it is not a multiple
    }
    
return 0;
}

