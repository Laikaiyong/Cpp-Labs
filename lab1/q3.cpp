#include <iostream>

using namespace std;

int main()
{
    const char blank = ' ';
    const char pattern = '*';
    int dimension;

    cout << "Enter rows of diamond dimension: ";
    cin >> dimension;

    int max_pixel = (dimension * 2) - 1;

    for (int part = 1; part <= 2; part++)
    {
        if (part == 1)
        {
            for (int pixel = 1; pixel <= dimension; pixel++)
            {
                int pattern_needed = (pixel * 2) - 1;
                int blank_needed = max_pixel - pattern_needed;
                cout << string((blank_needed / 2), blank) << string(pattern_needed, pattern) << endl;
            }
        }
        else
        {
            for (int pixel = max_pixel - 2; pixel >= 1; pixel -= 2)
            {
                int pattern_needed = pixel;
                int blank_needed = max_pixel - pattern_needed;
                cout << string((blank_needed / 2), blank) << string(pattern_needed, pattern) << endl;
            }
        }
    }
}