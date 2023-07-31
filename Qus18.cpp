// 18  How to find the smallest positive integer value that cannot be represented as sum of any subset of a given array?

#include <iostream>
using namespace std;

int findSmallest(int arr[], int n) {
    int res = 1; 

    for (int i = 0; i < n && arr[i] <= res; i++)
        res = res + arr[i];

    return res;
}

int main() {
    int n;
    cout<<"enter size of array:- ";
    cin>>n;

    int arr1[1];
    cout<<"enter elements for array:- ";
    for(int i=0; i<n; i++)
    { 
       cin>>arr1[i];
    }
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << findSmallest(arr1, n1) << "\n";

    return 0;
}
