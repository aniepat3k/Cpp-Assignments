#include <iostream>

using namespace std;

int main ()
{
 int num;

 cout << "Enter a 5-digit number" << endl;
 
 cin >> num;
 
 cout << "\n\t";
 
 cout << num / 10000 << "\t";
 
 num = num % 10000;
 cout << num / 1000 << "\t";
 
 num = num % 1000;
 cout << num / 100 << "\t";
 
 num = num % 100;
 cout << num / 10 << "\t";
 
 num = num % 10;
 cout << num << endl;

return 0;
}

