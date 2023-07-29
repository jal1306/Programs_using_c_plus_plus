// 12 Write a c++ program to change every letter in a given string with the letter following it in the alphabet(ie. a becomes b, p becomes q, z becomes.)

#include <iostream>
#include <string>
using namespace std;
int main() 
{
  string str1;
  cout << "Enter a string: ";
  cin >> str1;
  string str2;
  for (int i = 0; i < str1.length(); i++) 
  {
    char letter = str1[i];
    char nextLetter = letter + 1;
    str2 += nextLetter;
  }
  cout << "The output string is: " << str2 << endl;
  return 0;
}
