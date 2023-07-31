//16 How to find common elements in three sorted array? 
#include <bits/stdc++.h>
using namespace std;

void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
{
  int i = 0, j = 0, k = 0;

  while (i < n1 && j < n2 && k < n3)
  {
  	if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
    { 
		cout << ar1[i] << " "; i++; j++; k++;
	}

    else if (ar1[i] < ar2[j])
    {
       i++;
	}
	
    else if (ar2[j] < ar3[k])
    {
      j++;
	}
	else
	{
      k++;
   	}
  }
}

int main()
{
   int n1;
   cout<<"enter size of first array:- ";
   cin>>n1;

   int ar1[n1];
   cout<<"enter elements for first array:- ";
   for(int i=0; i<n1; i++) 
    cin>>ar1[i];

   int n2;
    cout<<"enter size of second array:- ";
   cin>>n2;

   int ar2[n2];
   cout<<"enter elements for second array :- ";
   for(int i=0; i<n2; i++) 
    cin>>ar2[i];

   int n3;
    cout<<"enter size of third array:- ";
   cin>>n3;

   int ar3[n3];
   cout<<"enter elements for third array:- ";
   for(int i=0; i<n3; i++) 
    cin>>ar3[i];

   cout << "Common Elements are ";
   findCommon(ar1, ar2, ar3, n1, n2, n3);
   return 0;
}
