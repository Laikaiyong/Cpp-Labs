#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int number_array[10];
    int N = (100 + 1 - 10);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < sizeof(number_array) / sizeof(int); j++)
        {
            int randomized = rand() % N + 10;
            if (randomized != number_array[j])
            {
                number_array[i] = randomized;
            }
        }
    }

    for (int index = 0; index < sizeof(number_array)  / sizeof(int); index++)
    {
        cout << number_array[index] << endl;
    }
    return 0;
}