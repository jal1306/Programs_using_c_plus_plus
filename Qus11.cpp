// 11 Write a c++ program that counts the number of unique characters of two given strings.

#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

int cntDistinct(string str)
{
	map<char, int> count;
	for(int i = 0; i < str.size(); i++)
	{
		count[str[i]]++;
	}
	return count.size();
}
int main()
{
	char str[200];
    cout<<"Enter the String: ";
    gets(str);
	int ans = cntDistinct(str);
	cout << ans;
	cout << endl;
	return 0;
}
