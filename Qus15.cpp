//15 Write a c++ program to sort characters (numbers and punctuation symbols are not included) in a string. 

#include <iostream>
#include <string>
using namespace std;
int main() 
{
  string str;
  cout << "Enter a string:- ";
  cin >> str;
  cout<<"Original string:- "<<str;
  char ch[str.length()];
  for (int i = 0; i < str.length(); i++) 
  {
    ch[i] = str[i];
  }
  for (int i = 0; i < str.length(); i++) 
  {
    for (int j = i + 1; j < str.length(); j++) 
	{
      if (ch[i] > ch[j]) 
	  {
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
      }
    }
  }
  cout<<"\nSorted string:- ";
  for (int i = 0; i < str.length(); i++) 
  {
    cout << ch[i];
  }
  return 0;
}

