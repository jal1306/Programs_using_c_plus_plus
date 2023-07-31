// 20  How to find if there is a sub array with sum equal to zero?

#include <iostream>
using namespace std;

bool subArrayExists(int arr[], int n)
{
	for (int i = 0; i < n; i++) 
	{
		int sum = arr[i];
		if (sum == 0)
			return true;
		for (int j = i + 1; j < n; j++) 
		{
			sum += arr[j];
			if (sum == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int n1;
    cout<<"enter size of array:- ";
    cin>>n1;

    int arr[n1];
    cout<<"enter elements for array:- ";
    for(int i=0; i<n1; i++)
    { 
       cin>>arr[i];
    }
	int N = sizeof(arr) / sizeof(arr[0]);

	if (subArrayExists(arr, N))
	{
		cout << "Found a subarray with 0 sum";
	}
	else
	{
		cout << "No Such Sub Array Exists!";
	}
	return 0;
}
