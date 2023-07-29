// 4 Write a program to print all Prime numbers between 1 to n. n should be takens as varargs From user

#include <iostream>
using namespace std;

int main () 
{
	int num;
	cout << "Enter number: ";
    cin >> num;	
    for (int i=2; i<num; i++) 
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
                break;
            else if (i == j+1)
                cout << i << " ";
        }   
    return 0;
}

