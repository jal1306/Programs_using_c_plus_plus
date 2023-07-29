//3	Check the number is armstrong or not.

#include <iostream>
using namespace std;

int main() 
{
    int num, original, rem, res = 0;
    cout << "Enter number: ";
    cin >> num;
    original = num;

    while (original != 0) 
	{
        rem = original % 10;   
        res += rem * rem * rem;
        original /= 10;
    }

    if (res == num)
    {
        cout << num << " is an Armstrong number.";
    }
    else
    {
        cout << num << " is not an Armstrong number.";
    } 
    return 0;
}
