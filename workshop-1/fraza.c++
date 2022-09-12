#include <iostream>
using namespace std;

int main()
{
    // tipe data
    string name = "Fraza Aditya Wiguna";
    int age = 20;
    double value = 9.5;
    char gender = 'L';

    // print to terminal
    cout << "Hello world!" << endl;
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "value : " << value << endl;
    cout << "gender : " << gender << endl;

    cout << endl;
    cout << endl;

    // Looping
    for (int a = 1; a <= 10; a++)
    {
        cout << "Loop ke-" << a << endl;

        // Condition
        if (a == 7)
        {
            cout << "coondition ke-" << a << endl;
        }
        else if (a == 8)
        {
            cout << "coondition ke-" << a << endl;
        }
        else
        {
            cout << "Other Condition" << endl;
        }
    }

    cout << endl;
    cout << endl;

    // Operator
    cout << "Pertambahan 5 + 2 = " << 5 + 2 << endl;
    cout << "Pengurangan 6 - 2 = " << 6 - 2 << endl;
    cout << "Perkalian 3 * 2 = " << 3 * 2 << endl;
    cout << "Pembagian 10 / 2 = " << 10 / 2 << endl;
    cout << "Hasil Bagi 9 % 7 = " << 9 % 7 << endl;

    cout << endl;

    cout << "Perkalian dari age * age = " << age * age << endl;
    cout << "Increament from age = " << age++ << " " << age << endl;
    cout << "Decrement from age = " << age-- << " " << age << endl;
    cout << "Age is: " << age << endl;

    cout << endl;
    cout << endl;

    return 0;
}
