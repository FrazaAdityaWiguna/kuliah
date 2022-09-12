#include <iostream>
using namespace std;

int main()
{
    int value;

    cout << "Input your value: ";
    cin >> value;

    cout << "Value: " << value << endl;

    if (value > 0 && value <= 40)
    {
        cout << "Your value is C";
    }
    else if (value > 40 && value <= 60)
    {
        cout << "Your value is B";
    }
    else if (value > 60 && value <= 100)
    {
        cout << "Your value is A";
    }
    else
    {
        cout << "your input does not meet the requirements, please enter a number from 1 - 100...";
    }
    return 0;
};