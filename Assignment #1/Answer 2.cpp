/*
Name: Ufford, Aniefiok Patrick
Department: Computer Science
Reg. No: 45368006HH

Assignment #1 answer 2
*/

#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	
	cout<<"WELCOME TO THIS PROGRAM, PLEASE INPUT YOUR NUMBERS:";
	cin>>num1 >>num2;
	
	if(num1 % num2==0)
	cout<<num1<<"correct, is a multiple of"<<num2<<endl;
	
	if(num1 %num2!=0)
	cout<<num1<<" wrong,is not a multiple of"<<num2<<endl;
	
	return 0;
}
