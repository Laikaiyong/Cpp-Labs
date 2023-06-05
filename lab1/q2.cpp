#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string month;
    int year;
    int day;

    cout << "Enter Your Month (e.g. August 2019): ";
    cin >> month >> year;

   
    if(month == "January" || "March" || "May" || "June" || "August" || "October" || "December")
    {
        day = 31;
    }
    else if(month == "April" || "July" || "September" || "November")
    {
        day = 30;
    }
    else if(month == "February")
    {
        // If leap year
        if (year % 4 == 0)
        {
            day = 29;
        }
        else
        {
            day = 28;
        }
    }

    int hot_total = 0; 
    int rainy_total = 0; 
    int cloudy_total = 0; 

    cout << "Enter H for hot, R for Rainy, C for Cloudy, E to end: " << endl;
    for (int i = 1; i <= day; i++)
    {
        char selection;
        cout << "Day " << i << ": ";
        cin >> selection;

        if (toupper(selection) == 'H')
        {
            hot_total++;
        }
        else if (toupper(selection) == 'R')
        {
            rainy_total++;
        }
        else if (toupper(selection) == 'C')
        {
            cloudy_total++;
        }
        else if (toupper(selection) == 'E')
        {
            break;
        }
    }

    cout << "Total:\nHot Days: " << hot_total << "\nRainy Days: " << rainy_total << "\nCloudy Days: " << cloudy_total << endl;
}