#include <iostream>

using namespace std;


int main ()
{
	int integer;
	cout << "Enter a number" << endl;
	cin >> integer;

	if( integer % 2 == 0 ) {
    cout << "\n\t" << integer << " is an even number.\n";
    }
    else {
    cout << "\n\t" << integer << " is an odd number.\n";
    }

return 0;
}


