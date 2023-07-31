// 17 How find the first repeating element in an array of integers
#include <bits/stdc++.h>
using namespace std;

int firstRepeatingElement(int arr[], int n)
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = i + 1; j < n; j++) 
		{
			if (arr[i] == arr[j])
			{
				return i;
			}
		}
	}
	return -1;
}

int main()
{
	int n1;
    cout<<"enter size of first array:- ";
    cin>>n1;

    int arr[n1];
    cout<<"enter elements for first array:- ";
    for(int i=0; i<n1; i++)
    { 
       cin>>arr[i];
    }
	int n = sizeof(arr) / sizeof(arr[0]);
	int index = firstRepeatingElement(arr, n);

	if (index == -1) 
	{
		cout << "No repeating element found!" << endl;
	}
	else 
	{
		cout << "First repeating element is " << arr[index]<< endl;
	}
	return 0;
}

