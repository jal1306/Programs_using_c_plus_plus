// 2. Check String is Palindrom or not.

#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char string[40];
    int length=0, flag=1,i;

    cout<< "Enter string:\n";
    cin>> string;

    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }

    for(i=0;i< length/2;i++)
    {
        if( string[i] != string[length-1-i] )
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        cout<< " String is PALINDROME";
    }
    else
    {
        cout<< "String is not NOT PALINDROME";
    }
    return 0;
}
