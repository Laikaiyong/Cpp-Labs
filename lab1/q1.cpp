#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float gst = 0.06;
    float meal_cost;
    float tip;

    cout << "Meal Cost: ";
    cin >> meal_cost;
    cout << "Tip: ";
    cin >> tip;


    cout << "\nBEFORE GST\nMeal cost: " << meal_cost << "\nTipping: " << tip << endl;
    printf(
        "AFTER GST\nMeal cost: %.2f\nTipping: %.2f\n",
        meal_cost + (meal_cost * gst),
        tip
    ); 
}