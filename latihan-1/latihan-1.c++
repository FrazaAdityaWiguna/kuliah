#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Array
    int arr_number[] = {51, 12, 23, 34, 35, 89, 101, 99, 5};
    int arr_num_length = sizeof(arr_number) / sizeof(*arr_number);
    int temp;

    for (int i = 0; i < arr_num_length; i++)
    {
        cout << arr_number[i] << " ";
    }

    cout << endl;
    cout << endl;

    // selected sort
    for (int a = 0; a < arr_num_length; a++)
    {
        for (int b = 0; b < arr_num_length; b++)
        {
            if (arr_number[a] < arr_number[b])
            {
                temp = arr_number[a];
                arr_number[a] = arr_number[b];
                arr_number[b] = temp;
            }
        }
    }

    for (int d = 0; d < arr_num_length; d++)
    {
        cout << arr_number[d] << " ";
    }

    return 0;
};
