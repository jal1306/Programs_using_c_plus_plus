// 10 "Write a c++ Program to Check if two strings are anagrams of each other. 

#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

bool areAnagram(string str1, string str2)
{
	int n1 = str1.length();
	int n2 = str2.length();

	if (n1 != n2)
		return false;

	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());

	for (int i = 0; i < n1; i++)
		if (str1[i] != str2[i])
			return false;

	return true;
}

int main()
{
	char str1[50],str2[50];
    cout<<"\nEnter first String :- ";
    cin>>str1;
    cout<<"\nEnter second String :- ";
    cin>>str2;

	if (areAnagram(str1, str2))
		cout <<"strings are anagrams ";
	else
		cout << "strings are not anagrams";
	return 0;
}

