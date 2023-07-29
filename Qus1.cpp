/*"Given an integer, , perform the following conditional actions:

If  is odd, print Weird
If  is even and in the inclusive range of 2 to 5, print Not Weird
If  is even and in the inclusive range of 6 to 20, print Weird
If  is even and greater than 20, print Not Weird"*/

#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int num;

    cout<< "Enter number : ";
    cin>> num;

	if(num%2!=0)
	{
		cout<< "Weird";
	}
	else if(num%2==0 && num>=2 || num<=5)
	{
		cout<< "Not Weird";
	}
	else if(num%2==0 && num>=6 || num<=20)
	{
		cout<< "Weird";
	}
	else if(num%2==0 && num>20)
	{
		cout<< "Not Weird";
	}
}
