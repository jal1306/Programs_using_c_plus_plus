// 7 "Write a Program that take input as your Birthdate and return us how many years, months , days, hours, minitus, seconds are pending for your birthdate.

#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int year, month, day;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter date: ";
    cin >> day;
    tm birthdate = {0, 0, 0, day, month - 1, year - 1900};
    time_t birthtime = mktime(&birthdate);
    double diff = difftime(birthtime, now);
    int seconds = (int)diff % 60;
    int minutes = (int)(diff / 60) % 60;
    int hours = (int)(diff / 3600) % 24;
    int days = (int)(diff / 86400) % 365;
    int years = (int)(diff / 31536000);
    cout << "You have " << years << " years, " << days << " days, " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds until your next birthday." << endl;
    return 0;
}
