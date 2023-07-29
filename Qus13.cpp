// 13 Write a c++ program to find the largest word in a given string. 

#include <iostream>
#include <string>

using namespace std;

string Longest_Word(string text) 
{
	string result_word, temp_str1;
	for (int x = 0; x < text.length(); x++)
	{
		if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x])<= 57)))
		{
			result_word.push_back(text[x]);
		}
		else
		{
			break;
		}
	}

   for (int x = 0; x < text.length(); x++)
	{
		if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57)))
		{
			temp_str1.push_back(text[x]);

			if (x + 1 == text.length() && temp_str1.length() > result_word.length())
			{
				result_word = temp_str1;
			}
		}
		else
		{
			if (temp_str1.length() > result_word.length())
			{
				result_word = temp_str1;
			}

			temp_str1.clear();
		}
	}
  
	return result_word;
}

int main() 
{
	char str[300];
    cout<<"Enter the String: ";
    gets(str);
    cout<<"Longest word in the string is:- "<<Longest_Word(str);
	return 0;
}


