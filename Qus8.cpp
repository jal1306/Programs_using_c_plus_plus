// 8  Write a Practical to check enters year is leap year or not.(Don't use inbuilt Function)

#include <iostream>
using namespace std;
int main() 
{
    int y,a,c;
    cout << "Enter the year: ";
    cin >> y;
    if(y!=0)
    {
		a=(y%400==0)?(c=1):((y%100==0)?(c=0):((y%4==0)?(c=1):(c=0)));       
		if(a==1)
		{		
			cout << y << " is a leap year";    
		}
		else
		{
			cout << y << " is not a leap year";     
		}
	}
  return 0;
}

