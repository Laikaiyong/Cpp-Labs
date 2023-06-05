#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int array_size;
    int range_ten = 0;
    int range_twenty = 0;
    int range_thirty = 0;
    int range_forty = 0;
    int range_fifty = 0;

    cout << "Number of random numbers for analysis: ";
    cin >> array_size;

    int number_array[array_size];
    int N = (50 + 1 - 10);
    cout << "Analysis numbers:" << endl;
    for (int i = 0; i < array_size; i++)
    {
        int randomized = rand() % N + 10;
        number_array[i] = randomized;
        cout << number_array[i] << " ";
        if ((i + 1) % 10 == 0 && i != 0)
        {
            cout << endl;
        }

        if (randomized <= 10)
        {
            range_ten++;
        }
        else if (randomized <= 20)
        {
            range_twenty++;
        }
        else if (randomized <= 30)
        {
            range_thirty++;
        }
        else if (randomized <= 40)
        {
            range_forty++;
        }
        else if (randomized <= 50)
        {
            range_fifty++;
        }
    }


    const char pattern = '*';

    cout << endl << "Frequency:" << endl;
    cout << " 1 - 10 : " << string(range_ten, pattern) << endl;
    cout << "11 - 20 : " << string(range_twenty, pattern) << endl;
    cout << "21 - 30 : " << string(range_thirty, pattern) << endl;
    cout << "31 - 40 : " << string(range_forty, pattern) << endl;
    cout << "41 - 50 : " << string(range_fifty, pattern) << endl;
    return 0;
}