#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Type Data Array
    int arr_number[] = {51, 12, 23, 34, 35, 89, 101, 99, 5};

    // Nilai dari panjang arr_number
    int arr_num_length = sizeof(arr_number) / sizeof(*arr_number);
    int temp;

    // perulangan arr_number
    for (int i = 0; i < arr_num_length; i++)
    {
        cout << arr_number[i] << " ";
    }

    cout << endl;
    cout << endl;

    // selected sort
    // untuk mengurutkan nilau arr_number dari terkecil ke tertinggi
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

    // pengulangan array dan tampilkan nilai array
    for (int d = 0; d < arr_num_length; d++)
    {
        cout << arr_number[d] << " ";
    }

    return 0;
};
